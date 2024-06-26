% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/SDDM.R
\name{dSDDM}
\alias{dSDDM}
\title{PDF of the Simple Drift Diffusion Model}
\usage{
dSDDM(
  rt,
  resp,
  phi = c(0.3, 0.5, 1, 1, 0.75, 0, 0, 1),
  x_res = "A",
  t_res = "A"
)
}
\arguments{
\item{rt}{vector of response times}

\item{resp}{vector of responses ("upper" and "lower")}

\item{phi}{parameter vector in the following order:
\itemize{
\item non-decision time
\item relative starting point
\item drift rate
\item diffusion rate
\item upper threshold (equals negative lower threshold)
\item contamination strength
\item contamination probability for the lower response
\item contamination probability for the upper response
}}

\item{x_res}{spatial/evidence resolution}

\item{t_res}{time resolution}

\item{rt_max}{maximal response time <- max(rt)}
}
\value{
a list of PDF values, log-PDF values, and the sum of the log-PDFs
}
\description{
Calculation the (Log-)PDF of the simple drift diffusion model (SDDM) by ???????????
}
\examples{
# here come some examples
}
\references{
Murrow, M., & Holmes, W. R. (2023). PyBEAM: A Bayesian approach to parameter
inference for a wide class of binary evidence accumulation models.
\emph{Behavior Research Methods}, 1-21.

????
}
\author{
Raphael Hartmann & Matthew Murrow
}
