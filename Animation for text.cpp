#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
void text_animation(char a[])
{
    int i;
    double k;
    for(i=0;a[i]!='\0';++i)
    {
        Sleep(100);

        cout<<a[i];
    }
}
main()
{
    text_animation("              Hi  i m meet ");

}

