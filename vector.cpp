/*
 * =====================================================================================
 *
 *       Filename:  vector.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/22/2021 12:40:05 PM
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
  vector<double> temps;

  for(double temp; cin>>temp;)
       temps.push_back(temp);


double sum;
for(double x : temps){
  sum+=x;
}
cout<<temps.size()<<endl;
cout<<"the avg of temp is : "<<sum/temps.size()<<endl;

sort(temps);
cout<<"the median of temp is :" <<(temps[temps.size()/2] + temps[(temps.size()/2)-1])/2<<endl;
return 0;
}

