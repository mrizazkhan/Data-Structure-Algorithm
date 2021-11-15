#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

int main()
{
    /*
    struct Rectangle r = {10,5};

    struct Rectangle *p = &r;

    // (*p).length = 30; //Not Recomened.
    p->length = 20; //changing or assigning value using pointers.

    cout<<p<<endl;
    cout<<r.length<<endl;
    */

     struct Rectangle *p;


    p = new struct Rectangle; //In c++
    //  p= (struct Rectangle *) malloc(sizeof(struct Rectangle)); // In C.

     p->length = 20;

     cout<<p->length;

    
    return 0;
}