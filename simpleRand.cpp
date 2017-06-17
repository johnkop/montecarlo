#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

#include "simpleRandGenerator.hpp"
#include "boxMuller.hpp"
#include "Range.hpp"

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
  std::vector<double>res = myNormal->getNormalVector(10);
  
  for(long i=0; i<=9; i++){
    cout << res[i] <<"\n";
  }
  
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
  
  return 0;
}
