
#include<vector>
#include<iostream>

#include "normalGenerator.hpp"

normalGenerator::normalGenerator(uniformGenerator& uniformGen){
  ug = &uniformGen;
};

std::vector<double>normalGenerator::getNormalVector(long N){
  
  
  // create a vector to store double random
  std::vector<double> vec;
  int i;
  
  // display the original size of vec
  std::cout << "vector size = " << vec.size() << std::endl;
  
  // push values into the vector
  for(i = 0; i < N; i++){
    vec.push_back(getNormal());
  }
  
  // display extended size of vec
  std::cout << "extended vector size = " << vec.size() << std::endl;
  
  // access values from the vector
  for(i = 0; i < N; i++){
    std::cout << "value of vec [" << i << "] = " << vec[i] << std::endl;
  }
  
  // use iterator to access the values
//  std::vector<int>::iterator v = vec.begin();
//  while( v != vec.end()) {
//    std::cout << "value of v = " << *v << std::endl;
//    v++;
//  }
  

//  std::vector<double,long>res(N);
//  for(long i=res.MinIndex(); i<=res.MaxIndex(); i++){
//    res[i] = getNormal();
//  }
  return vec;
};
