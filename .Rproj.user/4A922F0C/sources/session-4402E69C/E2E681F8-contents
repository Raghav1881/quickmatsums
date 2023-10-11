#include "RcppArmadillo.h"
using namespace Rcpp;

// Function to calculate column sums of a sparse matrix
// [[Rcpp::export]]
NumericVector add_cols_cpp(const arma::sp_mat& mat) {
  int ncol = mat.n_cols;
  NumericVector result(ncol); // Initialize a vector to store the column sums

  for (int i = 0; i < ncol; i++) {
    result[i] = arma::accu(mat.col(i));  // Calculate the sum of the column and store it
  }

  return result;
}

// Function to calculate row sums of a sparse matrix
// [[Rcpp::export]]
NumericVector add_rows_cpp(const arma::sp_mat mat) {
  arma::sp_mat z = mat.t();
  int ncol = z.n_cols;
  NumericVector result(ncol, 0.0); // Initialize a vector to store the column sums

  // Iterate over the columns and calculate the sum
  for (int i = 0; i < ncol; i++) {
    result[i] = arma::accu(z.col(i));  // Calculate the sum of the column and store it
  }

  return result;
}
