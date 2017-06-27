
#include "one_factor_sde.hpp"

OneFactorSDE::OneFactorSDE(){};

OneFactorSDE::OneFactorSDE(double initialCondition, const Range<double>& interval){};

const double& OneFactorSDE::initialCondition()const{
  return initCondition;
};

const Range<double>& OneFactorSDE::interval()const{
  return ran;
};

double OneFactorSDE::getExpiry()const{
  return 0.0;
};
