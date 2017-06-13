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
  T lo;
  T hi;
  
public:
  Range();
  Range(const T& low, const T& high);
  Range(const Range<T>& ran2);
  
  virtual ~Range();//destructor
  
  void low(const T& t);
  void high(const T& t);
  
  T low() const;
  T high() const;
  
  T spread() const;
  
  bool left(const T& value) const;
  bool right(const T& value) const;
  bool contains(const T& value) const;
  
//  Vector<T,long> mesh(long nSteps) const;
//  
//  Range<T>& operator = (const Range<T>& ran2);
  
  
};

#endif /* Range_hpp */
