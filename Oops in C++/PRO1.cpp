#include<iostream>

using namespace std;

class Employee
{
    private:
        int a, b, c;
    public: 
        int d, e;

        void setData(int a1, int b1, int c1); // Declaration

        void getData()
         {
            cout<<"The Value of a is "<<a<<endl;
            cout<<"The Value of b is "<<b<<endl;
            cout<<"The Value of c is "<<c<<endl;
            cout<<"The Value of d is "<<d<<endl;
            cout<<"The Value of e is "<<e<<endl;

        }  
};

void Employee :: setData(int a1, int b1, int c1){
       a = a1;
       b = b1;
       c = c1;

}

int main() {

    Employee Rohit ;

    // harry.a = 134; --> This will throw error as a is private 

     Rohit.d = 34;
     Rohit.e = 3;
     Rohit.setData(1,2,4);
     Rohit.getData();

     return 0;
}