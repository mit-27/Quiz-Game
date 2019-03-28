#include<iostream>
#include<windows.h>
#include<MMSystem.h>
#include<string>
using namespace std;
int guess;
int Total;
class Question
{
    protected:
        string Que,Ans1,Ans2,Ans3,Ans4;
        int anss,ans,score;
        static int c;
    public:
        void set_q(string s1,string s2,string s3,string s4,string s5,int  a)
        {
            Que=s1;
            Ans1=s2;
            Ans2=s3;
            Ans3=s4;
            Ans4=s5;
            anss=a;
        }
        void ask_q()
        {
            cout<<endl;
            cout<<Que<<endl;
            cout<<"1. "<<Ans1<<endl;
            cout<<"2. "<<Ans2<<endl;
            cout<<"3. "<<Ans3<<endl;
            cout<<"4. "<<Ans4<<endl;
            cout<<endl;
            cout<<"What is your answer ? "<<endl;
            //PlaySound(TEXT("sel.wav"),NULL,SND_SYNC);
            cin>>ans;
            if(ans==anss)
            {
                cout<<endl;
                cout<<"Great ! You are correct"<<endl;
              // PlaySound(TEXT("point.wav"),NULL,SND_SYNC);
                Total+=score;
                c++;
                cout<<"Score "<<score<<"out of "<<score<<"!"<<endl;
                cout<<endl;
           }
           else
           {
               cout << "Oh No ! You are wrong " << endl;
          //     PlaySound(TEXT("next.wav"),NULL,SND_SYNC);
               cout << "Score 0 out of " << score << "!" << endl;
               cout << "The correct answer is " << anss << "." << endl;
               cout << endl;
           }
        }
    };
