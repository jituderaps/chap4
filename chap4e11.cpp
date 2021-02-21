/*
 * =====================================================================================
 *
 *       Filename:  chap4e11.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/28/2021 11:53:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include "std_lib_facilities.h"

int prime(int x){
  for(int i=2;i<x;++i){
  if(x%i==0)
    return 0;
  }
  return 1;
}

int main()
{
  vector<int> primes;
  int max;

  cout<<"please enter a max number to which you want to know prime.."<<endl;
  cin>>max;
  cout<<'\n';

  for(int i=2;i<max;i++){
  if(prime(i)==1){
  cout<<i<<" yay its prime number"<<endl;
  primes.push_back(i);
  }
  }

  cout<<'\n';
  for(int y:primes)
  cout<<y<<endl;
  return 0;
}

