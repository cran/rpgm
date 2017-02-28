// This file was automatically generated by 'Kmisc::registerFunctions()'

#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

SEXP skewness(SEXP x);
SEXP kurtosis(SEXP x);
SEXP jarquebera(SEXP x);
SEXP rn(SEXP n, SEXP mu, SEXP sd);

R_CallMethodDef callMethods[]  = {
  {"C_skewness", (DL_FUNC) &skewness, 1},
  {"C_kurtosis", (DL_FUNC) &kurtosis, 1},
  {"C_jarquebera", (DL_FUNC) &jarquebera, 1},
  {"C_rn", (DL_FUNC) &rn, 3},
  {NULL, NULL, 0}
};

void R_init_rpgm(DllInfo *info) {
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}

