
#include "sde_type_d.hpp"
#include "one_factor_sde_visitor.hpp"

//SDETypeD::OneFactorSDE(){};

SDETypeD::SDETypeD(
                   double initialCondition,
                   const Range<double>& interval,
                   double(*driftFunction)(double X),
                   double (*diffusionFunction)(double X)):OneFactorSDE(initialCondition,interval){
  
  this->drift = driftFunction;
  this->diffusion = diffusionFunction;
  
};


double SDETypeD::calculateDrift(double X)const{
  return this->drift(X);
};
double SDETypeD::calculateDiffusion(double X)const{
  return this->diffusion(X);
};


void SDETypeD::accept(OneFactorSDEVisitor& visitor){
  visitor.visit(*this);
};

