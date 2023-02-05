#include <iostream>
using namespace std;
 int pinint[4];
string cnvrt(string pin);
 
main()
{
  string moves[10]= {"Shimmy", "Shake", "Pirouette", "Slide", "Box step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
  string pin;
  cin >> pin;
  int lengthpin;
  
  lengthpin = pin.length();
  if (lengthpin == 4)
  {
    for (int i = 0; i < 4; i++)
    {
      if (pin[i] != '0' && pin[i] != '1' && pin[i] != '2' && pin[i] != '3' && pin[i] != '4' && pin[i] != '5' && pin[i] != '6' && pin[i] != '7' && pin[i] != '8' && pin[i] != '9')
      {
        cout << "Invalid Pin";
        return 0;
      }
    }
  }

  else
  {
    cout << "Invalid Pin";
    return 0;
  }

 cnvrt(pin);
int moveidx;
for(int j=0;j<4;j++)
{
   moveidx=pinint[j]+j;
   if(moveidx>9)
   {
     moveidx=moveidx-10;
     cout<<moves[moveidx]<<" ";
   }
   if(moveidx<=9)
   {
     cout<<moves[moveidx]<<" ";
   }
}





}
// string to int convertor
string cnvrt(string pin)
{

  for (int j = 0; j < 4; j++)
  {
    if (pin[j] == '0')
    {
      pinint[j] = 0;
    }
    else if (pin[j] == '1')
    {
      pinint[j] = 1;
    }
    else if (pin[j] == '2')
    {
      pinint[j] = 2;
    }
    else if (pin[j] == '3')
    {
      pinint [j] = 3;
    }
    else if (pin[j] =='4')
    {
      pinint [j] = 4;
    }
    else if (pin[j] == '5')
    {
      pinint[j] = 5;
    }
    else if (pin[j] == '6')
    {
      pinint[j] = 6;
    }
    else if (pin[j] == '7')
    {
      pinint[j] = 7;
    }
    else if (pin[j] == '8')
    {
      pinint[j] = 8;
    }
    else if(pin[j]=='9') 
    {
      pinint[j] = 9;
    }
  }
}