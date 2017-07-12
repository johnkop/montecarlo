
#ifndef one_factor_sde_visitor_hpp
#define one_factor_sde_visitor_hpp

#include <stdio.h>

class SDETypeD;
//#include "sde_type_d.hpp"

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
