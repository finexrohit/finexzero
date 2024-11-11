#include<iostream>

using namespace std;

int main() {
int age;

cout<<"Enter Your Age"<<endl;
cin>>age;

switch (age)
{
case 18:
cout<<"You are 18"<<endl;
    break;
case 22:
cout<<"You are 22"<<endl;
    break;
case 2:
cout<<"You are 2"<<endl;
    break;
default:
cout<<"No more Cases"<<endl;
    break;
}

return 0;

}