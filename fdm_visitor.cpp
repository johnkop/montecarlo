
#include "fdm_visitor.hpp"


FDMVisitor::FDMVisitor(long nsteps, const Range<double>& interval, double initial_value){
  this->n = nsteps;
  this->init_val = initial_value;
  this->x = interval.mesh(n);
  
};

FDMVisitor::FDMVisitor(long nsteps, const OneFactorSDE& sde){};

void FDMVisitor::setRandomArray(const std::vector<double> &randomArray){
  this->dW = randomArray;
};

long FDMVisitor::getNumberOfSteps()const{
  return n;
};

std::vector<double> FDMVisitor::path()const{
  return res;
};
