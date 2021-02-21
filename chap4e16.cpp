/*
 * =====================================================================================
 *
 *       Filename:  chap4e16.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/29/2021 11:54:25 AM
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
  vector<double> series;
  vector<double> modes;
  double largest = 0;
  double  smallest=99999;
  double n;

  while(cin>>n){
    series.push_back(n);

  }

  sort(series);
  for(int i=0;i<series.size();++i){
    cout<<series[i]<<" ";

    if(series[i]>largest){
      largest=series[i];
    }
    if(series[i]<smallest){
      smallest = series[i];
    }
//    if(i==0 || series[i-1]==series[i]){
//     modes.push_back(series[i]);
//   }
  }
  cout<<'\n';
  cout<<"the largest number is : "<<largest<<endl;
  cout<<"the smallest number is : "<<smallest<<endl;


  int count = 0;
    int max_count=0;
    int max_value = 0;
  for(int i=0;i<series.size();++i){
int count = 0;
     for(int j=0;j<series.size();++j){
       if(series[j] == series[i]){
         ++count;
       }
       if(count > max_count){
         max_count = count;
         max_value = series[i];
         cout<<"count "<<count<<endl;
       }
     }
  }

  cout<<"mode: "<<max_value<<endl;
  return 0;
}

