#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    string arrclr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter array of colors: ";
        cin>>arrclr[i];
    }
    int sum=size*2;
    for(int i=0;i<size-1;i++)
    {
        if(arrclr[i]!=arrclr[i+1])
        {
            sum++;
        }
    }
    cout<<sum;
}