/*
 * =====================================================================================
 *
 *       Filename:  chap4e5.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/27/2021 08:21:16 PM
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
  string num1,num2;
  char c =' ';
  vector<string> alpha_digit = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  vector<string> digit = {"0","1","2","3","4","5","6","7","8","9"};
  int n1,n2;

  cout<<"please enter a two digit airthmatic expression.."<<endl;
  cin>>num1>>c>>num2;

  for(int i=0;i<alpha_digit.size();++i){
    if(num1==alpha_digit[i]){
      n1=i;
    }
    else if(num2==alpha_digit[i]){
      n2=i;
    }
  }
 for(int i=0;i<digit.size();++i){
    if(num1==digit[i]){
      n1=i;
    }
    else if(num2==digit[i]){
      n2=i;
    }
  }

  switch(c){
   case '+':cout<<n1+n2<<endl;
            break;
   case '-':cout<<n1-n2<<endl;
            break;
   case '*':cout<<n1*n2<<endl;
            break;
   case '/':cout<<n1/n2<<endl;
            break;
  default :simple_error("please enter right operation");
  }
return 0;
}

