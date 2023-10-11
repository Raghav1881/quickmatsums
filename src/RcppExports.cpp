// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// add_cols_cpp
NumericVector add_cols_cpp(const arma::sp_mat& mat);
RcppExport SEXP _quickmatsums_add_cols_cpp(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(add_cols_cpp(mat));
    return rcpp_result_gen;
END_RCPP
}
// add_rows_cpp
NumericVector add_rows_cpp(const arma::sp_mat mat);
RcppExport SEXP _quickmatsums_add_rows_cpp(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(add_rows_cpp(mat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_quickmatsums_add_cols_cpp", (DL_FUNC) &_quickmatsums_add_cols_cpp, 1},
    {"_quickmatsums_add_rows_cpp", (DL_FUNC) &_quickmatsums_add_rows_cpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_quickmatsums(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}