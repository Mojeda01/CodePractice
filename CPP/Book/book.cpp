#include <iostream>
#include <complex>
// using namespace std;    <-- makes names from std visible without std::

double square(double x)
{
    return x * x;
}

void print_sqaure(double x) //  Square a double precision floating-point number
{
    std::cout << "the square of " << x << " is " << square(x) << "\n";
}

int main(){

    print_sqaure(1.234);    //  print: the square of 1.234 is 1.52276

    double d1 = 2.3;    // double floating-point number
    double d2{2.3};
    
    std::complex<double> z = 1; //  a complex number with double-precision floating-point scalars.
    std::complex<double> z2{d1, d2};
    std::complex<double> z3 = {1, 2};   //  the = is optimal with {...}

    std::vector<int> v = {1, 2, 3, 4, 5, 6};    //  A vector of ints.

    /*When defining a variable, you don't actually need to state its type explicitly when it can be deduced
    from the initalizer:*/

    double y{5};

    auto b = true;  //  a bool
    auto ch = 'x';  //  a char
    auto i = 123;   //  an int
    auto d = 1.2;   //  a double
    auto z1 = sqrt(y);   //  z has the type of whatever sqrt(y) returns.

    const int dmv = 17; //  dmv is a named constant
    int var  = 17;      //  var is not a constant
    constexpr double max1 = 2*dmv;  // Ok if square(17) is a constant expression
    const double max3 = 1.4*square(var);    //  OK, may be evaluated at run time
    
    double sum(const std::vector<double>&); // sum will not modify its argument
    std::vector<double>{1.2, 3.4, 4.5};   //  v is not a constant
    const double s1 = sum(v);
    constexpr double s2 = sum(v);   //  error: sum(v) not a constant expression.

    

    return 0;
}