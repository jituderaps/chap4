/*
 * =====================================================================================
 *
 *       Filename:  switch.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/19/2021 08:02:43 PM
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
  constexpr char k = 'b';
  constexpr int m = 'z';

  char a;
  cin>>a;

  switch(a)
  {
   case k:
     {
       cout<<"yayyyyy";
       break;
     }

    case 'n':
     {
       cout<<"yayyyyy";
       break;
     }

     case m:
     {
       cout<<"yayyyyy";
       break;
     }

    case 'm':
     {
       cout<<"myayyyyy";
       break;
     }

   default: simple_error("that not you wanted");
  }
return 0;
}

