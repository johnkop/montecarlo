//
//  oneFactorSDE.hpp
//  c++
//
//  Created by JK on 11/06/2017.
//  Copyright © 2017 JK. All rights reserved.
//

#ifndef oneFactorSDE_hpp
#define oneFactorSDE_hpp

#include <stdio.h>
#include <Range.hpp>

class oneFactorSDE{
private:
  double initCondition;
  Range<double> ran;

public:
  oneFactorSDE();
  oneFactorSDE(double initialCondition, const Range<double>& interval);
  
  const double& initialCondition()const;
  const Range<double>& inyerval()const;
  
  double getExpiry() const;
  
  virtual void Accept(oneFactorSDEVisitor& visitor) = 0;


};

#endif /* oneFactorSDE_hpp */
