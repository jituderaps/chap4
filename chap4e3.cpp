/*
 * =====================================================================================
 *
 *       Filename:  chap4e3.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/27/2021 05:40:05 PM
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
vector<double> distance;
double largest =0;
double smallest;


  for(double dist;cin>>dist;){
    distance.push_back(dist);
  }

  cout<<distance.size()<<endl;

  double sum;
  for(int x:distance){
    sum+=x;
    if(x>largest){
      largest = x;
    }
    else if(x<largest){
      smallest = x;
    }
  }
  cout<<"the sum of total distance is "<<sum<<endl;
  cout<<"the smallest difference between cities is "<<smallest<<endl;
  cout<<"the largest difference between cities is "<<largest<<endl;
  cout<<"the average of all distance is: "<<sum/distance.size()<<endl;
return 0;
}

