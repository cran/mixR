// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcmean
NumericVector rcmean(NumericMatrix x, int margin);
RcppExport SEXP mixR_rcmean(SEXP xSEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(rcmean(x, margin));
    return rcpp_result_gen;
END_RCPP
}
// rcsum
NumericVector rcsum(NumericMatrix x, int margin);
RcppExport SEXP mixR_rcsum(SEXP xSEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(rcsum(x, margin));
    return rcpp_result_gen;
END_RCPP
}
// expZ_norm_C
NumericMatrix expZ_norm_C(NumericVector x, NumericVector pi, NumericVector mu, NumericVector sd);
RcppExport SEXP mixR_expZ_norm_C(SEXP xSEXP, SEXP piSEXP, SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(expZ_norm_C(x, pi, mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// loglik_norm_C
double loglik_norm_C(NumericVector x, NumericVector pi, NumericVector mu, NumericVector sd);
RcppExport SEXP mixR_loglik_norm_C(SEXP xSEXP, SEXP piSEXP, SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_norm_C(x, pi, mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// norm_uv
List norm_uv(NumericVector x, NumericVector pi, NumericVector mu, NumericVector sd, int max_iter, double tol);
RcppExport SEXP mixR_norm_uv(SEXP xSEXP, SEXP piSEXP, SEXP muSEXP, SEXP sdSEXP, SEXP max_iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_uv(x, pi, mu, sd, max_iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// norm_ev
List norm_ev(NumericVector x, NumericVector pi, NumericVector mu, NumericVector sd, int max_iter, double tol);
RcppExport SEXP mixR_norm_ev(SEXP xSEXP, SEXP piSEXP, SEXP muSEXP, SEXP sdSEXP, SEXP max_iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_ev(x, pi, mu, sd, max_iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// enorm_trunc
double enorm_trunc(double a, double b, double mu, double sd);
RcppExport SEXP mixR_enorm_trunc(SEXP aSEXP, SEXP bSEXP, SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(enorm_trunc(a, b, mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// exnorm
NumericMatrix exnorm(NumericMatrix data, NumericVector mu, NumericVector sd);
RcppExport SEXP mixR_exnorm(SEXP dataSEXP, SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(exnorm(data, mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// txnorm
NumericMatrix txnorm(NumericVector pi, NumericVector mu, NumericVector sd, NumericMatrix ex);
RcppExport SEXP mixR_txnorm(SEXP piSEXP, SEXP muSEXP, SEXP sdSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(txnorm(pi, mu, sd, ex));
    return rcpp_result_gen;
END_RCPP
}
// loglik_norm_gC
double loglik_norm_gC(NumericMatrix data, NumericVector pi, NumericVector mu, NumericVector sd);
RcppExport SEXP mixR_loglik_norm_gC(SEXP dataSEXP, SEXP piSEXP, SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_norm_gC(data, pi, mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// norm_uv_g
List norm_uv_g(NumericMatrix data, NumericVector pi, NumericVector mu, NumericVector sd, int max_iter, double tol);
RcppExport SEXP mixR_norm_uv_g(SEXP dataSEXP, SEXP piSEXP, SEXP muSEXP, SEXP sdSEXP, SEXP max_iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_uv_g(data, pi, mu, sd, max_iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// norm_ev_g
List norm_ev_g(NumericMatrix data, NumericVector pi, NumericVector mu, NumericVector sd, int max_iter, double tol);
RcppExport SEXP mixR_norm_ev_g(SEXP dataSEXP, SEXP piSEXP, SEXP muSEXP, SEXP sdSEXP, SEXP max_iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_ev_g(data, pi, mu, sd, max_iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// expZ_gamma_C
NumericMatrix expZ_gamma_C(NumericVector x, NumericVector pi, NumericVector alpha, NumericVector lambda);
RcppExport SEXP mixR_expZ_gamma_C(SEXP xSEXP, SEXP piSEXP, SEXP alphaSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(expZ_gamma_C(x, pi, alpha, lambda));
    return rcpp_result_gen;
END_RCPP
}
// loglik_gamma_C
double loglik_gamma_C(NumericVector x, NumericVector pi, NumericVector alpha, NumericVector lambda);
RcppExport SEXP mixR_loglik_gamma_C(SEXP xSEXP, SEXP piSEXP, SEXP alphaSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_gamma_C(x, pi, alpha, lambda));
    return rcpp_result_gen;
END_RCPP
}
// gamma_bisection_C
NumericVector gamma_bisection_C(NumericVector n, NumericVector ex, NumericVector tx, double tol, int max_iter, double xleft, double xright);
RcppExport SEXP mixR_gamma_bisection_C(SEXP nSEXP, SEXP exSEXP, SEXP txSEXP, SEXP tolSEXP, SEXP max_iterSEXP, SEXP xleftSEXP, SEXP xrightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tx(txSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type xleft(xleftSEXP);
    Rcpp::traits::input_parameter< double >::type xright(xrightSEXP);
    rcpp_result_gen = Rcpp::wrap(gamma_bisection_C(n, ex, tx, tol, max_iter, xleft, xright));
    return rcpp_result_gen;
END_RCPP
}
// to_mu_sd_gamma_C
List to_mu_sd_gamma_C(NumericVector alpha, NumericVector lambda);
RcppExport SEXP mixR_to_mu_sd_gamma_C(SEXP alphaSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(to_mu_sd_gamma_C(alpha, lambda));
    return rcpp_result_gen;
END_RCPP
}
// to_alpha_lambda_gamma_C
List to_alpha_lambda_gamma_C(NumericVector mu, NumericVector sd);
RcppExport SEXP mixR_to_alpha_lambda_gamma_C(SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(to_alpha_lambda_gamma_C(mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// gamma_C
List gamma_C(NumericVector x, NumericVector pi, NumericVector alpha, NumericVector lambda, String method, int max_iter, double tol);
RcppExport SEXP mixR_gamma_C(SEXP xSEXP, SEXP piSEXP, SEXP alphaSEXP, SEXP lambdaSEXP, SEXP methodSEXP, SEXP max_iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(gamma_C(x, pi, alpha, lambda, method, max_iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// egamma_trunc
double egamma_trunc(double a, double b, double alpha, double lambda);
RcppExport SEXP mixR_egamma_trunc(SEXP aSEXP, SEXP bSEXP, SEXP alphaSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(egamma_trunc(a, b, alpha, lambda));
    return rcpp_result_gen;
END_RCPP
}
// EXgamma_C
NumericMatrix EXgamma_C(NumericMatrix data, NumericVector alpha, NumericVector lambda);
RcppExport SEXP mixR_EXgamma_C(SEXP dataSEXP, SEXP alphaSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(EXgamma_C(data, alpha, lambda));
    return rcpp_result_gen;
END_RCPP
}
// TXgamma_C
NumericMatrix TXgamma_C(NumericVector pi, NumericVector alpha, NumericVector lambda, NumericMatrix ex);
RcppExport SEXP mixR_TXgamma_C(SEXP piSEXP, SEXP alphaSEXP, SEXP lambdaSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(TXgamma_C(pi, alpha, lambda, ex));
    return rcpp_result_gen;
END_RCPP
}
// loglik_gamma_g_C
double loglik_gamma_g_C(NumericMatrix data, NumericVector pi, NumericVector alpha, NumericVector lambda);
RcppExport SEXP mixR_loglik_gamma_g_C(SEXP dataSEXP, SEXP piSEXP, SEXP alphaSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_gamma_g_C(data, pi, alpha, lambda));
    return rcpp_result_gen;
END_RCPP
}
// gamma_g_C
List gamma_g_C(NumericMatrix data, NumericVector pi, NumericVector alpha, NumericVector lambda, String method, int max_iter, double tol);
RcppExport SEXP mixR_gamma_g_C(SEXP dataSEXP, SEXP piSEXP, SEXP alphaSEXP, SEXP lambdaSEXP, SEXP methodSEXP, SEXP max_iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(gamma_g_C(data, pi, alpha, lambda, method, max_iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// expZ_weib_C
NumericMatrix expZ_weib_C(NumericVector x, NumericVector pi, NumericVector k, NumericVector lambda);
RcppExport SEXP mixR_expZ_weib_C(SEXP xSEXP, SEXP piSEXP, SEXP kSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(expZ_weib_C(x, pi, k, lambda));
    return rcpp_result_gen;
END_RCPP
}
// loglik_weib_C
double loglik_weib_C(NumericVector x, NumericVector pi, NumericVector k, NumericVector lambda);
RcppExport SEXP mixR_loglik_weib_C(SEXP xSEXP, SEXP piSEXP, SEXP kSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_weib_C(x, pi, k, lambda));
    return rcpp_result_gen;
END_RCPP
}
// g_weib
double g_weib(double r, NumericVector n, NumericVector ex, NumericVector tx);
RcppExport SEXP mixR_g_weib(SEXP rSEXP, SEXP nSEXP, SEXP exSEXP, SEXP txSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tx(txSEXP);
    rcpp_result_gen = Rcpp::wrap(g_weib(r, n, ex, tx));
    return rcpp_result_gen;
END_RCPP
}
// newton_weib_C
NumericVector newton_weib_C(NumericVector n, NumericVector ex, NumericVector tx, double r, int max_iter);
RcppExport SEXP mixR_newton_weib_C(SEXP nSEXP, SEXP exSEXP, SEXP txSEXP, SEXP rSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tx(txSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(newton_weib_C(n, ex, tx, r, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// weib_bisection_C
NumericVector weib_bisection_C(NumericVector n, NumericVector ex, NumericVector tx, double tol, int max_iter, double xleft, double xright);
RcppExport SEXP mixR_weib_bisection_C(SEXP nSEXP, SEXP exSEXP, SEXP txSEXP, SEXP tolSEXP, SEXP max_iterSEXP, SEXP xleftSEXP, SEXP xrightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tx(txSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type xleft(xleftSEXP);
    Rcpp::traits::input_parameter< double >::type xright(xrightSEXP);
    rcpp_result_gen = Rcpp::wrap(weib_bisection_C(n, ex, tx, tol, max_iter, xleft, xright));
    return rcpp_result_gen;
END_RCPP
}
// to_mu_sd_weib_C
List to_mu_sd_weib_C(NumericVector k, NumericVector lambda);
RcppExport SEXP mixR_to_mu_sd_weib_C(SEXP kSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(to_mu_sd_weib_C(k, lambda));
    return rcpp_result_gen;
END_RCPP
}
// to_k_lambda_weib_C
List to_k_lambda_weib_C(NumericVector mu, NumericVector sd);
RcppExport SEXP mixR_to_k_lambda_weib_C(SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(to_k_lambda_weib_C(mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// weib_C
List weib_C(NumericVector x, NumericVector pi, NumericVector k, NumericVector lambda, String method, int max_iter, double tol);
RcppExport SEXP mixR_weib_C(SEXP xSEXP, SEXP piSEXP, SEXP kSEXP, SEXP lambdaSEXP, SEXP methodSEXP, SEXP max_iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(weib_C(x, pi, k, lambda, method, max_iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// eweib_trunc
double eweib_trunc(double a, double b, double k, double lambda);
RcppExport SEXP mixR_eweib_trunc(SEXP aSEXP, SEXP bSEXP, SEXP kSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(eweib_trunc(a, b, k, lambda));
    return rcpp_result_gen;
END_RCPP
}
// EXweib_C
NumericMatrix EXweib_C(NumericMatrix data, NumericVector k, NumericVector lambda);
RcppExport SEXP mixR_EXweib_C(SEXP dataSEXP, SEXP kSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(EXweib_C(data, k, lambda));
    return rcpp_result_gen;
END_RCPP
}
// TXweib_C
NumericMatrix TXweib_C(NumericVector pi, NumericVector k, NumericVector lambda, NumericMatrix ex);
RcppExport SEXP mixR_TXweib_C(SEXP piSEXP, SEXP kSEXP, SEXP lambdaSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(TXweib_C(pi, k, lambda, ex));
    return rcpp_result_gen;
END_RCPP
}
// loglik_weib_g_C
double loglik_weib_g_C(NumericMatrix data, NumericVector pi, NumericVector k, NumericVector lambda);
RcppExport SEXP mixR_loglik_weib_g_C(SEXP dataSEXP, SEXP piSEXP, SEXP kSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_weib_g_C(data, pi, k, lambda));
    return rcpp_result_gen;
END_RCPP
}
// weib_g_C
List weib_g_C(NumericMatrix data, NumericVector pi, NumericVector k, NumericVector lambda, String method, int max_iter, double tol);
RcppExport SEXP mixR_weib_g_C(SEXP dataSEXP, SEXP piSEXP, SEXP kSEXP, SEXP lambdaSEXP, SEXP methodSEXP, SEXP max_iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(weib_g_C(data, pi, k, lambda, method, max_iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// expZ_lnorm_C
NumericMatrix expZ_lnorm_C(NumericVector x, NumericVector pi, NumericVector mulog, NumericVector sdlog);
RcppExport SEXP mixR_expZ_lnorm_C(SEXP xSEXP, SEXP piSEXP, SEXP mulogSEXP, SEXP sdlogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mulog(mulogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sdlog(sdlogSEXP);
    rcpp_result_gen = Rcpp::wrap(expZ_lnorm_C(x, pi, mulog, sdlog));
    return rcpp_result_gen;
END_RCPP
}
// loglik_lnorm_C
double loglik_lnorm_C(NumericVector x, NumericVector pi, NumericVector mulog, NumericVector sdlog);
RcppExport SEXP mixR_loglik_lnorm_C(SEXP xSEXP, SEXP piSEXP, SEXP mulogSEXP, SEXP sdlogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mulog(mulogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sdlog(sdlogSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_lnorm_C(x, pi, mulog, sdlog));
    return rcpp_result_gen;
END_RCPP
}
// lnorm_C
List lnorm_C(NumericVector x, NumericVector pi, NumericVector mulog, NumericVector sdlog, int max_iter, double tol);
RcppExport SEXP mixR_lnorm_C(SEXP xSEXP, SEXP piSEXP, SEXP mulogSEXP, SEXP sdlogSEXP, SEXP max_iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mulog(mulogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sdlog(sdlogSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(lnorm_C(x, pi, mulog, sdlog, max_iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// elnorm_trunc
double elnorm_trunc(double a, double b, double mulog, double sdlog);
RcppExport SEXP mixR_elnorm_trunc(SEXP aSEXP, SEXP bSEXP, SEXP mulogSEXP, SEXP sdlogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type mulog(mulogSEXP);
    Rcpp::traits::input_parameter< double >::type sdlog(sdlogSEXP);
    rcpp_result_gen = Rcpp::wrap(elnorm_trunc(a, b, mulog, sdlog));
    return rcpp_result_gen;
END_RCPP
}
// EXlnorm_C
NumericMatrix EXlnorm_C(NumericMatrix data, NumericVector mulog, NumericVector sdlog);
RcppExport SEXP mixR_EXlnorm_C(SEXP dataSEXP, SEXP mulogSEXP, SEXP sdlogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mulog(mulogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sdlog(sdlogSEXP);
    rcpp_result_gen = Rcpp::wrap(EXlnorm_C(data, mulog, sdlog));
    return rcpp_result_gen;
END_RCPP
}
// TXlnorm_C
NumericMatrix TXlnorm_C(NumericVector pi, NumericVector mulog, NumericVector sdlog, NumericMatrix ex);
RcppExport SEXP mixR_TXlnorm_C(SEXP piSEXP, SEXP mulogSEXP, SEXP sdlogSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mulog(mulogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sdlog(sdlogSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(TXlnorm_C(pi, mulog, sdlog, ex));
    return rcpp_result_gen;
END_RCPP
}
// loglik_lnorm_g_C
double loglik_lnorm_g_C(NumericMatrix data, NumericVector pi, NumericVector mulog, NumericVector sdlog);
RcppExport SEXP mixR_loglik_lnorm_g_C(SEXP dataSEXP, SEXP piSEXP, SEXP mulogSEXP, SEXP sdlogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mulog(mulogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sdlog(sdlogSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_lnorm_g_C(data, pi, mulog, sdlog));
    return rcpp_result_gen;
END_RCPP
}
// lnorm_g_C
List lnorm_g_C(NumericMatrix data, NumericVector pi, NumericVector mulog, NumericVector sdlog, int max_iter, double tol);
RcppExport SEXP mixR_lnorm_g_C(SEXP dataSEXP, SEXP piSEXP, SEXP mulogSEXP, SEXP sdlogSEXP, SEXP max_iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mulog(mulogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sdlog(sdlogSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(lnorm_g_C(data, pi, mulog, sdlog, max_iter, tol));
    return rcpp_result_gen;
END_RCPP
}