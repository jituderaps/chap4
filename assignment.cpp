/*
 * =====================================================================================
 *
 *       Filename:  assignment.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/08/2021 11:30:20 AM
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
  string previous = " ";
  int _num_words = 0;
  string current;

  while(cin>>current)
  {
    _num_words+=1;
    if(previous==current)
    {
      cout<<"the number of word "<<_num_words<<'\n';
      cout<<"repeated word "<<current<<'\n';
    }
    previous = current;

  }
  return 0;
}

