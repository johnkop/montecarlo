//
//  uniformGenerator.hpp
//  c++
//
//  Created by JK on 04/06/2017.
//  Copyright © 2017 JK. All rights reserved.
//

#ifndef uniformGenerator_hpp
#define uniformGenerator_hpp

#endif /* uniformGenerator_hpp */
#include <stdio.h>
#include <string>
#include <vector>


class uniformGenerator{
private:
public:
  uniformGenerator();
  
  virtual void init(long seed) = 0;
  
  virtual double getUniform()=0;
  
  std::vector<double,long> getUniformVector(long N);
};
