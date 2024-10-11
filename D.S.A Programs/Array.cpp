#include<iostream>
using namespace std;

int main () {
 
 /* int n;
 cout<<"Enter the Array Number:"<<endl;
 cin>>n;*/
 int A[5] = {2,3,4,5,6};

/*cout<<sizeof(A)<<endl;
for ( int i = 0; i < 5; i++)
{
  cout<<A[i]<<endl;
}*/

for (int x:A)
{
    cout<<x<<endl;

}

return 0;

}