#include<iostream>

using namespace std;

int main(){
int age;

    cout<<"Please Enter Your Age"<<endl;
    cin>>age;

if ((age<18) && (age>1)){
    cout<<"You are not allowed "<<endl;}

else if (age==18)
{
    cout<<"You Will get Children Pass"<<endl;
}
else if (age<1)
{
 cout<<"Your Not Born Yet"<<endl;}

else{

    cout<<"You will get Pass"<<endl;
}


return 0;

}