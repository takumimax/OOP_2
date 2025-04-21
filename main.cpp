#include "Cylinder.h"
#include <iostream>
using namespace std;


int main()
{
    long long int rad,height;
    cin>>rad>>height;
    Cylinder Ans(rad,height);

    Ans.out_circumference();
    Ans.out_surfaceArea();
    Ans.out_volume();

    return 0;
    
}