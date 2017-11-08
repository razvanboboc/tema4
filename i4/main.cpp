#include <iostream>
using namespace std;

int a, b;
void swap (int &x, int &y)
{
    int t=x;
    x=y;
    y=t;
}

int main () {
   cin>>a>>b;
   cout<<"Before swap, value of a:"<<a<<endl;
   cout<<"Before swap, value of b:"<<b<<endl;
   swap(a,b);
   cout<<"After swap, value of a:"<<a<<endl;
   cout<<"After swap, value of b:"<<b<<endl;
   return 0;
}
