#include <iostream>
#include <complex>

using namespace std;


namespace solver
{
    class RealVariable{
        private:
        double x;
        public:
        RealVariable():x(0){
        }
          friend RealVariable& operator*(RealVariable& x, RealVariable& y);
          friend RealVariable& operator*(RealVariable& x, double y);
          friend RealVariable& operator*(double y,RealVariable& x);
          friend RealVariable& operator==(RealVariable& x, double y);
          friend RealVariable& operator==(RealVariable& x, RealVariable& y);
          friend RealVariable& operator^(RealVariable& x, double y);
          friend RealVariable& operator^(RealVariable& x, RealVariable& y);
          friend RealVariable& operator+(RealVariable& x, double y);
          friend RealVariable& operator+(RealVariable& x, RealVariable& y);
          friend RealVariable& operator+(double y,RealVariable& x);
          friend RealVariable& operator-(RealVariable& x, double y);
          friend RealVariable& operator-(RealVariable& x, RealVariable& y);
          friend RealVariable& operator-(double y,RealVariable& x);
          friend RealVariable& operator/(RealVariable& x, double y);
          friend RealVariable& operator/(RealVariable& x, RealVariable& y);
          
    };  
        
    class ComplexVariable{
        private:
        std::complex<double> y;
        public:
          ComplexVariable():y(0.0,0.0){
          
          };
          friend ComplexVariable& operator*(ComplexVariable& x, ComplexVariable& y);
          friend ComplexVariable& operator*(complex<double> x, ComplexVariable& y);
          friend ComplexVariable& operator*(ComplexVariable& x, double y);
          friend ComplexVariable& operator*(double y,ComplexVariable& x);
          friend ComplexVariable& operator==(ComplexVariable& x, double y);
          friend ComplexVariable& operator==(ComplexVariable& x, ComplexVariable& y);
          friend ComplexVariable& operator==(ComplexVariable& x, complex<double> y);
          friend ComplexVariable& operator^(ComplexVariable& x, double y);
          friend ComplexVariable& operator^(ComplexVariable& x, ComplexVariable& y);
          friend ComplexVariable& operator+(ComplexVariable& x, double y);
          friend ComplexVariable& operator+(double y,ComplexVariable& x);
          friend ComplexVariable& operator+(ComplexVariable& x, ComplexVariable& y);
          friend ComplexVariable& operator+(ComplexVariable& x, complex<double> y);
          friend ComplexVariable& operator+(double x, complex<double> y);
          friend ComplexVariable& operator-(ComplexVariable& x, double y);
          friend ComplexVariable& operator-(ComplexVariable& x, ComplexVariable& y);
          friend ComplexVariable& operator-(ComplexVariable& x, complex<double> y);
          friend ComplexVariable& operator/(ComplexVariable& x, double y);
          friend ComplexVariable& operator/(ComplexVariable& x, ComplexVariable& y);
    };


   double solve(RealVariable);
   std::complex<double> solve(ComplexVariable);
   

    
    } // namespace solver
