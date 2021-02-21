/*
 * =====================================================================================
 *
 *       Filename:  chap4e17.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/30/2021 12:36:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include "std_lib_facilities.h"

int main(){


vector<string> list;
string s = " ";
string max = "0";
string min = "kghd fskhgd  sdhgkjsdhgk ghsd gkshghsdkhg shgsdhkg ksldghksdh";
while(cin>>s && s != "|"){
  list.push_back(s);

}

cout<<'\n';
sort(list);

for(int i=0;i<list.size();++i){
  cout<<list[i]<<" ";

  if(list[i]>max){
  max= list[i];
  }

  if(list[i]<min){
    min= list[i];
  }
}
cout<<endl;
cout<<"max word "<<max<<endl;
cout<<"min word "<<min<<endl;



int max_count = 0 ;
string mode_word = " ";
for(int i=0;i<list.size();++i){
  int count = 0;
  for(int j=0;j<list.size();++j){
    if(list[j]==list[i]){
      count++;
    }
  }
  if(count>max_count){
    max_count = count;
    mode_word = list[i];
  }

}

cout<<"mode :"<<mode_word<<endl;


return 0;
}

