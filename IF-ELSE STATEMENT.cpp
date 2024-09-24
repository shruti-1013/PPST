#include <iostream>
using namespace std;

int main() 
{
  int num;
  //check if the numbeer is between 10 and 20
  cout<<"Enter a number:";
  cin>> num;
  
  if (num>=10 && num<=20 )
  { 
    cout<<"The number "<< num <<" is between 10 and 20./n";
  }
else
{
  cout<<"The number "<< num << "is not  between 10 and 20./n";
}
    return 0 ;
}