#include<iostream>
#include<fstream>
using namespace std;

main()
{
    char ch;
  ifstream f1;
  f1.open("Meet.txt");
  while(!f1.eof())
  {
      ch=f1.get();
      cout<<ch;
  }
  f1.close();
}
