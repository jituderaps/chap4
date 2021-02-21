/*
 * =====================================================================================
 *
 *       Filename:  chap4e18.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/07/2021 05:26:00 PM
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
  int a,b,c;
  double z,x1,x2;

  cout<<"the enter the coefficient a,b and c of ax^2+bx+c , to calculate the value of x"<<endl;
  cin>>a>>b>>c;

  z=sqrt(b*b-4*a*c);
  x1 = (-b+z)/(2*a);
  x2 = (-b-z)/(2*a);

  cout<<"the value of x will be "<<x1<<","<<x2<<endl;
  cout<<-b<<" "<<z<<" "<<2*a<<endl;
  return 0;

}

