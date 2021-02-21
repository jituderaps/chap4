#include"std_lib_facilities.h"


constexpr double yen_per_dollar = 16;
constexpr double kroner_per_dollar = 56;
constexpr double pound_per_dollar = 0.8;


int main()
{

  char choice;
  int amount;

  cout<<"which currency do you want to convert into dollar yen (y) ";
  cout<<"kroner(k), or pounds(p)"<<endl;

  cin>>choice;

  if(choice == 'y'){
    cout<<"how much yen do you want to convert?"<<endl;
    cin>>amount;

    cout<<"that will be "<<amount*yen_per_dollar<<" in dollar"<<endl;
  }

  else if(choice == 'k'){
    cout<<"how much kroner do you want to convert?"<<endl;
    cin>>amount;

    cout<<"that will be "<<amount*kroner_per_dollar<<" in dollar"<<endl;
  }

  else if(choice == 'p'){
    cout<<"how much pound do you want to convert?"<<endl;
    cin>>amount;

    cout<<"that will be "<<amount*pound_per_dollar<<" in dollars"<<endl;
  }
  else{
  simple_error("that currency is not available!");
  }

return 0;
}

