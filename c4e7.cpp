/*
 * =====================================================================================
 *
 *       Filename:  c4e7.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/27/2021 09:04:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include"std_lib_facilities.h"

int main()
{
  double length = 0;
  string type = " ";
  double  smallest=99999999999;
  double largest = 0;
  double sum = 0;
  double conversion = 0;
  vector<double> v_list;
  while(length != '|' && type != "|" && cin>>length>>type){
    if(type=="cm"){
      conversion = length/100;
      cout<<length<<type<<" is equal to "<<conversion<<" m"<<endl;
      sum+=conversion;
      v_list.push_back(conversion);

      if(conversion>largest){
        largest = conversion;
      }
      if(conversion<smallest){
        smallest = conversion;
      }
    }
    else if(type=="in"){
    conversion = length*2.54/100;
    cout<<length<<type<<" is equal to "<<conversion<<" m"<<endl;
    sum+=conversion;
    v_list.push_back(conversion);

    if(conversion>largest){
        largest = conversion;
      }
      if(conversion<smallest){
        smallest = conversion;
      }

    }
    else if(type=="ft"){
      conversion = length*2.52*12/100;
      cout<<length<<type<<" is equal to "<<conversion<<" m"<<endl;
      sum+=conversion;
      v_list.push_back(conversion);

      if(conversion>largest){
        largest = conversion;
      }
      if(conversion<smallest){
        smallest = conversion;
      }

    }
    else{
      cout<<"please enter a valid unit..\n";

    }
  }

  sort(v_list);
  for(double x: v_list){
    cout<<x<<endl;

  }
  cout<<"the number of values is entred is : "<<v_list.size()<<endl;
  cout<<"the sum of all values in meter is "<<sum<<endl;
  cout<<"the largest value is "<<largest<<endl;
  cout<<"the smalles value is "<<smallest<<endl;




return 0;
}
