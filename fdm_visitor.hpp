
#ifndef fdm_visitor_hpp
#define fdm_visitor_hpp

#include <vector>

#include <stdio.h>
#include "one_factor_sde_visitor.hpp"
#include "Range.hpp"
class OneFactorSDE;

class FDMVisitor : public OneFactorSDEVisitor{
  
protected:
  
  double sqrk;
  long n;
  
  //these below for convenience
  double init_val, v_old; // init conditions
  double v_new; // solution at n+1
  std::vector<double> res;// the result path
  std::vector<double> x; // mesh data
  std::vector<double> dW; //random array
  double k;

public:
  
  FDMVisitor(long nsteps, const Range<double>& interval, double initial_value);
  
  FDMVisitor(long nsteps, const OneFactorSDE& sde);
  
  void setRandomArray(const std::vector<double>& randomArray);
  
  virtual std::vector<double> path() const;
  
  long getNumberOfSteps()const;
};
#endif /* fdm_visitor_hpp */
