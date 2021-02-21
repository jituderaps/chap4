/*
 * =====================================================================================
 *
 *       Filename:  c1.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/03/2021 04:54:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include "std_lib_facilities.h"

int main ()

{
  int num;
  string first,last,name;

  cin>>first>>last;
  name = first +' '+last;

  cout<<name <<"is my full name\n";

  cout<<"Enter a intiger number....";
  cin>>num;

  cout<<"\nthe value of n is "<<num;
  cout<<"\nthe sqroot of n is "<<sqrt(num);
  cout<<"\nthe thrice of num is "<<3*num;

  return 0;


}

