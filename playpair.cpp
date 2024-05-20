#include<bits/stdc++.h>
using namespace std;
int main()
{
    string key;
    cin>>key;
    int kk=0;
    char table[5][5];
    map<char,int>mp;
    char p='a';
    int a,b,pp=0;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(kk==key.size())
            {
                a=i,b=j-1;
                //cout<<a<<" "<<b<<endl;
                pp=1;
                break;
            }
            else if(kk<key.size())
            {

                table[i][j]=key[kk];
                mp[key[kk]]=1;
                kk++;
            }

        }
        if(pp)
            break;
    }
    cout<<a<<" "<<b<<endl;
    char ch='a';
    for(int i=a;i<=5;i++)
    {
        for(int j=b+1;j<=5;j++)
        {
            while(ch<='z')
            {
                if(ch=='j')
                    ch++;
                else if(mp[ch]==1)
                    ch++;
                else
                {
                    table[i][j]=ch;
                    ch++;
                    break;
                }
            }
            if(j==5)
                b=0;
        }
    }
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
            cout<<table[i][j];
        cout<<endl;
    }
}
