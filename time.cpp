#include<iostream>
#include<windows.h>
#include"gotoxy.h"
using namespace std;
void set_time()
{
  for(int i=30;i>=0;i--)
  {
      Sleep(1000);
      gotoxy(25,25);
      if (i<10)
      {
         cout <<  "0"<<i;
      }
      else
      {
        cout << i;
      }
  }
}

int main()
{
    set_time();
}
