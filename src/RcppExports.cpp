// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// laserize
Rcpp::List laserize(Rcpp::DataFrame& sf, Rcpp::NumericVector& extent, Rcpp::IntegerVector& dimension);
RcppExport SEXP _controlledburn_laserize(SEXP sfSEXP, SEXP extentSEXP, SEXP dimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type extent(extentSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type dimension(dimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(laserize(sf, extent, dimension));
    return rcpp_result_gen;
END_RCPP
}
// laserize_line
Rcpp::List laserize_line(Rcpp::DataFrame& sf, Rcpp::NumericVector& extent, Rcpp::IntegerVector& dimension);
RcppExport SEXP _controlledburn_laserize_line(SEXP sfSEXP, SEXP extentSEXP, SEXP dimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type extent(extentSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type dimension(dimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(laserize_line(sf, extent, dimension));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_controlledburn_laserize", (DL_FUNC) &_controlledburn_laserize, 3},
    {"_controlledburn_laserize_line", (DL_FUNC) &_controlledburn_laserize_line, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_controlledburn(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
