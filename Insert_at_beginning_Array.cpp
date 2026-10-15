#include<iostream>
using namespace std;

int insert_item(int A[], int n, int item)
{
    for(int k = n-1; k >= 0; k--)
    {
        A[k + 1] = A[k];
    }
    A[0] = item;
    
    return n + 1; 
}

int main()
{
    int A[10] = {10, 20, 30};
    int n = 3;
    int item = 5;
    n = insert_item(A, n, item);

    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}