#include<iostream>
using namespace std;
main()
{
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,30,40};


    int kg;
    string srfruit;

    cout<<"Enter fruit name"<<endl;
    cin>>srfruit;
    cout<<"Enter quantity of fruit";
    cin>>kg;
    int totalamount;
    for(int i=0;i<4;i++)
    {
        if(srfruit==fruit[i])
        {
            totalamount=price[i]*kg;
            cout<<totalamount;
            break;
        }

    }
    
  
}
