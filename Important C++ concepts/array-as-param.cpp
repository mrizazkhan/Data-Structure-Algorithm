#include<iostream>
using namespace std;


// Array as parameter.

void fun(int A[], int n)  // If we use "A[]" we will only set is as Passing a pointer to only for an array. but If we use "*A" then it is a general method, then we can use it as we wish.
{   
    int i;

    for(i = 0; i<n; i++)
    {
        cout<<A[i]<<endl;
    }
}


int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    fun(A, 5);

    
    return 0;
}

//Arrays can only be passed by address.