#include<iostream>
using namespace std;


struct Rectangle
{
    int length; //it will consume 4 bytes.
    int bredth;
    char x; // It wil alocate 4bytes but it will be using 1byte. this adjustment in programming called padding.
    
};

int main()
{
  
    struct Rectangle r1= {10,5}; //initializer

    r1.length = 15; // changing values
    r1.bredth = 7;

    // cout<<sizeof(r1);
    cout<<r1.length<<endl;
    cout<<r1.bredth<<endl;
    return 0;
}