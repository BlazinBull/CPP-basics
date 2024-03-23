//Create a 2D array with 3 rows and 4 columns and a 1D array of size 9. Create two functions with the same name for entering 1D and 2D array elements, and another two functions with the same name for printing 1D and 2D array elements, making a total of 4 functions. When printing, print only the elements having index which is multiple of three i.e. (for 1D array index 0,3,6,etc and for 2D array [0][0], [0][3], [1][0], [1][3],etc)


#include<iostream>
using namespace std;

namespace ONED
{
    int One_Dim[9];
    void input()
    { 
      cout<<"Enter numbers:\n";  
      for(int i=0;i<=8;i++){
        cin>>One_Dim[i];
      }   
    }
    void output()
    {
        cout<<"Output:\n";
        int i=0;
        while(i<=8)
        {
            cout<<One_Dim[i]<<endl;
            i=i+3;
        }
    }
}

namespace TWOD
{
    int Two_Dim[3][4];
    void input()
    {
       cout<<"Enter numbers:\n"; 
       for(int i=0;i<=2;i++){
        {
            for(int j=0;j<=3;j++){
                cin>>Two_Dim[i][j];
            }
        }
      } 
    }
    void output()
    {
        cout<<"Output:\n";
        for(int i=0;i<=2;i++){
            int j=0;
            while(j<=3)
            {
                cout<<Two_Dim[i][j]<<endl;
                j=j+3;
            }
        }
    }
}


int main()
{
    ONED::input();
    TWOD::input();
    ONED::output();
    TWOD::output();
    return 0;
}