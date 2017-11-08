#include <iostream>
using namespace std;
int i;
int main()
{
    for(i=2;i<=60;i+=2)
        cout<<i<<" ";

    while(i<=60){
        i=2;
        cout<<i<<" ";
        i+=2;
    }

    do{
        int i=2;
        cout<<i<<" ";
        i+=2;
    }
    while(i<=60);
    return 0;
}
