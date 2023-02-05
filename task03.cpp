#include<iostream>
using namespace std;

main()
{
    string text;
    cout<<"Enter string: ";
    cin>>text;
    int length=0;
    for(int i=0;text[i]!='\0';i++)
    {
        length++;
    }

    if(length%2==0)
    {
        cout<<"True";
    }
     if(length%2!=0)
    {
        cout<<"False";
    }

}