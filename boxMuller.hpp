#ifndef boxMuller_hpp
#define boxMuller_hpp


#include "stdio.h"

#include "normalGenerator.hpp"

class boxMuller:public normalGenerator{
private:
  double u1,u2;
  double n1,n2;
  double w;
  const double pi = 3.14159265358979323846264338328;
public:
  boxMuller(uniformGenerator& unifornGen);
  double getNormal();
};


#endif /* boxMuller_hpp */
