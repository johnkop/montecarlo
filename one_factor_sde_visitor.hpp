//
//  one_factor_sde_visitor.hpp
//  c++
//
//  Created by JK on 19/06/2017.
//  Copyright © 2017 JK. All rights reserved.
//

#ifndef one_factor_sde_visitor_hpp
#define one_factor_sde_visitor_hpp

#include <stdio.h>

#include "sde_type_d.hpp"

class OneFactorSDEVisitor{
private:
public:
  OneFactorSDEVisitor();
  OneFactorSDEVisitor(const OneFactorSDEVisitor& source);
  
  virtual ~OneFactorSDEVisitor();
  
//  virtual void visit(SDETypeA& sde)=0;
//  virtual void Visit(SDETypeA& sde)=0;
//  virtual void Visit(SDETypeA& sde)=0;
  virtual void visit(SDETypeD& sde)=0;
  
  OneFactorSDEVisitor& operator = (const OneFactorSDEVisitor& source);
  
};
#endif /* one_factor_sde_visitor_hpp */
