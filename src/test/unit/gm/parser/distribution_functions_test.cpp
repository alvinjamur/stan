#include <gtest/gtest.h>
#include <test/unit/gm/utility.hpp>

TEST(gm_parser, bernoulli_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/discrete/poisson/poisson_cdf_log");
  test_parsable("function-signatures/distributions/univariate/discrete/poisson/poisson_cdf");
  test_parsable("function-signatures/distributions/univariate/discrete/poisson/poisson_log_log");
  test_parsable("function-signatures/distributions/univariate/discrete/poisson/poisson_log");
}

TEST(gm_parser, beta_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/beta/beta_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/beta/beta_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/beta/beta_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/beta/beta_log");
}

TEST(gm_parser, cauchy_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/cauchy/cauchy_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/cauchy/cauchy_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/cauchy/cauchy_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/cauchy/cauchy_log");
}

TEST(gm_parser, chi_square_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/chi_square/chi_square_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/chi_square/chi_square_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/chi_square/chi_square_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/chi_square/chi_square_log");
}

TEST(gm_parser, double_exponential_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/double_exponential/double_exponential_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/double_exponential/double_exponential_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/double_exponential/double_exponential_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/double_exponential/double_exponential_log");
}

TEST(gm_parser, exp_mod_normal_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_ccdf_log_1");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_ccdf_log_2");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_ccdf_log_3");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_ccdf_log_4");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_cdf_log_1");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_cdf_log_2");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_cdf_log_3");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_cdf_log_4");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_cdf_1");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_cdf_2");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_cdf_3");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_cdf_4");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_log_1");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_log_2");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_log_3");
  test_parsable("function-signatures/distributions/univariate/continuous/exp_mod_normal/exp_mod_normal_log_4");
}

TEST(gm_parser, exponential_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/exponential/exponential_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/exponential/exponential_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/exponential/exponential_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/exponential/exponential_log");
}

TEST(gm_parser, gamma_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/gamma/gamma_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/gamma/gamma_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/gamma/gamma_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/gamma/gamma_log");
}

TEST(gm_parser, gumbel_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/gumbel/gumbel_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/gumbel/gumbel_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/gumbel/gumbel_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/gumbel/gumbel_log");
}

TEST(gm_parser, inv_chi_square_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/inv_chi_square/inv_chi_square_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/inv_chi_square/inv_chi_square_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/inv_chi_square/inv_chi_square_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/inv_chi_square/inv_chi_square_log");
}

TEST(gm_parser, inv_gamma_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/inv_gamma/inv_gamma_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/inv_gamma/inv_gamma_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/inv_gamma/inv_gamma_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/inv_gamma/inv_gamma_log");
}

TEST(gm_parser, logistic_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/logistic/logistic_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/logistic/logistic_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/logistic/logistic_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/logistic/logistic_log");
}

TEST(gm_parser, lognormal_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/lognormal/lognormal_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/lognormal/lognormal_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/lognormal/lognormal_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/lognormal/lognormal_log");
}

TEST(gm_parser, normal_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/normal/normal_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/normal/normal_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/normal/normal_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/normal/normal_log");
}

TEST(gm_parser, pareto_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/pareto/pareto_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/pareto/pareto_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/pareto/pareto_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/pareto/pareto_log");
}

TEST(gm_parser, rayleigh_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/rayleigh/rayleigh_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/rayleigh/rayleigh_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/rayleigh/rayleigh_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/rayleigh/rayleigh_log");
}

TEST(gm_parser, scaled_inv_chi_square_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/scaled_inv_chi_square/scaled_inv_chi_square_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/scaled_inv_chi_square/scaled_inv_chi_square_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/scaled_inv_chi_square/scaled_inv_chi_square_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/scaled_inv_chi_square/scaled_inv_chi_square_log");
}

TEST(gm_parser, skew_normal_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_ccdf_log_1");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_ccdf_log_2");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_ccdf_log_3");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_ccdf_log_4");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_cdf_log_1");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_cdf_log_2");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_cdf_log_3");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_cdf_log_4");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_cdf_1");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_cdf_2");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_cdf_3");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_cdf_4");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_log_1");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_log_2");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_log_3");
  test_parsable("function-signatures/distributions/univariate/continuous/skew_normal/skew_normal_log_4");
}

TEST(gm_parser, student_t_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_ccdf_log_1");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_ccdf_log_2");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_ccdf_log_3");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_ccdf_log_4");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_cdf_log_1");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_cdf_log_2");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_cdf_log_3");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_cdf_log_4");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_cdf_1");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_cdf_2");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_cdf_3");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_cdf_4");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_log_1");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_log_2");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_log_3");
  test_parsable("function-signatures/distributions/univariate/continuous/student_t/student_t_log_4");
}

TEST(gm_parser, uniform_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/uniform/uniform_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/uniform/uniform_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/uniform/uniform_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/uniform/uniform_log");
}

TEST(gm_parser, von_mises_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/von_mises/von_mises_log");
}

TEST(gm_parser, weibull_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/univariate/continuous/weibull/weibull_ccdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/weibull/weibull_cdf_log");
  test_parsable("function-signatures/distributions/univariate/continuous/weibull/weibull_cdf");
  test_parsable("function-signatures/distributions/univariate/continuous/weibull/weibull_log");
}

TEST(gm_parser, categorical_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/discrete/categorical/categorical_log");
  test_parsable("function-signatures/distributions/multivariate/discrete/categorical/categorical_logit_log");
}

TEST(gm_parser, multinomial_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/discrete/multinomial/multinomial_log");
}

TEST(gm_parser, ordered_logistic_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/discrete/ordered_logistic/ordered_logistic_log");
}

TEST(gm_parser, dirichlet_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/dirichlet_log");
}

TEST(gm_parser, gaussian_dlm_obs_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/gaussian_dlm_obs_log");
}


TEST(gm_parser, inv_wishart_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/inv_wishart_log");
}

TEST(gm_parser, lkj_corr_cholesky_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/lkj_corr_cholesky_log");
}

TEST(gm_parser, lkj_corr_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/lkj_corr_log");
}

TEST(gm_parser, lkj_cov_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/lkj_cov_log");
}

TEST(gm_parser, multi_gp_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/multi_gp_log");
}

TEST(gm_parser, multi_gp_cholesky_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/multi_gp_cholesky_log");
}

TEST(gm_parser, multi_normal_cholesky_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/multi_normal_cholesky_log");
}

TEST(gm_parser, multi_normal_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/multi_normal_log");
}

TEST(gm_parser, multi_normal_prec_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/multi_normal_prec_log");
}

TEST(gm_parser, multi_student_t_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/multi_student_t_log");
}

TEST(gm_parser, wishart_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/multivariate/continuous/wishart_log");
}

TEST(gm_parser, rng_distribution_function_signatures) {
  test_parsable("function-signatures/distributions/rngs");
}
