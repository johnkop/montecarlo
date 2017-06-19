//
//  oneFactorSDE_D.hpp
//  c++
//
//  Created by JK on 17/06/2017.
//  Copyright © 2017 JK. All rights reserved.
//

#ifndef oneFactorSDE_D_hpp
#define oneFactorSDE_D_hpp

#include <stdio.h>
#include <oneFactorSDE.hpp>

class oneFactorSDE_D : public oneFactorSDE{
private:
  double (*drift)(double t, double X);
  double(*diffusion)(double t, double X);

public:
  oneFactorSDE_D(): oneFactorSDE();
  
  oneFactorSDE_D(double initialCondition, const Range<double>& interval,
                 double(*driftFunction)(double t,double X),
                 double (*diffusionFunction)(double t, double X));
  
  double calculateDrift(double t, double X) const;
  double calculateDiffusion(double t, double X) const;
  
  virtual void accept(oneFactorSDEVisitor& visitor);
  
};

#endif /* oneFactorSDE_D_hpp */
