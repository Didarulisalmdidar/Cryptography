#include<bits/stdc++.h>
using namespace std;
int main()
{
    string plain;
    cin>>plain;
    int depth;
    cin>>depth;
    int l=plain.size();
    int rem=l%(2*(depth-1));
    int add=(2*(depth-1))-rem;
    for(int i=1;i<=add;i++)
    plain+='*';
    cout<<plain<<endl;
    l=plain.size();

    char table[depth][l];
    for(int i=1; i<=depth; i++)
    {
        for(int j=1; j<=l; j++)
            table[i][j]='.';
    }
    int r=1;
    bool flag;
    for(int i=1; i<=l; i++)
    {
        table[r][i]=plain[i-1];
        if(r==depth)
            flag=false;
        if(r==1)
            flag=true;
        if(flag)
            r++;
        else
            r--;
    }
    for(int i=1; i<=depth; i++)
    {
        for(int j=1; j<=l; j++){
            cout<<table[i][j];
        }
        cout<<endl;
    }
    string cipher;
    for(int i=1; i<=depth; i++)
    {
        for(int j=1; j<=l; j++)
        {
            if(table[i][j]=='.')
                continue;
            cipher+=table[i][j];
        }

    }
    cout<<cipher<<endl;
}
