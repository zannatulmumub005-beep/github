#include<iostream>
using namespace std;
int insert_at_any_position(int A[],int max_size,int pos,int item,int n)
{
    if(n>=max_size)
    {
        cout<<"Invalid";
        return n;
    }
    if(pos<0 || pos>n)
    {
        cout<<"invalid position";
        return n;
    }
    for(int k=n-1; k>=pos; k--)
    {
        A[k+1]=A[k];
    }
    A[pos]=item;
    return n+1;
}
int main()
{
    int A[]={10,20,40,50};
    int n=4;
    int item=30;
    int pos=2;
    int max_size=10;

    n=insert_at_any_position(A, max_size, pos, item, n);

    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}