/*
 * =====================================================================================
 *
 *       Filename:  chap4E.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/23/2021 09:36:40 PM
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
  vector<string> words;

  for(string word;cin>>word;){
    if(word=="quit")
    {
      break;
    }
    words.push_back(word);
}
cout<<'\n';

string disliked = "broccoli";

for(int i=0;i<words.size();++i){
  if(words[i]==disliked){
    words[i]= "BLEEPPPP";

  }
}

  sort(words);

  for(string sorted : words){
    cout<<sorted<<endl;
  }
    cout<<'\n';


for(int i=0;i < words.size();++i){
if(i==0 || words[i-1] != words[i]){
  cout<<words[i]<<endl;
 }
}
cout<<'\n';

return 0;
}

