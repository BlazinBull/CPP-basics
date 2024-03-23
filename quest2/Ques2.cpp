//Write a program to find the size of integer data type without using sizeof operator.

#include<iostream>
using namespace std;

int  main()
{
    int x=40;
    int* p=&x;
    int* q=p+1;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<endl;
    uintptr_t ptr_p = reinterpret_cast<uintptr_t>(p);
    uintptr_t ptr_q = reinterpret_cast<uintptr_t>(q);


    cout<<"size of the integer data type is "<< ptr_q - ptr_p<<" bytes.";

    return 0;
}