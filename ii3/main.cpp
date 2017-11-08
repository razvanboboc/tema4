#include <iostream>
using namespace std;
int i,j,v[3][32];
float averagetemp(int v[3][32]){
    int maxtemp=-100;
    int mintemp=100;
    for(int i=1;i<=31;i++){
       maxtemp=maxtemp+v[i][1];
       mintemp=mintemp+v[i][2];
    }
    cout<<"The average high temperature is: ";
    return (float)maxtemp/31;
    cout<<"The average min temperature is: ";
    return (float)mintemp/31;
}

int highest(int v[3][32]){
    int maxtemp=-100;
    int mintemp=100;
    for(int i=1;i<=31;i++)
        for(int j=1;j<=2;j++){
        if(v[i][j]>maxtemp)
            maxtemp=v[i][j];
        if(v[i][j]<mintemp)
            mintemp=v[i][j];
            }
    cout<<"The maxtemp is: ";
    return maxtemp;
    cout<<endl<<"The mintemp is: ";
    return mintemp;
}

int main()
{
    cout << "Input the high and low temperatures for each day of the month of January: ";
    for(i=1;i<=31;i++)
        for(j=1;j<=2;j++)
            cin>>v[i][j];
    averagetemp(v);
    highest (v);

    return 0;
}
