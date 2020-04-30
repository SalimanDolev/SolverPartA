#include "doctest.h"
#include "solver.hpp"
using namespace solver;
#include <string>
using namespace std;


/////////////////////////////////////////////////////////////////////
////////////////////////Equation solver//////////////////////////////
/////////////////////////////////////////////////////////////////////

TEST_CASE("Real variable * / + - ^") {
    RealVariable x;
    CHECK(solve(7*x == 7) == 1);
    CHECK(solve(5*x == 10) == 2);
    CHECK(solve(2*x - x == 10) == 10);
    CHECK(solve(2*x - 3*x == 20) == -20);
    CHECK(solve(x + x == 4) == 2);
    CHECK(solve(x + 2*x == 6) == 2);
    CHECK(solve(x/2 + x/2 == 6) == 6);
    CHECK(solve(x/4 + 3*x/4 == 2) == 2);
    CHECK(solve(4*x - 3*x == 6) == 6);
    CHECK(solve((x^2) == 16) == 4);
    CHECK(solve((x^2) == 36) == 6);
}

TEST_CASE("Real variable equations") {
    RealVariable x;
    CHECK(solve(x == 7) == 7);
    CHECK(solve(x == 11) == 11);
    CHECK(solve(x == 150) == 150);
    CHECK(solve(2*x == 20) == 20);
    CHECK(solve(3*x == 150) == 50);
    CHECK(solve((x^2) == 4) == 2);
    CHECK(solve(x/2 == 6) == 12);
    CHECK(solve(2*x/4 == 60) == 120);
    CHECK(solve(3*x + 5 == 20) == 5);
    CHECK(solve(3*x + 5  - 5 == 30) == 10);
    CHECK(solve(3*x + 5 == 20) == 5);
    CHECK(solve(23.4*x+234.54 == 53.54+435.4*x) == 0.4393204 );
	CHECK(solve(12+5.1*x == 5*x+2) == -100.0 );
	CHECK(solve(3*x+4 == x/3) == -1.5 );
	CHECK(solve(x == 0.5*x) == 0 );
	CHECK(solve(23*x+1 == 3*x-1) == -0.1 );
	CHECK(solve(34*x/1.55-5 == 20*x) == 2.5833333333 );
	CHECK(solve(12.5+2.0*x/0.5 == 41-5.5*x/5) == 2.567567568 );
	CHECK(solve(-2*x+5 == 4*x-1.6) == 1.1 );
	CHECK(solve(1.23*x-8.4 == -0.77*x) == 4.2 );
}

TEST_CASE("Real veriables X^2 equations"){
    RealVariable x;
    CHECK(solve((x^2) + 2*x + 1 == 0) == -1.0 );
    CHECK(solve((x^2) -2*x + 1 == 0) == 1.0 );
    CHECK(solve((x^2)  == 4) == 2.0);
    CHECK((solve((x^2)  == 9) == 3 || solve((x^2)  == 9) == -3));
    CHECK((solve((x^2) + 16 == 0) == 4 || solve((x^2) + 16  == 0) == -4));
    CHECK((solve((x^2) - 6*x + 9  == 0 == 3) || solve((x^2) - 6*x + 9  == 0) == -3));
    CHECK((solve((x^2) + 16 == 0) == 4 || solve((x^2) + 16  == 0) == -4));
    CHECK((solve(2*(x^2) -4*x - 6 == 0) == -1 || solve(2*(x^2) -4*x - 6 == 0) == 3));
    CHECK((solve(2*(x^2) -4*x == 0) == 0 || solve(2*(x^2) -4*x == 0) == 2));
    CHECK((solve((3*x^2) +6*x == 0) == 0 || solve((3*x^2) + 6*x == 0) == 2));
    CHECK((solve((x^2) - x == 0) == 1 || solve((x^2) - x == 0) == 0));
    CHECK((solve((x^2) == 9) == 3 || solve((x^2) == 9) == -3));   
    
}

TEST_CASE("Complex variable * / + - ^") {
    ComplexVariable x;
    CHECK(solve(7*x == 7) == std::complex<double>(7.0, 0.0));
    CHECK(solve(1i*x == 1i) == std::complex<double>(1.0, 0.0));
    CHECK(solve(2i*x - 1i*x == 1i) == std::complex<double>(1.0, 0.0));
    CHECK(solve(2*x -4i+5.0 == 4i - 5.0) == -std::complex<double>(-10.0, 8.0));
    CHECK(solve(1i*x + 1i*x == 4i) == std::complex<double>(2.0, 0.0));
    CHECK(solve(1i*x + 2i*x == 6i) == std::complex<double>(2.0, 0.0));
    CHECK(solve(1i*x/2 + 1i*x/2 == 6i) == std::complex<double>(6.0, 0.0));
    CHECK(solve(1i*x/4 + 3i*x/4 == 2i) == std::complex<double>(2.0, 0.0));
    CHECK(solve(4i*x - 3i*x == 6i) == std::complex<double>(6.0, 0.0));
    CHECK(solve(1i*(x^2) == 16i) == std::complex<double>(4.0, 0.0));
    CHECK(solve(1i*(x^2) == 36i) == std::complex<double>(6.0, 0.0));
}

