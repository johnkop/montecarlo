
#ifndef one_factor_sde_hpp
#define one_factor_sde_hpp

#include <stdio.h>

#include "Range.hpp"

class OneFactorSDEVisitor;

class OneFactorSDE{
private:
  double initCondition;
  Range<double> ran;

public:
  OneFactorSDE();
  OneFactorSDE(double initialCondition, const Range<double>& interval);
  
  const double& initialCondition()const;
  const Range<double>& interval()const;
  
  double getExpiry() const;
  
  virtual void accept(OneFactorSDEVisitor& visitor) = 0;
};

#endif /* one_factor_sde_hpp */
