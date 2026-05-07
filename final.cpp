#include<iostream>
using namespace std;

int main()
{
    string input;
    cout<<"Enter string: ";
    cin>>input;

    int state=0;

    for(char ch:input)
    {
        switch(state)
        {
            case 0:
                if(ch=='a')
                {
                    state=1;
                }
                else if(ch=='b')
                {
                    state=2;
                }
                else
                {
                    cout<<"Invalid Input"<<endl;
                    return 0;
                }
                break;

            case 1:
                if(ch=='a')
                {
                    state=3;
                }
                else if(ch=='b')
                {
                    state=7;
                }
                else
                {
                    cout<<"Invalid Input"<<endl;
                    return 0;
                }
                break;

            case 2:
                if(ch=='a')
                {
                    state=3;
                }
                else if(ch=='b')
                {
                    state=5;
                }
                else
                {
                    cout<<"Invalid Input"<<endl;
                    return 0;
                }
                break;

            case 3:
                if(ch=='a')
                {
                    state=3;
                }
                else if(ch=='b')
                {
                    state=5;
                }
                else
                {
                    cout<<"Invalid Input"<<endl;
                    return 0;
                }
                break;

            case 4:
                if(ch=='a')
                {
                    state=4;
                }
                else if(ch=='b')
                {
                    state=4;
                }
                else
                {
                    cout<<"Invalid Input"<<endl;
                    return 0;
                }
                break;

            case 5:
                if(ch=='a')
                {
                    state=4;
                }
                else if(ch=='b')
                {
                    state=5;
                }
                else
                {
                    cout<<"Invalid Input"<<endl;
                    return 0;
                }
                break;

            case 6:
                if(ch=='a')
                {
                    state=4;
                }
                else if(ch=='b')
                {
                    state=6;
                }
                else
                {
                    cout<<"Invalid Input"<<endl;
                    return 0;
                }
                break;

            case 7:
                if(ch=='a')
                {
                    state=4;
                }
                else if(ch=='b')
                {
                    state=7;
                }
                else
                {
                    cout<<"Invalid Input"<<endl;
                    return 0;
                }
                break;

            case 8:
                if(ch=='a')
                {
                    state=4;
                }
                else if(ch=='b')
                {
                    state=5;
                }
                else
                {
                    cout<<"Invalid Input"<<endl;
                    return 0;
                }
                break;
        }
    }

    if(state==0||state==1||state==2||state==3||state==4||state==5||state==6||state==7||state==8)
    {
        cout<<"Accepted"<<endl;
    }
    else
    {
        cout<<"Rejected"<<endl;
    }

    return 0;
}
