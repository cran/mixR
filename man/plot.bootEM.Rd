% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/plot.bootEM.R
\name{plot.bootEM}
\alias{plot.bootEM}
\title{Plot Bootstrap Likelihood Ratio Test}
\usage{
\method{plot}{bootEM}(x, ...)
}
\arguments{
\item{x}{an object of class \code{bootEM}, which is the output of the function \code{\link{bs.test}}.}

\item{...}{the other parameters passed to the function \code{\link{hist}}}
}
\description{
This function is the plot method for the class \code{bootEM}.
}
\details{
The histogram of the bootstrap LRT statistics \eqn{w_1} is plotted, with the
observed LRT statistic imposed in a red vertical line.
}
\examples{
## plotting the bootstrap LRT result
set.seed(100)
x <- rmixnormal(200, c(0.5, 0.5), c(2, 5), c(1, 0.7))
ret <- bs.test(x, ncomp = c(2, 3), B = 30)
plot(ret)

}
\seealso{
\code{\link{bs.test}}
}
