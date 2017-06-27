
#include "namespace_exact_sde.hpp"
// dSt = a.Sdt + b.SdWt

double exact_sde::a;
double exact_sde::b;

double exact_sde::drift(double X){
  return a*X;
};

double exact_sde::diffusion(double X){
  return b*X;
};

