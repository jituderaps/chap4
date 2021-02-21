/*
 * =====================================================================================
 *
 *       Filename:  chap4e13.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/28/2021 05:57:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include "std_lib_facilities.h"


void seive_prime(int n){
  int prime[n+1]={0};

  for(int i=2;i<=n;++i){
  if(prime[i]==0){
    for(int j = i*i;j<=n;j+=i){
      prime[j]=1;
    }
  }
  }

vector<int> s_prime;
for(int i=2;i<=n;++i){
    if(prime[i]==0)
 //     cout<<i<<" ";
    s_prime.push_back(i);
  }
cout<<'\n';

  int y;
  cout<<"how much 1st prime number you want to print.."<<endl;
  cin>>y;

  for(int i =0;i<y;++i){
    cout<<s_prime[i]<<" ";
  }

}
int main()
{
 int i= 10000;
seive_prime(i);

return 0;
}
