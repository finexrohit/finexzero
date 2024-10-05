#include<iostream>

using namespace std;

int main () {

int a=48, b=8;

cout<<"Operators in C++:" <<endl;

cout<<"1.) Arithmetic Operators" <<endl;

cout<<"Subtraction a-b = "<<a-b<<endl;

cout<<"Multiply a*b = "<<a*b<<endl;

cout<<"Divide a/b = "<<a/b<<endl;

cout<<"Module a%b = "<<a%b<<endl;

cout<<"Addition a+b = "<<a+b<<endl;

cout<<endl;

cout<<"2.) Assignment Operators"<<endl;

cout<<endl;

// int a=2, b=7, char=d='d'

cout<<"3.) Comparison Operators"<<endl;

cout<<"Equal = "<<(a==b)<<endl;

cout<<"Not Equal = "<<(a!=b)<<endl;

cout<<"Greater than equal to = "<<(a>=b)<<endl;

cout<<"Less than equal to = "<<(a<=b)<<endl;

cout<<"Less Than = "<<(a<b)<<endl;

cout<<"Greater Than = "<<(a>b)<<endl;
cout<<endl;

cout<<"4.) Logical Operators"<<endl;

cout<<"&& Used for both Operator are correct than result came =   "<<((a==b) && (a>b))<<endl;

cout<<"|| Used for both of them one is correct than result came = "<<((a==b) || (a>b))<<endl;

cout<<"|| Used to reverse the Result  = "<<(!(a==b) && (a>b))<<endl;


return 0;

}