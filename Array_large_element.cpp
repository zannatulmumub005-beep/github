#include<iostream>
using namespace std;
int main()
{
    int DATA[]={15, 42, 8, 90, 24};
    int N=5;
    int MAX= DATA[0];
    int LOC=0;
    for(int K=1; K<5; K++)
    {
        if(MAX< DATA[K])
        {
            MAX = DATA[K];
            LOC = K;
        }
    }
    cout<<MAX<<endl;
}