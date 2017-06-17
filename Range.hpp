//
//  Range.hpp
//  c++
//
//  Created by JK on 13/06/2017.
//  Copyright © 2017 JK. All rights reserved.
//

#ifndef Range_hpp
#define Range_hpp

#include <stdio.h>
#include <vector>

template <class T>
class Range {
private:
  T lo; // represents the begin of a mesh
  T hi; // represents the end of a mesh
  
public:
  Range();
  Range(const T& low, const T& high); //constructor
  Range(const Range<T>& ran2); // constructor by copy
  
  virtual ~Range();//destructor
  
  void low(const T& t); // sets the lo
  void high(const T& t); // sets the hi
  
  T low() const; // get lo
  T high() const; // get hi
  
  T spread() const; // get hi-lo
  
  bool left(const T& value) const;
  bool right(const T& value) const;
  bool contains(const T& value) const;
  
  std::vector<T> mesh(long nSteps) const;

//  Range<T>& operator = (const Range<T>& ran2);
  
  
};


template <class T>
Range<T>::Range(const T& low, const T& high){
  lo = low;
  hi = high;
}

//need to do a deep copy code work
template <class T>
Range<T>::Range(const Range<T>& ran2){
  lo = ran2.lo;
  hi = ran2.hi;
}
template <class T>
Range<T>::~Range(){
  std::cout<<"destroying Range object"<<"\n";
}

template <class T>
void Range<T>::low(const T& t){
  lo = t;
  return;
}
template <class T>
void Range<T>::high(const T& t){
  hi = t;
  return;
}
template <class T>
T Range<T>::low() const{
  return lo;
}
template <class T>
T Range<T>::high() const{
  return hi;
}
template <class T>
T Range<T>::spread() const{
  return hi-lo;
}

template <class T>
bool Range<T>::contains(const T& value) const{
  return (value>=lo) && (value<=hi);
}

// gets a mesh
template <class T>
std::vector<T> Range<T>::mesh(long nSteps) const{

  std::vector<T> vec;
  T step = (hi-lo) / nSteps;
  for(int i=0; i<=nSteps; i++){
    T var = lo + i * step;
    vec.push_back(var);
  }
  return vec;
};


#endif /* Range_hpp */
