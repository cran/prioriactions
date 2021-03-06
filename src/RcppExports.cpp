// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_new_optimization_problem
SEXP rcpp_new_optimization_problem(std::size_t nrow, std::size_t ncol, std::size_t ncell);
RcppExport SEXP _prioriactions_rcpp_new_optimization_problem(SEXP nrowSEXP, SEXP ncolSEXP, SEXP ncellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type ncell(ncellSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_new_optimization_problem(nrow, ncol, ncell));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_optimization_problem_as_list
Rcpp::List rcpp_optimization_problem_as_list(SEXP x);
RcppExport SEXP _prioriactions_rcpp_optimization_problem_as_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_optimization_problem_as_list(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_ncol
std::size_t rcpp_get_optimization_problem_ncol(SEXP x);
RcppExport SEXP _prioriactions_rcpp_get_optimization_problem_ncol(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_ncol(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_nrow
std::size_t rcpp_get_optimization_problem_nrow(SEXP x);
RcppExport SEXP _prioriactions_rcpp_get_optimization_problem_nrow(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_nrow(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_ncell
std::size_t rcpp_get_optimization_problem_ncell(SEXP x);
RcppExport SEXP _prioriactions_rcpp_get_optimization_problem_ncell(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_ncell(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_A
Rcpp::List rcpp_get_optimization_problem_A(SEXP x);
RcppExport SEXP _prioriactions_rcpp_get_optimization_problem_A(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_A(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_constraint_activation
bool rcpp_constraint_activation(SEXP x, DataFrame pu_data, DataFrame threats_data, DataFrame dist_threats_data);
RcppExport SEXP _prioriactions_rcpp_constraint_activation(SEXP xSEXP, SEXP pu_dataSEXP, SEXP threats_dataSEXP, SEXP dist_threats_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type threats_data(threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_constraint_activation(x, pu_data, threats_data, dist_threats_data));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_constraint_benefit
bool rcpp_constraint_benefit(SEXP x, DataFrame pu_data, DataFrame features_data, DataFrame dist_features_data, DataFrame threats_data, DataFrame dist_threats_data, DataFrame sensitivity_data);
RcppExport SEXP _prioriactions_rcpp_constraint_benefit(SEXP xSEXP, SEXP pu_dataSEXP, SEXP features_dataSEXP, SEXP dist_features_dataSEXP, SEXP threats_dataSEXP, SEXP dist_threats_dataSEXP, SEXP sensitivity_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type features_data(features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_features_data(dist_features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type threats_data(threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type sensitivity_data(sensitivity_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_constraint_benefit(x, pu_data, features_data, dist_features_data, threats_data, dist_threats_data, sensitivity_data));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_constraint_budget
bool rcpp_constraint_budget(SEXP x, DataFrame pu_data, DataFrame dist_threats_data, double budget);
RcppExport SEXP _prioriactions_rcpp_constraint_budget(SEXP xSEXP, SEXP pu_dataSEXP, SEXP dist_threats_dataSEXP, SEXP budgetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_constraint_budget(x, pu_data, dist_threats_data, budget));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_constraint_lock
bool rcpp_constraint_lock(SEXP x, DataFrame pu_data, DataFrame dist_threats_data);
RcppExport SEXP _prioriactions_rcpp_constraint_lock(SEXP xSEXP, SEXP pu_dataSEXP, SEXP dist_threats_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_constraint_lock(x, pu_data, dist_threats_data));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_constraint_target
bool rcpp_constraint_target(SEXP x, DataFrame pu_data, DataFrame features_data, DataFrame dist_features_data, DataFrame dist_threats_data, DataFrame threats_data, DataFrame sensitivity_data, int curve);
RcppExport SEXP _prioriactions_rcpp_constraint_target(SEXP xSEXP, SEXP pu_dataSEXP, SEXP features_dataSEXP, SEXP dist_features_dataSEXP, SEXP dist_threats_dataSEXP, SEXP threats_dataSEXP, SEXP sensitivity_dataSEXP, SEXP curveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type features_data(features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_features_data(dist_features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type threats_data(threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type sensitivity_data(sensitivity_dataSEXP);
    Rcpp::traits::input_parameter< int >::type curve(curveSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_constraint_target(x, pu_data, features_data, dist_features_data, dist_threats_data, threats_data, sensitivity_data, curve));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_objective_max_coverage
bool rcpp_objective_max_coverage(SEXP x, DataFrame pu_data, DataFrame features_data, DataFrame dist_features_data, DataFrame threats_data, DataFrame dist_threats_data, DataFrame boundary_data, double blm, int curve);
RcppExport SEXP _prioriactions_rcpp_objective_max_coverage(SEXP xSEXP, SEXP pu_dataSEXP, SEXP features_dataSEXP, SEXP dist_features_dataSEXP, SEXP threats_dataSEXP, SEXP dist_threats_dataSEXP, SEXP boundary_dataSEXP, SEXP blmSEXP, SEXP curveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type features_data(features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_features_data(dist_features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type threats_data(threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type boundary_data(boundary_dataSEXP);
    Rcpp::traits::input_parameter< double >::type blm(blmSEXP);
    Rcpp::traits::input_parameter< int >::type curve(curveSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_objective_max_coverage(x, pu_data, features_data, dist_features_data, threats_data, dist_threats_data, boundary_data, blm, curve));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_objective_min_set
bool rcpp_objective_min_set(SEXP x, DataFrame pu_data, DataFrame features_data, DataFrame dist_features_data, DataFrame threats_data, DataFrame dist_threats_data, DataFrame boundary_data, double blm, int curve);
RcppExport SEXP _prioriactions_rcpp_objective_min_set(SEXP xSEXP, SEXP pu_dataSEXP, SEXP features_dataSEXP, SEXP dist_features_dataSEXP, SEXP threats_dataSEXP, SEXP dist_threats_dataSEXP, SEXP boundary_dataSEXP, SEXP blmSEXP, SEXP curveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type features_data(features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_features_data(dist_features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type threats_data(threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type boundary_data(boundary_dataSEXP);
    Rcpp::traits::input_parameter< double >::type blm(blmSEXP);
    Rcpp::traits::input_parameter< int >::type curve(curveSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_objective_min_set(x, pu_data, features_data, dist_features_data, threats_data, dist_threats_data, boundary_data, blm, curve));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_stats_benefit
DataFrame rcpp_stats_benefit(DataFrame pu_data, DataFrame features_data, DataFrame dist_features_data, DataFrame threats_data, DataFrame dist_threats_data, DataFrame sensitivity_data, std::vector<double> solution);
RcppExport SEXP _prioriactions_rcpp_stats_benefit(SEXP pu_dataSEXP, SEXP features_dataSEXP, SEXP dist_features_dataSEXP, SEXP threats_dataSEXP, SEXP dist_threats_dataSEXP, SEXP sensitivity_dataSEXP, SEXP solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type features_data(features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_features_data(dist_features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type threats_data(threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type sensitivity_data(sensitivity_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type solution(solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_stats_benefit(pu_data, features_data, dist_features_data, threats_data, dist_threats_data, sensitivity_data, solution));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_stats_connectivity_actions
NumericVector rcpp_stats_connectivity_actions(DataFrame pu_data, DataFrame threats_data, DataFrame dist_threats_data, DataFrame boundary_data, std::vector<double> solution);
RcppExport SEXP _prioriactions_rcpp_stats_connectivity_actions(SEXP pu_dataSEXP, SEXP threats_dataSEXP, SEXP dist_threats_dataSEXP, SEXP boundary_dataSEXP, SEXP solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type threats_data(threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type boundary_data(boundary_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type solution(solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_stats_connectivity_actions(pu_data, threats_data, dist_threats_data, boundary_data, solution));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_stats_connectivity_units
double rcpp_stats_connectivity_units(DataFrame pu_data, DataFrame boundary_data, DataFrame dist_threats_data, DataFrame dist_features_data, std::vector<double> solution);
RcppExport SEXP _prioriactions_rcpp_stats_connectivity_units(SEXP pu_dataSEXP, SEXP boundary_dataSEXP, SEXP dist_threats_dataSEXP, SEXP dist_features_dataSEXP, SEXP solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type boundary_data(boundary_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_features_data(dist_features_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type solution(solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_stats_connectivity_units(pu_data, boundary_data, dist_threats_data, dist_features_data, solution));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_stats_costs_actions
NumericVector rcpp_stats_costs_actions(DataFrame pu_data, DataFrame threats_data, DataFrame dist_threats_data, std::vector<double> solution);
RcppExport SEXP _prioriactions_rcpp_stats_costs_actions(SEXP pu_dataSEXP, SEXP threats_dataSEXP, SEXP dist_threats_dataSEXP, SEXP solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type threats_data(threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type solution(solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_stats_costs_actions(pu_data, threats_data, dist_threats_data, solution));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_stats_costs_units
double rcpp_stats_costs_units(DataFrame pu_data, std::vector<double> solution);
RcppExport SEXP _prioriactions_rcpp_stats_costs_units(SEXP pu_dataSEXP, SEXP solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type solution(solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_stats_costs_units(pu_data, solution));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_stats_recovery
List rcpp_stats_recovery(std::vector<double> solution, DataFrame pu_data, DataFrame features_data, DataFrame dist_features_data, DataFrame dist_threats_data, DataFrame threats_data, DataFrame sensitivity_data);
RcppExport SEXP _prioriactions_rcpp_stats_recovery(SEXP solutionSEXP, SEXP pu_dataSEXP, SEXP features_dataSEXP, SEXP dist_features_dataSEXP, SEXP dist_threats_dataSEXP, SEXP threats_dataSEXP, SEXP sensitivity_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type solution(solutionSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pu_data(pu_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type features_data(features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_features_data(dist_features_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type dist_threats_data(dist_threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type threats_data(threats_dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type sensitivity_data(sensitivity_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_stats_recovery(solution, pu_data, features_data, dist_features_data, dist_threats_data, threats_data, sensitivity_data));
    return rcpp_result_gen;
END_RCPP
}
