#include<iostream>
using namespace std;
main()
{
    string array1;
    string  array2;
    cout<<"Enter array 1: ";
    cin>>array1;
    cout<<"Enter array 2: ";
    cin>>array2;
    int count=0;

for(int i=0;array1[i]!='\0';i++)
{
   
    for(int j=0;array2[j]!='\0';j++)
    {
        if(array1[i]==array2[j])
        {
            array2[j]='#';
           count++;
           
           break;
        }
    }
}
cout<<count;

}