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

template <class T> class Range {
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
  
//  Vector<T,long> mesh(long nSteps) const;
//  
//  Range<T>& operator = (const Range<T>& ran2);
  
  
};


template <class T> Range<T>::Range(const T& low, const T& high){
  lo = low;
  hi = high;
}

//need to do a deep copy code work
template <class T> Range<T>::Range(const Range<T>& ran2){
  lo = ran2.lo;
  hi = ran2.hi;
}

template <class T> Range<T>::low(const T& t){
  lo = t;
  return;
}
template <class T> Range<T>::high(const T& t){
  hi = t;
  return;
}
template <class T> Range<T>::low(){
  return lo;
}
template <class T> Range<T>::hi(){
  return hi;
}
template <class T> Range<T>::spread(){
  return hi-lo;
}

bool Range<T>::contains(const T& value){
  return (value>=lo) && (value<=hi);
}


#endif /* Range_hpp */
