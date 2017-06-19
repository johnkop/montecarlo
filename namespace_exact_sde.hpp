//
//  namespace_exact_sde.hpp
//  c++
//
//  Created by JK on 19/06/2017.
//  Copyright © 2017 JK. All rights reserved.
//

#ifndef namespace_exact_sde_hpp
#define namespace_exact_sde_hpp

#include <stdio.h>
// dSt = a.Sdt + b.SdWt
namespace exact_sde {
  double a;
  double b;
  
  double drift(double t, double X);
  double diffusion(double t, double X);
  
}
#endif /* namespace_exact_sde_hpp */
