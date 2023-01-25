#include<iostream>
using namespace std;
int main()
{
  try
  {
    throw 'a';
  }
  catch (const char a)
  {
  cout<<a;
  }
}
