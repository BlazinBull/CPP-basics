#include<iostream>
using namespace std;

int  main()
{
    //Intake of values from user

    int n;
    cout<<"Enter the number of elements in array:\n";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    {
       cin>>A[i]; 
    }

    //Sorting

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                int t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }

    //Printing sorted array
    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++)
    {
       cout<<A[i]<<endl; 
    }   
    
    return 0;
}