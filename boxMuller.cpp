#include "math.h"

#include "boxMuller.hpp"

boxMuller::boxMuller(uniformGenerator& uniformGen)
  :normalGenerator(uniformGen){
};

double boxMuller::getNormal(){
  u1 = ug->getUniform();
  u2 = ug->getUniform();
  w = sqrt(-2.0/log(u1));
  
  n1 = w*cos(2*pi*u2);
  n2 = w*sin(2*pi*u2);
  
  return n1;
};
