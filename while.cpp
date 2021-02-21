/*
 * =====================================================================================
 *
 *       Filename:  while.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/19/2021 08:34:16 PM
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
  char c ='a';

  while(c<='z')
  {
    cout<<c<<'\t'<<c+0<<endl;
    ++c;
  }

  return 0;

}

