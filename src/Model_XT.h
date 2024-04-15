#ifndef MODEL_XT_H
#define MODEL_XT_H

#include "Model.h"


class Model_XT : public Model {
public:
  /* Constructor */
  Model_XT();
  /* Virtual destructor */
  ~Model_XT();

  /* method used to calculate model PDF function */
  int pdf(double *RsumlogPDF, double *RPDFlow, double *RPDFupp, double *RlogPDFlow, double *RlogPDFupp, std::vector<double> rtl, std::vector<double> rtu, double *phi) const override;

  /* method used to calculate model CDF function */
  int cdf(double *RsumlogCDF, double *RCDFlow, double *RCDFupp, double *RlogCDFlow, double *RlogCDFupp, std::vector<double> rtl, std::vector<double> rtu, double *phi) const override;

  /* method used to draw random samples */
  int rand(double *Rrt, double *phi) const override;

  /* method used to construct grid for PDF */
  int grid_pdf(double *Rrt, double *Rpdf_u, double *Rpdf_l, double *phi) const override;


protected:

  /* method for the non-decision time */
  virtual double non_decision(const double phi[]) const=0;

  /* method for the start point */
  virtual double relative_start(const double phi[]) const=0;

  /* method for the drift rate */
  virtual double drift(const double phi[], double x, double t) const=0;

  /* method for the diffusion rate */
  virtual double diffusion(const double phi[], double x, double t) const=0;

  /* method for the upper threshold */
  virtual double upper_threshold(const double phi[], double t) const=0;

  /* method for the lower threshold */
  virtual double lower_threshold(const double phi[], double t) const=0;

  /* method for the contamination strength */
  virtual double contamination_strength(const double phi[]) const=0;

  /* method for the contamination probability distribution */
  virtual double contamination_probability(const double phi[], double t) const=0;

  /* method for locally modifying the time step size */
  virtual double modify_dt(const double phi[], double t) const=0;


private:

  /* method which sets time step for likelihood generating function */
  double approx_dt(double* phi, double dt_scale) const;

};

#endif
