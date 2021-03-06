% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/density.mixfitEM.R
\name{density.mixfitEM}
\alias{density.mixfitEM}
\title{The Density of Finite Mixture Models}
\usage{
\method{density}{mixfitEM}(x, smoothness = 512, from = NULL, to = NULL,
  cut = 3.5, ...)
}
\arguments{
\item{x}{an object of class \code{mixfitEM}}

\item{smoothness}{a positive integer controlling the smoothness of the density curve (default 512).
The higher this value is, the more locations of the mixture model the density is calculated.}

\item{from}{the starting location the density is going to be calculated}

\item{to}{the ending location the density is going to be computed}

\item{cut}{the number of standard deviations away the density is to be computed (default 3.5)}

\item{...}{other arguments passed to \code{\link[stats]{density}}}
}
\value{
This function returns a list of class \code{density}, which contains the following
items.
\item{x}{a numeric vector of locations where density is calculated.}
\item{y}{the density of the mixture model at the corresponding locations in \code{x}}
}
\description{
This function calculates the probability density of a finite mixture model.
}
\details{
The function \code{density.mixfitEM} is the method of the generic function
\code{density} for the class \code{mixfitEM}.
}
\examples{
set.seed(102)
x <- rmixnormal(200, c(0.5, 0.5), c(2, 5), c(1, 0.7))
fit1 <- mixfit(x, ncomp = 2)
fit2 <- mixfit(x, ncomp = 2, ev = TRUE)
plot(fit1, detail = FALSE, breaks = 20)
lines(density(fit2), col = "red")

}
\seealso{
\code{\link{mixfit}}
}
