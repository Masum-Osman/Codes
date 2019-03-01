// by fahim abrar
#include<iostream>
#include<cstdio>
#include <sstream>
using namespace std;
int main()
{
    string str="5970772365776b276f6e787481802e4939";
    string sub;
    int p =0;
    for(int i=0;i<str.length();i+=2,p++)
    {
        sub=str.substr(i,2);
        int number;
        stringstream strem;
        strem<<hex<<sub;
        strem>>number;
        number-=p;
        printf("%c",number);
    }

}
