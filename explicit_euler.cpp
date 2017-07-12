
#include "explicit_euler.hpp"
//#include "fdm_visitor.hpp"

ExplicitEuler::ExplicitEuler(long nsteps, const Range<double>& interval,double initial_value):FDMVisitor(nsteps,interval,initial_value){};

ExplicitEuler::ExplicitEuler(long nsteps, const OneFactorSDE& sde):FDMVisitor(nsteps,sde){};
  
  
//  void visit(SDETypeA& sde);
void ExplicitEuler::visit(SDETypeD& sde){
  v_old = init_val;
  res[0] = v_old;
  
  for(long index=1; index<x.size() ;index++){
    v_new = v_old *(1.0 + k * sde.calculateDrift(x[index-1]) + sqrk * sde.calculateDiffusion(x[index-1]) * dW[index-1]);
    res[index] = v_new;
    v_old = v_new;
  }
};
