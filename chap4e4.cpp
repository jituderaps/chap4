/*
 * =====================================================================================
 *
 *       Filename:  chap4e4.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/27/2021 06:49:36 PM
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
  int num,guess;
  srand(time(0));
  num = rand()%100 +1;
  int tries = 0;

  cout<<num<<endl;
  do{
     cout<<"please guess a number between 1 to 100.."<<endl;
     cin>>guess;
     tries++;

     cout<<"tries: "<<tries<<endl;

    if(guess>num){
      cout<<"TOO HIGH!!!"<<endl;
      if(tries>=7)break;
    }
    else if(guess<num){
      cout<<"LOW!!!"<<endl;
       if(tries>=7)break;
    }
    else {
      cout<<"your guess is right "<<guess<<endl;
    }
  }
  while(guess!=num);
  return 0;
}

