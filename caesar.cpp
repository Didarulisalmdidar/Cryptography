#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int shift;
    cin>>s>>shift;
    map<int,char>up,lo;
    int k=0;
    for(char ch='a';ch<='z';ch++){
        lo[k]=ch;
        k++;
    }
    k=0;
    for(char ch='A';ch<='Z';ch++){
        up[k]=ch;
        k++;
    }

    string cipher;
    for(int i=0; i<s.size(); i++)
    {
        if(islower(s[i]))
        {
           int p=s[i]-'a';
           p+=shift;
           p%=26;
           cipher+=lo[p];
           cout<<s[i]<<"-->"<<lo[p]<<endl;

        }
        else
        {
            int p=s[i]-'A';
            p+=shift;
            p%=26;
            cipher+=up[p];
            cout<<s[i]<<"-->"<<up[p]<<endl;
        }

    }
    cout<<cipher<<endl;
}
