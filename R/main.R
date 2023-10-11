#' @import methods
library(RcppArmadillo)

#' Add rows of sparse matrix and return a vector containing the sum of all row-wise elements
#' @param mat A sparse matrix
#' @export quickRowSums
quickRowSums <- function(mat) {
  res <- add_rows_cpp(mat)
  return(res)
}

#' Add columns of sparse matrix and return a vector containing the sum of all column-wise elements
#' @param mat A sparse matrix
#' @export quickColSums
quickColSums <- function(mat) {
  res <- add_cols_cpp(mat)
  return(res)
}
