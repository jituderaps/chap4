/*
 * =====================================================================================
 *
 *       Filename:  typesafety.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/09/2021 12:42:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include "std_lib_facilities.h"

int main()
{
  double d=0;

  while(cin>>d)
  {
    int i{d};
    char c{i};
    int i2{c};

    cout<<"d== "<<d<<endl;
    cout<<"\ni== "<<i;
    cout<<"\nc== "<<c;
    cout<<"\ni2== "<<i2;

  }

  return 0;
}

