#include<iostream>
using namespace std;
main()
{
    string array[4];
    for(int i=0;i<4;i++)
    {

       cout<<"Enter array: ";
       cin>>array[i];
    }

       if(array[0] ==array[1] && array[1] ==array[2] && array[2]  ==array[3])
       {
         cout<<"True";
       }
       else
       {
        cout<<"False";
       }
    
    

}