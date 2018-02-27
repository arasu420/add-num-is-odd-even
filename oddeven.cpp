#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n,m,total;
  cout << "Enter the number";
  cin>>n;
  cout << "Enter the number";
  cin>>m;
  total=n+m;
  if(total%2==0)
  {cout<<"even";}
  else
  {cout<<"odd";}
  return 0;
}
