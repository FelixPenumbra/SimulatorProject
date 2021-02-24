#include <vector>
#include <stdio.h>
using namespace std;

int testFunc(int a, int b){
    return 4;
}


// C program to implement Runge Kutta method

//vector<std::string> tsf={"x0","y0", "phi0", "xd0", "yd0", "phid0"};


// Finds value of y for a given x using step size h
// and initial value y0 at x0.
vector<double> rungeKutta(vector<double> ts0, vector<double> a)
{
    // Count number of iterations using step size or
    // step height h
    double h = 0.0001;
    
    double x0 = ts0[0];
    double y0 = ts0[1];
    double phi0 = ts0[2];
    double xd0 = ts0[3];
    double yd0 = ts0[4];
    double phid0 = ts0[5];
    double xdd0 =a[0];
    double ydd0=a[1];
    

    double k1, k2, k3, k4;

    // Iterate for number of iterations
    
    // Apply Runge Kutta Formulas to find
    // next value of y
    k1 = xdd0;
    k2 = k1*h/2 + k1 ;
    k3 = k2*h/2 + k2;
    k4 = k3*h + k3;

    // Update next value of y
    double xd1 = xd0 + (1.0/6.0)*h*(k1 + 2*k2 + 2*k3 + k4);
    
    k1 = ydd0;
    k2 = k1*h/2 + k1;
    k3 = k2*h/2 + k2;
    k4 = k3*h + k3;
    double yd1 = yd0 + (1.0/6.0)*h*(k1 + 2*k2 + 2*k3 + k4);
    
    k1 = xd0;
    k2 = k1*h/2 + k1 ;
    k3 = k2*h/2 + k2;
    k4 = k3*h + k3;

    // Update next value of y
    double x1 = x0 + (1.0/6.0)*h*(k1 + 2*k2 + 2*k3 + k4);
    
    k1 = yd0;
    k2 = k1*h/2 + k1;
    k3 = k2*h/2 + k2;
    k4 = k3*h + k3;
    double y1 = y0 + (1.0/6.0)*h*(k1 + 2*k2 + 2*k3 + k4);
    
    

    vector<double> res{x1, y1, phi0, xd1, yd1, phid0};
    return res;
}




// Driver method
