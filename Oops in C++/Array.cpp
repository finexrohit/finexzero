#include<iostream>
using namespace std;

int main() {
   // Example No. 1
    int marks [5] = {99, 76, 35, 76, 67};

    cout<<"Below Are Marks"<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[0]<<endl;

    // Example No. 2

    int Mathsmarks[5];
    Mathsmarks[0] = 93;  
    Mathsmarks[1] = 100;  
    Mathsmarks[2] = 98;  
    Mathsmarks[3] = 56;  
    Mathsmarks[4] = 97;

    cout<<"Below Are Maths Marks"<<endl;
    cout<<Mathsmarks[0]<<endl;
    cout<<Mathsmarks[1]<<endl;
    cout<<Mathsmarks[2]<<endl;
    cout<<Mathsmarks[3]<<endl;
    cout<<Mathsmarks[4]<<endl;

    // Example No. 3

    for (int i = 0; i < 5; i++)
    {
        cout<<"The value of Marks "<<i<<" is "<<marks[i]<<endl;
    }
    
    return 0;
}