
#ifndef mc_mediator_hpp
#define mc_mediator_hpp

#include <stdio.h>
#include "one_factor_sde.hpp"
#include "fdm_visitor.hpp"

class MCMediator{
private:
  FDMTypeDBuilder* bld;
  long NSim;
  OptionData* opt;
  double(*payoff)(double S);
  OneFactorSDE* sde;
  FDMVisitor* fdm;
  
public:
  MCMediator(FDMTypeDBuilder& builder, long nsimulations,OptionData& optiondata);
  double price()const;
};

#endif /* mc_mediator_hpp */
