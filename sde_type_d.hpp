//
//  sde_type_d.hpp
//  c++
//
//  Created by JK on 17/06/2017.
//  Copyright © 2017 JK. All rights reserved.
//

#ifndef sde_type_d_hpp
#define sde_type_d_hpp

#include <stdio.h>
#include "one_factor_sde.hpp"


class SDETypeD : public OneFactorSDE{
private:
  double (*drift)(double X);
  double(*diffusion)(double X);

public:
  SDETypeD():OneFactorSDE(){};
  
  SDETypeD(double initialCondition, const Range<double>& interval,
                 double(*driftFunction)(double X),
                 double (*diffusionFunction)(double X));
  
  double calculateDrift(double X) const;
  double calculateDiffusion(double X) const;
  
  virtual void accept(OneFactorSDEVisitor& visitor);
  
};

#endif /* sde_type_d_hpp */
