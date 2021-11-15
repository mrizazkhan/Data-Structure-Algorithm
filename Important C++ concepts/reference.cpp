#include<iostream>
using namespace std;

int main()
{
    int a = 10;

    int &r = a; //Reference variable must be initialized at the time of declaration.

    cout<<a<<endl;
    r ++;
    cout<<a<<endl;
    return 0;
}