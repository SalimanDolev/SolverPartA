#include "solver.hpp"
#include <iostream>

using namespace std;
namespace solver{
          RealVariable& operator*(RealVariable& x, RealVariable& y){
              return x;
          }
          RealVariable& operator*(RealVariable& x, double y){return x;}
          RealVariable& operator*(double y,RealVariable& x){return x;}
          RealVariable& operator==(RealVariable& x, double y){return x;}
          RealVariable& operator==(RealVariable& x, RealVariable& y){return x;}
          RealVariable& operator^(RealVariable& x, double y){return x;}
          RealVariable& operator^(RealVariable& x, RealVariable& y){return x;}
          RealVariable& operator+(RealVariable& x, double y){return x;}
          RealVariable& operator+(RealVariable& x, RealVariable& y){return x;}
          RealVariable& operator+(double y,RealVariable& x){return x;}
          RealVariable& operator-(RealVariable& x, double y){return x;}
          RealVariable& operator-(RealVariable& x, RealVariable& y){return x;}
          RealVariable& operator-(double y,RealVariable& x){return x;}
          RealVariable& operator/(RealVariable& x, double y){return x;}
          RealVariable& operator/(RealVariable& x, RealVariable& y){return x;}




          ComplexVariable& operator*(ComplexVariable& x, ComplexVariable& y){return x;}
          ComplexVariable& operator*(complex<double> x, ComplexVariable& y){return y;}
          ComplexVariable& operator*(ComplexVariable& x, double y){return x;}
          ComplexVariable& operator*(double y,ComplexVariable& x){return x;}
          ComplexVariable& operator==(ComplexVariable& x, double y){return x;}
          ComplexVariable& operator==(ComplexVariable& x, ComplexVariable& y){return x;}
          ComplexVariable& operator==(ComplexVariable& x, complex<double> y){return x;}
          ComplexVariable& operator^(ComplexVariable& x, double y){return x;}
          ComplexVariable& operator^(ComplexVariable& x, ComplexVariable& y){return x;}
          ComplexVariable& operator+(ComplexVariable& x, double y){return x;}
          ComplexVariable& operator+(double y,ComplexVariable& x){return x;}
          ComplexVariable& operator+(ComplexVariable& x, ComplexVariable& y){return x;}
          ComplexVariable& operator+(ComplexVariable& x, complex<double> y){return x;}
          ComplexVariable& operator-(ComplexVariable& x, double y){return x;}
          ComplexVariable& operator-(ComplexVariable& x, ComplexVariable& y){return x;}
          ComplexVariable& operator-(ComplexVariable& x, complex<double> y){return x;}
          ComplexVariable& operator/(ComplexVariable& x, double y){return x;}
          ComplexVariable& operator/(ComplexVariable& x, ComplexVariable& y){return x;}
          



          double solve(RealVariable){return 0.0;}
          std::complex<double> solve(ComplexVariable){std::complex<double> x = 0.0; return x;}
};