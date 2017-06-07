
#ifndef simpleRandGenerator_hpp
#define simpleRandGenerator_hpp
#endif /* simpleRandGenerator_hpp */
#include <stdio.h>

#include "uniformGenerator.hpp"

class simpleRandGenerator : public uniformGenerator{
private:
  long factor;
public:
  
  simpleRandGenerator();
  
  void init(long _seed);
  
  double getUniform();
};

