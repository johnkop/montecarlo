//
//  fdm_visitor.hpp
//  c++
//
//  Created by JK on 19/06/2017.
//  Copyright © 2017 JK. All rights reserved.
//

#ifndef fdm_visitor_hpp
#define fdm_visitor_hpp

#include <vector>

#include <stdio.h>
#include "one_factor_sde_visitor.hpp"
#include "Range.hpp"
class OneFactorSDE;

class FDMVisitor : public OneFactorSDEVisitor{
  
//protected:
public:
  double init_val, v_old; // init conditions
  double v_new; // solution at n+1
  
  std::vector<double> x;
  double k;
  double sqrk;
  
  std::vector<double> res;
  
  std::vector<double> dW;
  
  long n;
  
  FDMVisitor(long nsteps, const Range<double>& interval, double initial_value);
  FDMVisitor(long nsteps, const OneFactorSDE& sde);
  
  virtual std::vector<double> path() const;
  
  long getNumberOfSteps()const;
};
#endif /* fdm_visitor_hpp */
