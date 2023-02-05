#include<iostream>
using namespace std;
main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int price[5]={500,500,500,500,500};

    float discount;
    string moviename;
    cout<<"Enter movie name: ";
    cin>>moviename;


    for(int i=0;i<5;i++)
    {
        if(moviename==movies[i])
        {
            if(i%2!=0)
            {
                 discount=(price[i]*0.05);
                 discount=price[i]-discount;
                 cout<<discount;
            }
            if(i%2==0)
            {
                 discount=(price[i]*0.10);
                 discount=price[i]-discount;
                 cout<<discount;
            }
           
        }
    }
}