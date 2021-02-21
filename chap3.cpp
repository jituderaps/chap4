/*
 * =====================================================================================
 *
 *       Filename:  chap3.cpp
 *
 *    Description: i
 *
 *        Version:  1.0
 *        Created:  01/17/2021 09:26:18 AM
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
  int age;

  cout<<"how old are you?\n";
  cin>>age;

  if(age<0) simple_error("you are kidding!");
  cout<<"next year you will be "<<age+1;
  return 0;
}

