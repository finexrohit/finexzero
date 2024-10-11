#include<iostream>
//#include<stdio.h>

using namespace std;

struct Rectangle
{
int length;
int Breadth;
int x;
};

int main () {
struct Rectangle r1 = {10,5};

r1.length=15; // You can change value by this command
r1.Breadth=10;// You Can Change Vakue By This Command

cout<<"length is"<<r1.length<<endl;
cout<<"breadth is"<<r1.Breadth<<endl;

cout<<"Area Of Rectangle is " <<r1.length*r1.Breadth<<endl;

cout<<"Size Of Rectanlge is" << sizeof(r1)<<endl;

return 0;

}