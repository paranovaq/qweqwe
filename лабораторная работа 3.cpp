#include <iostream>
#include <cmath>
#include <math.h>
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

int main()
{
float x;
float y;
float z;
float r;
//x = 3.251;
//y = 0.425;
//z = 0.374e-4;
cout<<("x: ", "\n");
cin>>x;
cout<<("y:","\n");
cin>>y;
cout<<("z:", "\n");
cin>>z;
r = pow(M_PI,y*x) + pow(exp(x),y) - y*(atan(z)- M_PI/6) / abs(x) + 1/(pow(y,2)+ 1);
cout<<fixed;
cout<<setprecision(6);
cout<<r;



    return 0;
}
