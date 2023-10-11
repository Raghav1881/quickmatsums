library(RcppArmadillo)

quickRowSums <- function(mat) {
  res <- add_rows_cpp(mat)
  return(res)
}

quickColSums <- function(mat) {
  res <- add_cols_cpp(mat)
  return(res)
}
