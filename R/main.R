library(RcppArmadillo)

#' @export
# Add rows of sparse matrix and return a vector contaning the sum of all row-wise elements
quickRowSums <- function(mat) {
  res <- add_rows_cpp(mat)
  return(res)
}

#' @export
# Add columns of sparse matrix and return a vector contaning the sum of all column-wise elements
quickColSums <- function(mat) {
  res <- add_cols_cpp(mat)
  return(res)
}
