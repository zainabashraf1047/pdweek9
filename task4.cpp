#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int array;
    for(int i=0;i<size;i++)
    {

       cout<<"Enter array: ";
       cin>>array[i];

    }
    while(array>0)
    {
        array=array%10;
        array=array/10;
    }
//remaining
}