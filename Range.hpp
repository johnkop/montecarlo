
#ifndef Range_hpp
#define Range_hpp

#include<stdio.h>
#include<iostream>
#include<vector>

template <class T>
class Range {
private:
  T lo; // represents the begin of a mesh
  T hi; // represents the end of a mesh
  
public:
  Range(){};
  Range(const T& low, const T& high){
    lo = low;
    hi = high;
  }
  ; //constructor
  Range(const Range<T>& ran2){
    lo = ran2.lo;
    hi = ran2.hi;
  }
  ; // constructor by copy
  
  ~Range(){};//destructor
  
  void low(const T& t){
    lo = t;
    return;
  }
  ; // sets the lo
  void high(const T& t){
    hi = t;
    return;
  }
  ; // sets the hi
  
  T low() const{
    return lo;
  }
  ; // get lo
  T high() const{
    return hi;
  }
  ; // get hi
  
  T spread() const{
    return hi-lo;
  }
  ; // get hi-lo
  
  //  bool left(const T& value) const{};
  //  bool right(const T& value) const{};
  bool contains(const T& value) const{
    return (value>=lo) && (value<=hi);
  }
  ;
  
  std::vector<T> mesh(long nSteps) const{
    
    std::vector<T> vec;
    T step = (hi-lo) / nSteps;
    for(int i=0; i<=nSteps; i++){
      T var = lo + i * step;
      vec.push_back(var);
    }
    return vec;
  };
  ;
  
  //  Range<T>& operator = (const Range<T>& ran2){
  //  };
};

#endif /* Range_hpp */
