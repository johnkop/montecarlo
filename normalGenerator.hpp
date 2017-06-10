#ifndef normalGenerator_hpp
#define normalGenerator_hpp

#include "stdio.h"
#include <vector>

#include "uniformGenerator.hpp"

class normalGenerator{
protected:
  uniformGenerator* ug;
public:
  normalGenerator(uniformGenerator& uniformGen);
  virtual double getNormal()=0;
  
  std::vector<double> getNormalVector(long N);
  
};


#endif /* normalGenerator_hpp */
