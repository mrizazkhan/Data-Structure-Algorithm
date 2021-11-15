#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    /* Pointers */
    // int a = 10;

    // int x[5] = {3,4,7,8,2};
    // p = &a;
    int *p;
    p= new int[5]; //It will alocate in the heap memeory.

    p[0]=10;
    p[1]=21;
    p[2]=30;
    p[3]=50;
    p[4]=130;


    // p  = x;     //Don't use & to pointer an Array

    // cout<<"Using Pointer "<<p<<endl;
    // cout<<"Using Pointer "<<&a<<endl;
    // cout<<"Using Pointer "<<*p<<endl; //Dereferencing

    // for(int i=0; i < 5; i++)
    // {
    //     cout<<p[i]<<endl;
    // }

    // delete[ ]p; //Deallocation of dynamic memory allocation. the memory which is allocated in heap memory should be deallocated after use in big programmes/

/*
    when we dereference a pointer, it will access number of bytes depending on its data type.

    char pointer will access only 1 byte.
    int pointer will access 4 bytes.


    datatype of a pointer is for dereferencing.
*/

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    return 0;
}