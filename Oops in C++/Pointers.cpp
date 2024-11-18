#include<iostream>
using namespace std;

int main() {
    int a = 9;
    int *b= &a;

    cout<<"Address of a "<<&a<<endl;
    cout<<"Address of b "<<b<<endl;

    int **c = &b;

    cout<<"Address of c "<<&b<<endl;
    cout<<"Address of c "<<c<<endl;
    cout<<"Value Of Address of c "<<*c<<endl;
    cout<<"The Value Of Address Value_at(value_at(c)) is"<<**c<<endl;

    return 0;
}