/*
 * =====================================================================================
 *
 *       Filename:  chap4e19.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/01/2021 10:59:37 AM
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
  vector<string> names;
  vector<int> scores;

  string name;
  int score;
  string n;
  int s;
  while(cin>>name>>score &&  name != "noname"){
    for(int i=0;i< names.size();++i){
      if(name==names[i] && score==scores[i]) simple_error("you enterd a name twice...!!");
    }
    names.push_back(name);
    scores.push_back(score);
  }

  cout<<'\n';

  for(int z=0;z<names.size();++z)
    cout<<names[z]<<" "<<scores[z]<<endl;

  cout<<"please enter a name to find out his/her score..";
  cin>>n;

  for(int i=0;i<names.size();++i){
    if(n==names[i])  cout<<"the score of "<<n<<" is "<<scores[i]<<endl;

     else cout<<"please enter a correct name"<<endl;
  }
  cout<<"please enter a score to find out his/her name..";
  cin>>s;

  for(int i=0;i<scores.size();++i){
    if(s==scores[i]){
      cout<<"the name of the player who score "<<s<<" is "<<names[i]<<endl;
    }
  //  else cout<<"please enter a correct score"<<endl;

  }
return 0;

}

