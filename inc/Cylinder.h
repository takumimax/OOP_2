#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
#include <iomanip>

using namespace std;

class Cylinder
{
    private:
        
        long long int rad;
        long long int height;
    public:
        Cylinder(long long int,long long int);
        Cylinder();
        //static constexpr double PI;
        void out_circumference();
        void out_surfaceArea();
        void out_volume();

};

#endif




