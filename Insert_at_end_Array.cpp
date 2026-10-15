#include<iostream>
using namespace std;
int insert_end(int A[], int n,int item)
{
    A[n]=item;
    return n+1;
}
int main()
{
    int A[]={10, 20, 30};
    int n=3;
    int item= 40;
    n= insert_end(A, n, item);
     
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}