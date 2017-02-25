#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP mixR_egamma_trunc(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_elnorm_trunc(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_enorm_trunc(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_eweib_trunc(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_EXgamma_C(SEXP, SEXP, SEXP);
extern SEXP mixR_EXlnorm_C(SEXP, SEXP, SEXP);
extern SEXP mixR_exnorm(SEXP, SEXP, SEXP);
extern SEXP mixR_expZ_gamma_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_expZ_lnorm_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_expZ_norm_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_expZ_weib_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_EXweib_C(SEXP, SEXP, SEXP);
extern SEXP mixR_g_weib(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_gamma_bisection_C(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_gamma_C(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_gamma_g_C(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_lnorm_C(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_lnorm_g_C(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_loglik_gamma_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_loglik_gamma_g_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_loglik_lnorm_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_loglik_lnorm_g_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_loglik_norm_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_loglik_norm_gC(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_loglik_weib_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_loglik_weib_g_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_newton_weib_C(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_norm_ev(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_norm_ev_g(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_norm_uv(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_norm_uv_g(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_rcmean(SEXP, SEXP);
extern SEXP mixR_rcsum(SEXP, SEXP);
extern SEXP mixR_to_alpha_lambda_gamma_C(SEXP, SEXP);
extern SEXP mixR_to_k_lambda_weib_C(SEXP, SEXP);
extern SEXP mixR_to_mu_sd_gamma_C(SEXP, SEXP);
extern SEXP mixR_to_mu_sd_weib_C(SEXP, SEXP);
extern SEXP mixR_TXgamma_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_TXlnorm_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_txnorm(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_TXweib_C(SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_weib_bisection_C(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_weib_C(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP mixR_weib_g_C(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"mixR_egamma_trunc",            (DL_FUNC) &mixR_egamma_trunc,            4},
  {"mixR_elnorm_trunc",            (DL_FUNC) &mixR_elnorm_trunc,            4},
  {"mixR_enorm_trunc",             (DL_FUNC) &mixR_enorm_trunc,             4},
  {"mixR_eweib_trunc",             (DL_FUNC) &mixR_eweib_trunc,             4},
  {"mixR_EXgamma_C",               (DL_FUNC) &mixR_EXgamma_C,               3},
  {"mixR_EXlnorm_C",               (DL_FUNC) &mixR_EXlnorm_C,               3},
  {"mixR_exnorm",                  (DL_FUNC) &mixR_exnorm,                  3},
  {"mixR_expZ_gamma_C",            (DL_FUNC) &mixR_expZ_gamma_C,            4},
  {"mixR_expZ_lnorm_C",            (DL_FUNC) &mixR_expZ_lnorm_C,            4},
  {"mixR_expZ_norm_C",             (DL_FUNC) &mixR_expZ_norm_C,             4},
  {"mixR_expZ_weib_C",             (DL_FUNC) &mixR_expZ_weib_C,             4},
  {"mixR_EXweib_C",                (DL_FUNC) &mixR_EXweib_C,                3},
  {"mixR_g_weib",                  (DL_FUNC) &mixR_g_weib,                  4},
  {"mixR_gamma_bisection_C",       (DL_FUNC) &mixR_gamma_bisection_C,       7},
  {"mixR_gamma_C",                 (DL_FUNC) &mixR_gamma_C,                 7},
  {"mixR_gamma_g_C",               (DL_FUNC) &mixR_gamma_g_C,               7},
  {"mixR_lnorm_C",                 (DL_FUNC) &mixR_lnorm_C,                 6},
  {"mixR_lnorm_g_C",               (DL_FUNC) &mixR_lnorm_g_C,               6},
  {"mixR_loglik_gamma_C",          (DL_FUNC) &mixR_loglik_gamma_C,          4},
  {"mixR_loglik_gamma_g_C",        (DL_FUNC) &mixR_loglik_gamma_g_C,        4},
  {"mixR_loglik_lnorm_C",          (DL_FUNC) &mixR_loglik_lnorm_C,          4},
  {"mixR_loglik_lnorm_g_C",        (DL_FUNC) &mixR_loglik_lnorm_g_C,        4},
  {"mixR_loglik_norm_C",           (DL_FUNC) &mixR_loglik_norm_C,           4},
  {"mixR_loglik_norm_gC",          (DL_FUNC) &mixR_loglik_norm_gC,          4},
  {"mixR_loglik_weib_C",           (DL_FUNC) &mixR_loglik_weib_C,           4},
  {"mixR_loglik_weib_g_C",         (DL_FUNC) &mixR_loglik_weib_g_C,         4},
  {"mixR_newton_weib_C",           (DL_FUNC) &mixR_newton_weib_C,           5},
  {"mixR_norm_ev",                 (DL_FUNC) &mixR_norm_ev,                 6},
  {"mixR_norm_ev_g",               (DL_FUNC) &mixR_norm_ev_g,               6},
  {"mixR_norm_uv",                 (DL_FUNC) &mixR_norm_uv,                 6},
  {"mixR_norm_uv_g",               (DL_FUNC) &mixR_norm_uv_g,               6},
  {"mixR_rcmean",                  (DL_FUNC) &mixR_rcmean,                  2},
  {"mixR_rcsum",                   (DL_FUNC) &mixR_rcsum,                   2},
  {"mixR_to_alpha_lambda_gamma_C", (DL_FUNC) &mixR_to_alpha_lambda_gamma_C, 2},
  {"mixR_to_k_lambda_weib_C",      (DL_FUNC) &mixR_to_k_lambda_weib_C,      2},
  {"mixR_to_mu_sd_gamma_C",        (DL_FUNC) &mixR_to_mu_sd_gamma_C,        2},
  {"mixR_to_mu_sd_weib_C",         (DL_FUNC) &mixR_to_mu_sd_weib_C,         2},
  {"mixR_TXgamma_C",               (DL_FUNC) &mixR_TXgamma_C,               4},
  {"mixR_TXlnorm_C",               (DL_FUNC) &mixR_TXlnorm_C,               4},
  {"mixR_txnorm",                  (DL_FUNC) &mixR_txnorm,                  4},
  {"mixR_TXweib_C",                (DL_FUNC) &mixR_TXweib_C,                4},
  {"mixR_weib_bisection_C",        (DL_FUNC) &mixR_weib_bisection_C,        7},
  {"mixR_weib_C",                  (DL_FUNC) &mixR_weib_C,                  7},
  {"mixR_weib_g_C",                (DL_FUNC) &mixR_weib_g_C,                7},
  {NULL, NULL, 0}
};

void R_init_mixR(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
