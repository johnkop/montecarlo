#include<vector>

#include "normalGenerator.hpp"

normalGenerator::normalGenerator(uniformGenerator& uniformGen){
  ug = &uniformGen;
};

std::vector<double,long>normalGenerator::getNormalVector(long N){
  
  std::vector<double,long>res(N);
  for(long i=res.MinIndex(); i<=res.MaxIndex(); i++){
    res[i] = getNormal();
  }
  return res;
};
