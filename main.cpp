/*#include <iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ofstream MyWriteFile("myfile.txt");

    MyWriteFile<<"Files";

    MyWriteFile.close();

    string myText;

    ifstream MyReadFile("myfile.txt");

    while(getline(MyReadFile,myText))
    {
        cout<<myText;
    }
    MyReadFile.close();
}

*/

#include<iostream>
#include<fstream>
using namespace std;

bool keyword(string s)
{
    string k[]={"int","float","double","char","cout","cin","return"};

    for(int i=0;i<7;i++)
    {
        if(s==k[i])
        return true;
    }

    return false;
}

bool op(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='='||ch=='<'||ch=='>')
    return true;

    return false;
}

bool punc(char ch)
{
    if(ch==';'||ch==','||ch=='('||ch==')'||ch=='{'||ch=='}')
    return true;

    return false;
}

string check(string s)
{
    if(keyword(s))
    return "Keyword";

    bool num=true;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]<'0'||s[i]>'9')
        {
            num=false;
            break;
        }
    }

    if(num)
    return "Number";

    if(s[0]=='"'&&s[s.length()-1]=='"')
    return "String Literal";

    if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_')
    return "Identifier";

    return "Unknown";
}

int main()
{
    ofstream f("myfile.txt");

    f<<"int x;"<<endl;
    f<<"x=10;"<<endl;
    f<<"cout<< \"Hello\";";

    f.close();

    ifstream r("myfile.txt");
    string line;
    int n=1;

    cout<<"Tokens and their types:\n\n";

    while(getline(r,line))
    {
        cout<<"Line "<<n<<": "<<line<<endl;

        string t="";

        for(int i=0;i<line.length();i++)
        {
            char ch=line[i];

            if(ch!=' '&&!op(ch)&&!punc(ch))
            {
                t=t+ch;
            }
            else
            {
                if(t!="")
                {
                    cout<<t<<" -> "<<check(t)<<endl;
                    t="";
                }

                if(op(ch))
                {
                    cout<<ch<<" -> Operator"<<endl;
                }
                else if(punc(ch))
                {
                    cout<<ch<<" -> Punctuation"<<endl;
                }
            }
        }

        if(t!="")
        {
            cout<<t<<" -> "<<check(t)<<endl;
        }

        cout<<endl;
        n++;
    }

    r.close();
}
