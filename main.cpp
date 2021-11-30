/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Brandon Lopez
 *
 *
 * The code works but it requires an extra input before * it detects the use of a name twice
 *
 *
 */
#include "std_lib_facilities.h"
class Name_value
{
public:
string name;
int value;
};
vector<Name_value> n;
// check if name appears twice 
int twice()
{
  int c=0;
  for(int i=0;i<n.size();i++)
  {
    for(int j=i+1;j<(n.size()-i-1);j++)
    {
      if(n[i].name==n[j].name)
      {
        cout<<"ERROR!!! 2 names cannot be same."<<endl;
        return 1;
      }
    }

  }
  return 0;
}
// displays the inputs
void display()
{
  for(int i=0;i<n.size();i++)
  {
    cout<<"Name: "<<n[i].name<<" Score: " <<n[i].value<<endl;
    
  } 
}
// function to add an object of Name_value into n
int add()
{
  Name_value nv;
  cout<<"Enter the name and score."<<endl;
  cin>>nv.name>>nv.value;
  n.push_back(nv);//add to vector

  if(twice())//if a duplicate is detected it'll display and return 0 to end
    {
    display();
    return 0;
    }
  if(nv.name == "NoName" && nv.value == 0)//if if NoName 0 is input it'll display and return 0 to end
    {
      display();
      return 0;
    }

  return 1;//returns 1 to continue if it doesn't meet the other conditions
}



int main()
{
  while(add());//used to have more code in the main then realized I could shorten it to this
  
  return 0;
}