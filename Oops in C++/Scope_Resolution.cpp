#include<iostream>

using namespace std;

int c = 54;

int main() {

int a, b, c;

cout<<"Enter the value of a"<<endl;
cin>>a;

cout<<"Enter the value of b"<<endl;
cin>>b;

c = a+b;
cout<<"Value of c is"<<c<<endl;

cout<<"Value of global operator"<<::c<<endl;

return 0;

}