## ----setup, include=FALSE-----------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE, 
  comment = "#>",
  #cache=TRUE,
  message=FALSE, 
  warning=FALSE,
  #fig.path='figs/',
  #fig.align="center",
  fig.width = 6,
  fig.height = 4)#,
  #cache.path = '_cache/')#,
                      #fig.process = function(x) {
                      #x2 = sub('-\\d+([.][a-z]+)$', '\\1', x)
                      #if (file.rename(x, x2)) x2 else x
                      #}
                      #)

## ---- cache=FALSE, fig.show="hold", out.width="50%", fig.cap="The fitted normal mixture model with unequal variances (left) and equal variance(right)"----
# generate data from a Normal mixture model
library(mixR)
set.seed(102)
x1 = rmixnormal(1000, c(0.3, 0.7), c(-2, 3), c(2, 1))

# fit a Normal mixture model (unequal variances)
mod1 = mixfit(x1, ncomp = 2); mod1

# fit a Normal mixture model (equal variance)
mod1_ev = mixfit(x1, ncomp = 2, ev = TRUE); mod1_ev

plot(mod1, title = 'Normal Mixture Model (unequal variances)')
plot(mod1_ev, title = 'Normal Mixture Model (equal variance)')

## ---- fig.show="hold", out.width="50%", cache=FALSE, eval=TRUE, fig.cap="The fitted Weibull mixture model (left) and Normal mixture model (right) to the same data"----
x2 = rmixweibull(1000, c(0.4, 0.6), c(0.6, 1.3), c(0.1, 0.1))
mod2_weibull = mixfit(x2, family = 'weibull', ncomp = 2); mod2_weibull
mod2_normal = mixfit(x2, ncomp = 2); mod2_normal
plot(mod2_weibull)
plot(mod2_normal)

## ---- fig.show="hold", out.width="50%", cache=FALSE, eval=TRUE, fig.cap="The value of BIC for Weibull mixture models (left) and Normal mixture models (right) with different values of $g$."----
# Selecting the best g for Weibull mixture model
s_weibull = select(x2, ncomp = 2:6, family = 'weibull')

# Selecting the best g for Normal mixture model
s_normal = select(x2, ncomp = 2:6)
plot(s_weibull)
plot(s_normal)

## ---- fig.show="hold", out.width="50%", cache=FALSE, eval=TRUE, fig.cap="The fitted Weibull mixture model with $g = 2$ (left) and the Normal mixture model with $g = 4$ and equal variance (right)"----
plot(mod2_weibull)
plot(mixfit(x2, ncomp = 4, ev = TRUE))

## ---- fig.show="hold", out.width="50%", cache=FALSE, eval=TRUE, fig.cap="(left) The bootstrap LRT of $H_0: g = 2$ against $H_1: g = 3$ for fitting Normal mixture models for data `x1`; (right) The bootstrap LRT of $H_0: g = 2$ against $H_1: g = 4$ for fitting Normal mixture models for data `x2`. In each plot the histogram shows the distribution of $w_1$ and the red line shows the value of $w_0$."----
b1 = bs.test(x1, ncomp = c(2, 3))
plot(b1, main = 'Bootstrap LRT for Normal Mixture Models (g = 2 vs g = 3)')
b1$pvalue
b2 = bs.test(x2, ncomp = c(2, 4))
plot(b2, main = 'Bootstrap LRT for Normal Mixture Models (g = 2 vs g = 4)')
b2$pvalue

## ---- fig.show="hold", out.width="50%", cache=FALSE, eval=TRUE, fig.cap="(left) The Normal mixture model fitted with binned data; (right) The Weibull mixture model fitted with binned data."----
x1_binned = bin(x1, seq(min(x1), max(x1), length = 30))
head(x1_binned, 3)

mod1_binned = mixfit(x1_binned, ncomp = 2)
plot(mod1_binned, xlab = 'x1_binned', 
     title = 'The Normal Mixture Model Fitted With Binned Data')
mod1_binned

x2_binned = bin(x2, seq(min(x2), max(x2), length = 30))
head(x2_binned, 3)

mod2_binned = mixfit(x2_binned, ncomp = 2, family = 'weibull')
plot(mod2_binned, xlab = 'x2_binned', 
     title = 'The Weibull Mixture Model Fitted With Binned Data')
mod2_binned

## ---- fig.show="hold", out.width="50%", cache=FALSE, eval=TRUE, fig.cap="Normal mixture models fitted to the raw data (left) and binned data (right)"----
# a function to generate parameters for a mixture model
generate_params = function(ncomp = 2) {
  pi = runif(ncomp)
  low = runif(1, 0, 0)
  upp = low + runif(1, 0, 10)
  mu = runif(ncomp, low, upp)
  sd = runif(ncomp, (max(mu) - min(mu))/ncomp/10, (max(mu) - min(mu))/ncomp/2)
  list(pi = pi / sum(pi), mu = sort(mu), sd = sd)
}

# simulate data from a Normal mixture model
set.seed(988)
n = 100000
ncomp = 5
params = generate_params(ncomp)
x_large = rmixnormal(n, pi = params$pi, mu = params$mu, sd = params$sd)

# fitting a Normal mixture model with raw data
t1 = Sys.time()
mod_large <- mixfit(x_large, ncomp = ncomp)
t2 = Sys.time()
t2 - t1

plot(mod_large, title = 'Normal Mixture Model Fitted With Raw Data')
mod_large

# fitting a Normal mixture model with binned data
t3 = Sys.time()
x_binned = bin(x_large, seq(min(x_large), max(x_large), length = 100))
mod_binned <- mixfit(x_binned, ncomp = ncomp)
t4 = Sys.time()
t4 - t3

plot(mod_binned, title = 'Normal Mixture Model Fitted With Binned Data')
mod_binned

