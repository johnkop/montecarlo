//
//  namespace_exact_sde.cpp
//  c++
//
//  Created by JK on 19/06/2017.
//  Copyright © 2017 JK. All rights reserved.
//

#include "namespace_exact_sde.hpp"
// dSt = a.Sdt + b.SdWt

double exact_sde::drift(double X){
  return a*X;
};

double exact_sde::diffusion(double X){
  return b*X;
};