TEST_CASE("Complex variable equations") {
    ComplexVariable y;
    CHECK(solve(2*y-4.0 == 10.0) == std::complex<double>(7.0, 0.0));
    CHECK(solve(2*y == 10.0) == std::complex<double>(5.0,0.0));
    CHECK(solve(2*y == 6.0) == std::complex<double>(3.0,0.0));
    CHECK(solve(2*y + 2i == 3i) == std::complex<double>(0.0,0.5));
    CHECK(solve(y + 2i == 3.0) == std::complex<double>(3.0,-2.0));
    CHECK(solve(y + 2i == 3i + 5i) == std::complex<double>(0.0,6.0));
    CHECK(solve(y + 2i == 10i) == std::complex<double>(0.0,8.0));
    CHECK(solve(y + 2.0 == 3i) == std::complex<double>(-2.0,3.0));
    CHECK(solve(y + 2.0 + 1i == 3i + 5.0) == std::complex<double>(3.0,2.0));
    CHECK(solve(y + 2.0 + 4i == 10i + 50.0) == std::complex<double>(48.0,6.0));
    CHECK(solve(12.0 + 5.1*y == 5.0*y + 2.0) == std::complex<double>(-100.0,0.0) );
	CHECK(solve(17.0*(y^2) == 17.0 ) == std::complex<double>(-1.0,0.0));
	CHECK(solve((y*2.0) + 5.0 == 30.0 ) ==  std::complex<double>(5.0,0.0));
	CHECK(solve(3.0*(y^2) - 6.0*y + 1i == 9.0 ) ==  std::complex<double>(3.0,-1.0));
	CHECK(solve(4.0*(y^2) / 2.0 == 12.0*y^2.0 /4.0 ) ==  std::complex<double>(0.0,0.0));
	CHECK(solve(4.0*(y^2) == -16.0*(y^2)/4.0 ) ==  std::complex<double>(0.0,0.0) );
	CHECK(solve(5.0+3.0*(y^2) == 8.0*y ) ==  std::complex<double>(1.0,0.0) );
	CHECK(solve(3.0*(y^2)-4.0*y == 0 ) ==  std::complex<double>(1.0,0.0));
	CHECK(solve(-4.0*y+12.0 == 8.0*(y^2)  ) ==  std::complex<double>(1.0,0.0));
}



TEST_CASE("Complex variable X^2 equations") {
    ComplexVariable y;
    CHECK(solve(y + 3i * (6.0 -5i) == 0) == std::complex<double>(15.0,18.0));
    CHECK(solve((y^2) + (1.0 - 1i) * y - 1i == 0) == std::complex<double>(-1.0,0.0));
    CHECK(solve((y^2) + (2.0i-3.0)*y +2 - 4i == 0) == std::complex<double>(1.0,0.0));
    
}

TEST_CASE("Real variables error massages"){
    RealVariable x;
    CHECK_THROWS(solve((x^2) == -16));
    CHECK_THROWS(solve((x^3) == 8));
    CHECK_THROWS(solve((x^4) == 16));
    CHECK_THROWS(solve((x/0) == 1));
    RealVariable y;
    CHECK_THROWS(solve(x + y == 1));
    CHECK_THROWS(solve(x * y == 1));
    CHECK_THROWS(solve(x / y == 1));
    CHECK_THROWS(solve((x ^ y) == 1));
    CHECK_THROWS(solve(x == y));
    CHECK_THROWS(solve(2*x == 2*y));
    CHECK_THROWS(solve((x/2) == (y/2)));

}

TEST_CASE("complex variables error massages"){
    ComplexVariable x;
    CHECK_THROWS(solve((x^2.0) == 1i));
    CHECK_THROWS(solve((x^3.0) == 10i + 5.0));
    CHECK_THROWS(solve((x^4) == 16));
    CHECK_THROWS(solve((x/0) == 1));
    CHECK_THROWS(solve((x*0) == 1));
    CHECK_THROWS(solve(x-x == 1));
    ComplexVariable y;
    CHECK_THROWS(solve(x + y == 1));
    CHECK_THROWS(solve(x * y == 1));
    CHECK_THROWS(solve(x / y == 1));
    CHECK_THROWS(solve((x ^ y) == 1));
    CHECK_THROWS(solve(x == y));
    CHECK_THROWS(solve(2*x == 2*y));
    CHECK_THROWS(solve(x/2 == y/2));

}