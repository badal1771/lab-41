#include <iostream>
using namespace std;
int main()
{
float maths , chem , phy , bio , cs , total , average , percentage ;
//Write a C++ program to enter marks of five subjects and calculate total, average and percentage. 
//enter marks of maths
cout<<"enter the marks in maths " << "\n";
cin >> maths ;
//enter marks of chem
cout<<"enter the marks in chem " << "\n";
cin >> chem ;
//enter marks of phy
cout<<"enter the marks in phy " << "\n";
cin >> phy ;
//enter marks of bio
cout<<"enter the marks in bio " << "\n";
cin >> bio ;
//enter marks of cs
cout<<"enter the marks in cs " << "\n";
cin >> cs ;
//calculate the total ,average and percentage.
total = (maths + bio + phy + cs + chem);
average = (maths + bio + phy + cs + chem)/5;
percentage = (maths + bio + phy + cs + chem)/5 ;
//print the terminal
cout <<"total of all subject " << total <<"\n";
cout <<"average of all subject " << average <<"\n";
cout <<"percentage of all subject " << percentage <<"\n";
return 0;
}
