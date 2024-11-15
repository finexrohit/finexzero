#include<iostream>

#include<iomanip>

using namespace std;

int main()  {

 int a=3,b=7,c=0;

 cout<<"Value of a is "<<a<<endl;

 a = 5, b=93, c=2097;

cout<<"Manipulators in C++ "<<endl;
cout<<endl;
cout<<"Value of a is "<<a<<endl;
cout<<"Value of b is "<<b<<endl;
cout<<"Value of c is "<<c<<endl;
cout<<"Value of a with setW is "<<setw(5)<<a<<endl;
cout<<"Value of b with setW is "<<setw(5)<<b<<endl;
cout<<"Value of c with setW is "<<setw(4)<<c<<endl;

/*int x = 9;
float y = 9.57;
cout<<"Value of x is "<<float(x)<<endl;
cout<<"Value of y is "<<int(y)<<endl;

cout<<"Addition of x and y is "<<x + y<<endl;
cout<<"Addition of x and y is "<<x + int(y)<<endl;
cout<<"Addition of x and y is "<<x + (int)y<<endl;*/

int x=5, y = 3, z = 9;

int r = x*y+(z-29);

cout<<"Value of r is "<<r<<endl;


return 0;

}