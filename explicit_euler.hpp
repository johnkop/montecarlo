//
//  explicit_euler.hpp
//  c++
//
//  Created by JK on 19/06/2017.
//  Copyright © 2017 JK. All rights reserved.
//

#ifndef explicit_euler_hpp
#define explicit_euler_hpp

#include <stdio.h>
#include "fdm_visitor.hpp"
#include "sde_type_d.hpp"

class ExplicitEuler : public FDMVisitor{
public:
  
  ExplicitEuler(long nsteps, const Range<double>& interval,double initial_value);
  
  ExplicitEuler(long nsteps, const OneFactorSDE& sde);
  
  
//  void visit(SDETypeA& sde);
  void visit(SDETypeD& sde);
};
#endif /* explicit_euler_hpp */
