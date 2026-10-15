#include<iostream>
using namespace std;
int delete_from_beginning(int A[],int n)
{
    for(int k=1; k<=n; k++)
    {
    A[k-1]=A[k];
    }
    return n-1;
}
int main()
{
    int A[]={10,20,30,40};
    int n=4;

    n=delete_from_beginning(A,n);

    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

}