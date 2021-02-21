/*
 * =====================================================================================
 *
 *       Filename:  chap4e8.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/28/2021 10:00:16 AM
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
  int rice=1;
  int square=1;
  while(rice<1000000000){
    rice*=2;
    ++square;
    cout<<"piece of rice are "<<rice<<" at square of "<<square<<endl;


  }
  return 0;
}

