#include<iostream>
#include<windows.h>
#include<MMSystem.h>
#include<string>
using namespace std;
int guess;
int Total;
class Question
{
    string Que;
    string Ans1;
    string Ans2;
    string Ans3;
    string Ans4;
    int ca;
    int score;
public:
    void setvalues(string s1,string s2,string s3,string s4,string s5,int x,int y)
    {
        Que=s1;
        Ans1=s2;
        Ans2=s3;
        Ans3=s4;
        Ans4=s5;
        ca=x;
        score=y;
    }
    void askque()
    {
        cout<<endl;
        cout<<Que<<endl;
        cout<<"1. "<<Ans1<<endl;
        cout<<"2. "<<Ans2<<endl;
        cout<<"3. "<<Ans3<<endl;
        cout<<"4. "<<Ans4<<endl;
        cout<<endl;
        cout<<"What is your answer ? "<<endl;
        PlaySound(TEXT("sel.wav"),NULL,SND_SYNC);
        cin>>guess;
        if(guess==ca)
           {
                cout<<endl;
                cout<<"Great ! You are correct"<<endl;
                PlaySound(TEXT("point.wav"),NULL,SND_SYNC);
                Total+=score;
                cout<<"Score "<<score<<"out of "<<score<<"!"<<endl;
                cout<<endl;
           }
           else
           {
               cout<<"Oh No ! You are wrong "<<endl;
               PlaySound(TEXT("next.wav"),NULL,SND_SYNC);
               cout<<"Score 0 out of "<<score<<"!"<<endl;
               cout<<"The correct answer is "<<ca<<"."<<endl;
               cout<<endl;
           }

    }
}q[10];
main()
{
    int x;
    cout<<"*************************************************************************"<<endl;
    cout<<"*                                                                       *"<<endl;
    cout<<"*        Write title   and option for quiz                              *"<<endl;
    cout<<"*                                                                       *"<<endl;
    cout<<"*                                                                       *"<<endl;
    cout<<"*                                                                       *"<<endl;
    cout<<"*                                                                       *"<<endl;
    cout<<"*                                                                       *"<<endl;
    cout<<"*************************************************************************"<<endl;
    cout<<endl<<"Enter Your Option : ";
    cin>>x;
    cout<<"Please Enter to start the Quiz...."<<endl;
    cin.get();
    string name;
    int age;
    cout<<"Enter your Name : ";
    cin>>name;
    cout<<endl<<"Enter Your age : ";
    cin>>age;
    string respond;
    cout<<"Are you ready to take the quiz "<<name<<" ? yes/no"<<endl;
    cin>>respond;
    if(respond == "yes")
    {
        cout<<endl<<"Ok, Good luck "<<endl;
    }
    else
    {
        cout<<endl<<"Ok, Good Bye "<<endl;
    }
    switch(x)
    {
        case 1:
    }



}
