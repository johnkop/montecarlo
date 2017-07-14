
#ifndef uniformGenerator_hpp
#define uniformGenerator_hpp


#include <stdio.h>
#include <string>
#include <vector>


class uniformGenerator{
private:
public:
  uniformGenerator();
  
  virtual void init(long seed) = 0;
  
  virtual double getUniform()=0;
  
  std::vector<double> getUniformVector(long N);
};
#endif /* uniformGenerator_hpp */
