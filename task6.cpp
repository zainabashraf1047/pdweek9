#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int array[size]; 
    for(int i=0;i<size;i++)
    {
     cout<<"Enter array: ";
     cin>>array[i];
    }
   
    int transform;
    cout<<"Enter number of times even odd transformation need: ";
    cin>>transform;
  
    for(int i=0;i<size;i++)
    {
        if(array[i]%2==0)//even
        {
            array[i]=array[i]-(transform*2);
           
        }
        else //odd
        {
           array[i]=array[i]+(transform*2);
         
        }
           cout<<array[i]<<" ";

    }

}