/* file: Model.cpp
 Functions for defining model.
 Author: Matthew Murrow
 Date: Dec 22, 2023 */

#ifndef MODEL_H
#define MODEL_H

#include "tools.h"
#include <vector>
#include <memory>


/* -------------------------------------------------- */
/* -------------------------------------------------- */
/* -------------------------------------------------- */


/* Base model class */
class Model {
public:

  /* Constructor */
  Model();
  /* Virtual destructor */
  ~Model();

  /* method used to calculate model PDF function */
  virtual int pdf(double *RsumlogPDF, double *RPDFlow, double *RPDFupp, double *RlogPDFlow, double *RlogPDFupp, std::vector<double> rtl, std::vector<double> rtu, double *phi) const=0;

  /* method used to calculate model CDF function */
  virtual int cdf(double *RsumlogCDF, double *RCDFlow, double *RCDFupp, double *RlogCDFlow, double *RlogCDFupp, std::vector<double> rtl, std::vector<double> rtu, double *phi) const=0;

  /* method used to draw random samples */
  virtual int rand(double *Rrt, double *phi) const=0;

  /* method used to construct grid for PDF */
  virtual int grid_pdf(double *Rrt, double *Rpdf_u, double *Rpdf_l, double *phi) const=0;

};





#endif
