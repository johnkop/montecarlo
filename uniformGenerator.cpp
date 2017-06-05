#include<stdio>
#include "uniformGenerator.hpp"

class uniformGenerator{
private:
public:
  uniformGenerator();
  
  virtual void init(long seed) = 0;
  
  virtual double getUniform()=0;
  std::vector<double,long> getUniformVector(long N);
  
};
