/*
 * =====================================================================================
 *
 *       Filename:  c4e.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/26/2021 08:59:11 AM
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
double n1,n2,l1,s1;
char c;
  cout<<"please enter two numbers....\n";


  while(c!='|' && cin>>n1>>n2)
 {
   cout<<n1<<"\n"<<n2<<endl;

    if(n1>n2){
     cout<<"the larger number is : "<<n1<<endl;
     cout<<"the smaller number is : "<<n2<<endl;

     l1=n1;
     s1=n2;
   }
   else if(n1==n2) {
     cout<<n1<<" and"<<n2<<" both are equal"<<endl;
   }
   else{
     cout<<"the larger number is : "<<n2<<endl;
     cout<<"the smaller number is : "<<n1<<endl;
     l1=n2;
     s1=n1;
   }

   cout<<"to exit from the loop enter '|'....";
   cin>>c;


 }
   if(l1-s1 < 00.1){
     cout<<"difference: "<<l1-s1<<endl;
     cout<<"the "<<n1<<" and "<<n2<<" both are almost equal"<<endl;
   }

 return 0;
}

