#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

#include "simpleRandGenerator.hpp"

using namespace std;

int main() {
  
  srand(time(NULL));
  cout << (rand())<<"\n";
  cout << RAND_MAX <<"\n";
  cout << (double)rand() / (double)RAND_MAX <<"\n";
  
  cout << "From simpleRandGenerator:" <<"\n";
  simpleRandGenerator myRandGenerator;
//  myRandGenerator= *new simpleRandGenerator();
  myRandGenerator.init(NULL);
  double rand = myRandGenerator.getUniform();
  cout << rand <<"\n";
  
  return 0;
}
