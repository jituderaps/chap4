/*
 * =====================================================================================
 *
 *       Filename:  c4e6.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/26/2021 12:17:53 PM
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
  int a;
  int l=0;
  int s=0;
  char c = ' ';


  while(c!='|' && cin>>a){

    if(a=='|')break;

    else if(a>l){
      cout<<"the largest so far : "<<a<<endl;
      l=a;
    }
    else if(a<s){
      cout<<"the smallest so far : "<<a<<endl;
      s=a;
    }
   // cout<<"to exit from the loop enter '|'....... ";
   // cin>>c;

  }
  return 0;
}

