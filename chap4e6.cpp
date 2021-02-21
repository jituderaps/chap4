/*
 * =====================================================================================
 *
 *       Filename:  chap4e6.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/28/2021 08:42:01 AM
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

  vector<string> alpha_digit = {"zero","one","two","three","four","five","six","seven","eight","nine"};

  for(int x;cin>>x;){
    if(x>9)simple_error("limit has excedd");
    cout<<alpha_digit[x]<<endl;
    cout<<alpha_digit[x]<<"="<<x<<endl;

  }
  return 0;
}

