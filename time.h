#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include<time.h>
#endif // TIME_H_INCLUDED
#include<iostream>
#include<windows.h>
using namespace std;
void set_time()
{
  for(int i=30;i>=0;i--)
  {
      Sleep(1000);
     // gotoxy(25,25);
      if (i<10)
      {
         cout <<"0"<<i;
         if(i==0)
            break;

      }
      else
      {
        cout << i;
      }
  }
}
