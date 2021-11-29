#include "std_lib_facilities.h"
class Name_value
{
public:
string name;
int value;
};
vector<Name_value> n;
// function to check if a name of student appears twice 
int twice()
{
  int c=0;
  for(int i=0;i<n.size();i++)
  {
    for(int j=i+1;j<(n.size()-i-1);j++)
    {
      if(n[i].name==n[j].name)
      {
        //c++;
        //break;
        cout<<"ERROR!!! 2 names cannot be same."<<endl;
        return 1;
      }
    }
    if(c!=0)
    {
      cout<<"ERROR!!! 2 names cannot be same."<<endl; return 1;
    }     
  }
  //cout<<"No duplicate students."<<endl;
  return 0;
}
// function to display all entries in vector n
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
n.push_back(nv);
if(twice())
  {
  display();
  return 0;
  }
if(nv.name == "NoName" && nv.value == 0)
  {
    display();
    return 0;
  }

return 1;
}
// function to add NoName0 at the last

// start of main function
int main()
{
  while(add());
  
  return 0;
}