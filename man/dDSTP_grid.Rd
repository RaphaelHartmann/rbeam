% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/DSTP.R
\name{dDSTP_grid}
\alias{dDSTP_grid}
\title{Generate Grid for PDF of the Dual-Stage Two-Phase Model of Selective Attention}
\usage{
dDSTP_grid(
  rt_max = 10,
  phi = c(0.35, 0.5, 7.5, 40, 5, 5, 1, 0.5, 0, 0, 1),
  x_res = "A",
  t_res = "A"
)
}
\arguments{
\item{rt_max}{maximal response time <- max(rt)}

\item{phi}{parameter vector in the following order:
\itemize{
\item non-decision time of process 1
\item relative starting point of process 1
\item relative starting point for process 2
\item drift rate for process 2
\item diffusion rate for process 2
\item threshold separation for process 2
\item drift rate for target in process 1
\item drift rate for flanker in process 1
\item stage 2 drift rate for process 1
\item ?
\item diffusion rate of process 1
\item upper threshold of process 1 (equals negative lower threshold)
\item contamination strength of process 1
\item contamination probability for the lower response of process 1
\item contamination probability for the upper response of process 1
}}

\item{x_res}{spatial/evidence resolution}

\item{t_res}{time resolution}
}
\value{
such and such
}
\description{
Beschreibung.
}
\examples{
# here come some examples
}
\references{
Murrow, M., & Holmes, W. R. (2023). PyBEAM: A Bayesian approach to parameter inference for a wide class of binary evidence accumulation models.
Behavior Research Methods.

Hübner, R., Steinhauser, M., & Lehle, C. (2010). A dual-stage two-phase model of
selective attention. \emph{Psychological review, 117}(3), 759.
}
\author{
Raphael Hartmann & Matthew Murrow
}
