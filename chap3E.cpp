/*
 * =====================================================================================
 *
 *       Filename:  chap3E.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/17/2021 11:43:33 AM
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
  string val1,val2,val3,temp;

cin>>val1;
cin>>val2;
cin>>val3;

  if(val1>val2)
  {
    temp = val1;
    val1=val2;
    val2=temp;
  }
  if(val1>val3)
  {
    temp= val1;
    val1=val3;
    val3=temp;
  }
  if(val2>val3)
  {
    temp=val2;
    val2=val3;
    val3=temp;
  }
cout<<val1<<","<<val2<<","<<val3;

return 0;

}

