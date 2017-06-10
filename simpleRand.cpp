#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

#include "simpleRandGenerator.hpp"
#include "boxMuller.hpp"


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
  
  return 0;
}
