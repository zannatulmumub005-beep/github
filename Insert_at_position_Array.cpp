#include<iostream>
using namespace std;
int insert_position(int A[],int n,int item,int pos)
{
    for(int k= n-1; k>=pos; k--)
    {
        A[k+1] = A[k];
    }
    A[pos]=item;
    return n+1;
}
int main()
{
    int A[]={10,20,40,50};
    int n=4;
    int item= 30;
    int pos=2;
    
    n=insert_position(A, n, item, pos);

    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}