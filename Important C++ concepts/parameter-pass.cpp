#include<iostream>
using namespace std;


/*  Call by Address
void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y= temp;

}
*/

/* Call by Value
void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y= temp;

}
*/

// Call by Reference

void swap(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y= temp;

}

int main()
{
    int a,b;
    a = 10;
    b=20;
    // swap(&a, &b);    //Call by Address.
    // swap(a, b); //  Call by value.
    swap(a, b); //  Call by References.
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
