#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

#include "simpleRandGenerator.hpp"
#include "boxMuller.hpp"
#include "Range.hpp"

#include "namespace_exact_sde.hpp"
#include "sde_type_d.hpp"


using namespace std;

int main() {
  
  srand(time(NULL));
  cout << (rand())<<"\n";
  cout << RAND_MAX <<"\n";
  cout << (double)rand() / (double)RAND_MAX <<"\n";
  
  cout << "From simpleRandGenerator:" <<"\n";
  
  simpleRandGenerator myRandGenerator;
  myRandGenerator.init(NULL);
  double rand = myRandGenerator.getUniform();
  cout << rand <<"\n";
  
  cout << "From Box-Muller:" <<"\n";
  normalGenerator* myNormal = new boxMuller(myRandGenerator);
  std::vector<double>dW = myNormal->getNormalVector(10);
  
  for(long i=0; i<=9; i++){
    cout << dW[i] <<"\n";
  }
  
  
  // testing the Range class
  double T = 1.0;
  Range<double> ran(0.0,T);
  cout<<"ran hi is: "<<ran.high()<<"\n";
  cout<<"ran low is: "<<ran.low()<<"\n";
  cout<<"ran contains 0.5: "<<ran.contains(0.5)<<"\n";
  
  cout<<"the mesh looks like:"<<"\n";
  std::vector<double>mesh = ran.mesh(10);
  for(long i=0; i<=10; i++){
    cout << mesh[i] <<"\n";
  }
  double ic = 1.0;
  
  exact_sde::a = 1.1;
  exact_sde::b = 0.5;
  
  SDETypeD sde(ic,ran,exact_sde::drift,exact_sde::diffusion);
  
  
  return 0;
}
