
#ifndef explicit_euler_hpp
#define explicit_euler_hpp

#include <stdio.h>
#include "fdm_visitor.hpp"
#include "sde_type_d.hpp"
//#include "Range.hpp"

class ExplicitEuler : public FDMVisitor{
public:
  
  ExplicitEuler(long nsteps, const Range<double>& interval,double initial_value);
  
  ExplicitEuler(long nsteps, const OneFactorSDE& sde);
  
  
//  void visit(SDETypeA& sde);
  void visit(SDETypeD& sde);
};
#endif /* explicit_euler_hpp */
