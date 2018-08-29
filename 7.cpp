#include <iostream>
using namespace std;
int main()
{
float a , area ;
//Write a C++ program to calculate area of an equilateral triangle. 
//enter length in triangle side
cout<<"enter the length of a side of equilateral traingle " << "\n";
cin >> a ;
//calculate the area of equilateral triangle
area = (1.732*a*a)/4;
//print the terminal
cout <<"area of triangle " << area  <<"\n";
return 0;
}
