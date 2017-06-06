#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#include "simpleRandGenerator.hpp"

simpleRandGenerator::simpleRandGenerator(){};

void simpleRandGenerator::init(long _seed){
  this->factor = _seed;
};
  
double simpleRandGenerator::getUniform(){
  srand(time(&this->factor));
  return ((double)rand() / (double)RAND_MAX);
}
