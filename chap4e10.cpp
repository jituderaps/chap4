/*
 * =====================================================================================
 *
 *       Filename:  chap4e10.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/28/2021 11:10:22 AM
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

  srand(time(0));
  int num = rand()%3;
  vector<string> game_ele ={"rock","paper","scissors"};
  char choice;

  string c_choice;
  c_choice = game_ele[num];

  cout<<"please type:\n (r) for rock:\n (p)for paper:\n (s)scissors:"<<endl;
  cin>>choice;

  switch(choice){
   case 'r': if(c_choice=="paper")cout<<"you loose"<<endl;
             else if(c_choice=="scissors")cout<<"you win"<<endl;
             else cout<<"game tie"<<endl;
             break;

   case 'p': if(c_choice=="scissors")cout<<"you loose"<<endl;
             else if(c_choice=="rock")cout<<"you win"<<endl;
             else cout<<"game tie"<<endl;
             break;

   case 's': if(c_choice=="rock")cout<<"you loose"<<endl;
             else if(c_choice=="paper")cout<<"you win"<<endl;
             else cout<<"game tie"<<endl;
             break;

   default : cout<<"please enter a valid choice"<<endl;
  }

return 0;
}

