#include "Cylinder.h"
#include <iostream>
using namespace std;

//constexpr double Cylinder:: PI=3.14159265358979323846;
constexpr double  PI=3.14159265358979323846;

Cylinder:: Cylinder(long long int a,long long int b): rad(a),height(b)
{

}

Cylinder::Cylinder(): rad(0),height(0) {}

void Cylinder:: out_circumference()
{
    cout<<"Circumference: "<<fixed<<setprecision(3)<<2*PI*rad<<endl;
}

void Cylinder::out_surfaceArea()
{
    double cir=PI*rad*rad;
    double cir_len=2*PI*rad;
    cout<<"SurfaceArea: "<<fixed<<setprecision(3)<<(2*cir+cir_len*height)<<endl;
}


void Cylinder::out_volume()
{
    double cir=PI*rad*rad;
    cout<<"Volume: "<<fixed<<setprecision(3)<<(cir*height)<<endl;
}
