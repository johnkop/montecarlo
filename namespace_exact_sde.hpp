

#ifndef namespace_exact_sde_hpp
#define namespace_exact_sde_hpp

#include <stdio.h>
// dSt = a.Sdt + b.SdWt
namespace exact_sde {
  extern double a; // drift
  extern double b; // diffusion
  
  extern double drift(double X);
  extern double diffusion(double X);
  
}
#endif /* namespace_exact_sde_hpp */
