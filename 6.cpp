
#include <iostream>
using namespace std;
int main()
{
float angle_a, angle_b, angle_c;
//Write a C++ program to enter two angles of a triangle and find the third angle. 
//enter two angles of the triangle
cout<<"enter the angle of triangle " << "\n";
cin >> angle_a ;
cout<<"enter the other angle of triangle " << "\n";
cin >> angle_b ;
//get the third angle of a triangle
angle_c= 180 - (angle_a + angle_b);
//print the terminal
cout <<"third angle of a triangle " << angle_c <<"\n";
return 0;
}
