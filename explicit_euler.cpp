
#include "explicit_euler.hpp"
#include<iostream>

ExplicitEuler::ExplicitEuler(long nsteps, const Range<double>& interval,double initial_value):FDMVisitor(nsteps,interval,initial_value){};

ExplicitEuler::ExplicitEuler(long nsteps, const OneFactorSDE& sde):FDMVisitor(nsteps,sde){};
  
  
//  void visit(SDETypeA& sde);
void ExplicitEuler::visit(SDETypeD& sde){
  std::cout<<"visiting"<<"\n";
  v_old = init_val;
  std::cout<<"v_old: "<<v_old<<"\n";
  
  std::cout<<"init res"<<"\n";
  res.push_back(v_old);
  std::cout<<"res: "<<res[0]<<"\n";
  
  std::cout<<"starting for"<<"\n";
  for(long index=1; index<x.size() ;index++){
    std::cout<<"visit index : "<<index<<"\n";
    v_new = v_old *(1.0 + k * sde.calculateDrift(x[index-1]) + sqrk * sde.calculateDiffusion(x[index-1]) * dW[index-1]);
    std::cout<<"calc: "<<index << " vnew: "<<v_new<<"\n";

    res.push_back(v_new);
    std::cout<<"calc: "<<index << " res: "<<res[index]<<"\n";

    v_old = v_new;
  };
};
