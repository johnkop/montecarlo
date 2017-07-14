#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

#include "simpleRandGenerator.hpp"
#include "boxMuller.hpp"
#include "Range.hpp"

#include "namespace_exact_sde.hpp"
#include "sde_type_d.hpp"
#include "explicit_euler.hpp"


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
  long N = 10;
  double T = 1.0;
  Range<double> ran(0.0,T);
  cout<<"ran hi is: "<<ran.high()<<"\n";
  cout<<"ran low is: "<<ran.low()<<"\n";
  cout<<"ran contains 0.5: "<<ran.contains(0.5)<<"\n";
  
  cout<<"the mesh looks like:"<<"\n";
  std::vector<double>mesh = ran.mesh(N);
  for(long i=0; i<=N; i++){
    cout << mesh[i] <<"\n";
  }
  double ic = 1.0;
  
  exact_sde::a = 0.1;
  exact_sde::b = 0.5;
  
  SDETypeD sde(ic,ran,exact_sde::drift,exact_sde::diffusion);
  ExplicitEuler visitor(N,ran,ic);
  
  cout<<"number of steps in visitor: "<<visitor.getNumberOfSteps()<<"\n";
  cout<<"init value in visitor: "<<visitor.getInitValue()<<"\n";
  cout<<"interval in visitor: "<<visitor.getInterval()[0]<<" "<<visitor.getInterval()[1]<<"\n";
  cout<<"x.size() in visitor: "<<visitor.getInterval().size()<<"\n";

  
  visitor.setRandomArray(dW);
  sde.accept(visitor);
  std::vector<double> result = visitor.path();
  cout << result[0] <<"\n";
  for(long k=0; k<=N; k++){
    cout << result[k] <<"\n";
  }
  
  return 0;
}
