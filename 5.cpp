#include <iostream>
using namespace std;
int main()
{
float base, height, area;
//Write a C++ program to enter base and height of a triangle and find its area. 
//enter length of base 
cout<<"enter the length of base" << "\n";
//store the value of base
cin >> base ;
cout<<"enter the length of height" << "\n";
//store the value of height
cin >> height ;
//calculate the area of triangle with the help of its bade and height
area = (0.5)*(base*height);
//print the terminal
cout <<"area of the triangle" << area <<"\n";

return 0;
}
