#include<iostream>
using namespace std;


struct Test 
{
    int A[5];
    int n;
};

void fun(struct Test t1)
{
    t1.A[0] = 20; //If you want this changing value also reflect in main function or in actual parameters then use call by reference in parameters.

    // cout<<t1.A[0];
}


struct Rectangle 
{
    int length;
    int breadth;
};

int area(struct Rectangle r1) //This is struct as call by value but if you want it to use as call by reference use variable name '&r1'..... Here call by value is enough as its need only to Read the values of struct. no need to write the actual struct values.

{
    return r1.length * r1.breadth;
}

int main()
{
    struct Rectangle r = {10, 5};

    // cout<<area(r);

    struct Test t = {{2,4,6,8,10}, 5};

    fun(t);

    cout<<t.A[0];

    return 0;
}

// when we pass struct if it is contain an array it can be send as call by value.