int Question:: c=0;
class cpp : public Question
{

};
class c : public Question
{


};
class python :public Question
{

};
class java :public Question
{

};
int main()
{
    int x;
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
        cout << "\n\t\t 1.OBJECT ORIANTED PROGRAMMING C++" << endl;
        cout << "\t\t2.C" << endl;
        cout << "\t\t3.JAVA" << endl;
        cout << "\t\t4.PYTHON " << endl;
        cout<<endl<<"\n\t\t Enter Your Option : ";
        cin>>x;
        switch(x)
        {
            int choice;
                case 1:
                {
                    cpp n;
                    cout << "1.CLASS AND OBJECT " << endl << "2. REFERANCE" << endl << "3. CONSTRUCTOR  " << endl << "4. OPERATOR OVERLOADING " << endl << "5. THIS POINTER " << endl << "6.STATIC KEYWORD" << endl << "7.INHERITACE " << endl << "8.VIRTUAL FUNCTION " << endl << "9. NEW AND DELET " << endl << "10. TEMPLETES" << endl ;
                    cin >> choice;
                    switch(choice)
                    {
                        case 1:
                            {
                                setvalues(" a member function can always access the data member in _______,(in c++)." , "the class of which it is member " ,"the object of which is member " ,"the public part of its class .","the private part of its class ",1);
                                askque();
                                setvalues("Which of the following keywords is used to control access to a class member?","Default ","break ","protected","asm",3);
                                askque();
                                setvalues("Which of the following access specifies is used in a class definition by default?","protected","private ","public ","eriend ",4);
                                askque();
                                setvalues("What is the difference between struct and class in C++?","All members of a structure are public and structures don't have constructors and destructors","Members of a class are private by default and members of struct are public by default. When deriving a struct from a class/struct, default access-specifier for a base class/struct is public and when deriving a class, default access specifier is private.","All members of a structure are public and structures don't have virtual functions ","All of the above",2);
                                askque();
                                setvalues("Which of the following two entities (reading from Left to Right) can be connected by the dot operator?","A class member and a class object.","A class object and a class.","A class and a member of that class.","A class object and a member of that class.",4);
                                askque();
                                break;
                            }
                        case 2:
                            {
                                 setvalues("Which value we cannot assign to reference?","integer","float","unsign ","null",4);
                                askque();
                                setvalues("Identify the incorrect statement","Reference is the alternate name of the object","A reference value once defined can be reassigned"," A reference value once defined cannot be reassigned"," None of the mentioned",2);
                                askque();
                                 setvalues(" None of the mentioned","Alternate name for the class","Alternate name for the variable","Alternate name for the pointer ","None of the mentioned",4);
                                askque();
                                setvalues(" Identify the correct sentence regarding inequality between reference and pointer."," we can not create the array of reference","we can create the Array of reference"," we can use reference to reference","none of the mentioned",1);
                                askque();
                                setvalues("","","","","",);
                                askque();
                                break;
                            }
                        case 3:
                            {
                                 setvalues("Constructor is executed when ?","an object is created","an object is used","a class is declared ","an object goes out of scope.",1);
                                askque();
                                setvalues("Which of the following statement is correct regarding destructor of base class?","Destructor of base class should always be static.","	Destructor of base class should always be virtual","Destructor of base class should not be virtual.","	Destructor of base class should always be private",2);
                                askque();
                                 setvalues("Which of the following statements is correct about the constructors and destructors? ","	Destructors can take arguments but constructors cannot.","Constructors can take arguments but destructors cannot."," Destructors can be overloaded but constructors cannot be overloaded.","Constructors and destructors can both return a value",2);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;
                            }
                        case 4:
                            {
                                 setvalues("Which of the following can be overloaded ?","Object"	,"Functions","perators","Both B and C",4);
                                askque();
                                setvalues(" What is the use of dynamic_cast operator?","it converts virtual base class to derived class"," it converts virtual base object to derived objeccts"," it will convert the operator based on precedence","none of the mentioned",1);
                                askque();
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;


                            }
                        case 5:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;
                            }
                        case 6:
                            {
                                 setvalues("Where does keyword ‘friend’ should be placed?"," function declaration"," function definition","main function "," none of the mentioned",1);
                                askque();
                                setvalues("Pick out the correct statement.","A friend function may be a member of another class"," A friend function may not be a member of another class","A friend function may or may not be a member of another class","None of the mentioned",3);
                                askque();
                                 setvalues("What is the syntax of friend function?"," friend class1 Class2;"," friend class;","friend class "," none of the mentioned",1);
                                askque();
                                setvalues(". Which keyword is used to declare the friend function?","firend","friend","classfriend","myfriend",2);
                                askque();
                                setvalues(" Which rule will not affect the friend function?"," private and protected members of a class cannot be accessed from outside","private and protected member can be accessed anywhere"," protected member can be accessed anywhere","none of the mentioned",1);
                                askque();

                                break;

                            }
                        case 7:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;


                            }
                        case 8:
                            {
                                 setvalues("Which of the following statements about virtual base classes is correct?","It is used to provide multiple inheritance.","It is used to avoid multiple copies of base class in derived class.","It is used to allow multiple copies of base class in a derived class. ","	It allows private members of the base class to be inherited in the derived class.",2);
                                askque();
                                setvalues("How many objects can be created from an abstract class?","0","1","2","infinite",1);
                                askque();
                                 setvalues("How can we make a class abstract?","By making all member functions constant.","	By making at least one member function as pure virtual function.","By declaring it abstract using the static keyword. ","	By declaring it abstract using the virtual keyword.",2);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                        case 9:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                        case 10:
                            {
                                 setvalues("Which is used to describe the function using placeholder types?"," template parameters","template type parameters"," template type ","none of the mentioned",2);
                                askque();
                                setvalues("Pick out the correct statement.","you only need to write one function, and it will work with many different types"," it will take a long time to execute","duplicate code is increased","none of the mentioned",1);
                                askque();
                                 setvalues("What can be passed by non-type template parameters during compile time?","int","float","constant expression ","none of the mentioned",3);
                                askque();
                                setvalues("What is a function template?","creating a function without having to specify the exact type","creating a function with having a exact type","all of the mentioned","none of the mentioned",1);
                                askque();
                                setvalues("From where does the template class derived?","regular non-templated C++ class"," templated class"," regular non-templated C++ class or templated class"," none of the mentioned",3);
                                askque();
                                break;
                            }
                    }
                    break;

                }
            case 2:
                {

                    c n;
                    cin >> choice;
                    switch(choice)
                    {
                        case 1:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                        case 2:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque(); setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                        case 3:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque(); setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                        case 4:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque(); setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                    }

                }
            case 3:
                {
                    java n;
                    cin >> choice;
                    switch(choice)
                    {
                        case 1:
                        {
                             setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque(); setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                        }
                        case 2:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque(); setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                        case 3:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque(); setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                        case 4:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque(); setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                    }
                }
            case 4:
                {
                    python n;
                    cout << "13." << endl;
                    cin >> choice;
                    switch(choice)
                    {
                        case 1:
                        {
                             setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                        }
                        case 2:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque(); setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                        case 3:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque(); setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                        case 4:
                            {
                                 setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque(); setvalues("","",""," ","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                setvalues("","","","","",4);
                                askque();
                                break;

                            }
                    }

                }
            default:
                {
                    cout << endl << "pleas enter re choice : ";
                    cin >> x;
                    switch(x);

                }
        }
    }
    else
    {
        cout<<endl<<"Ok, Good Bye "<<endl;
    }
}

