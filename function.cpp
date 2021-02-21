#include"std_lib_facilities.h"

void print_square(int x){

  int y=0;
 for(int i=1;i<x+1;++i)
  {
     y+=x;
    cout<<y<<endl;
  }
  cout<<y<<endl;
}

int main()
{
  int k=6;
  print_square(k);

 return 0;
}
