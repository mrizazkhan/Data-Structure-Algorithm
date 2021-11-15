#include<iostream>
using namespace std;


int * fun (int s)  
{
   int *p;
   p = new int[s]; //This will create an Array and allocate in heap memory.

   for(int i=0; i<s; i++)
   {
       p[i]= i+1;
   }
   return p;
}


int main()
{
   
   int *ptr, sz = 5;

   ptr=fun(sz);

   for(int i=0; i<sz; i++) //It will print all the elements in the array that is created in the fun function.
   {
       cout<<ptr[i]<<endl;
   }

    return 0;
}