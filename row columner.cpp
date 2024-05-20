#include<bits/stdc++.h>
using namespace std;
int main()
{
    string plain,key;
    getline(cin,plain);
    cin>>key;
    int col=key.size();
    int l=plain.size();
    int row=l/col;
    if(l%col)
        row++;
    char table[row+1][col+1];
    int k=0;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            table[i][j]='.';
            if(k<plain.size()){
            table[i][j]=plain[k];
            k++;
            }

        }
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
            cout<<table[i][j];
        cout<<endl;
    }
    map<char,int>mp;
    for(int i=0;i<key.size();i++)
    {
        mp[key[i]]=i+1;
    }
    sort(key.begin(),key.end());
    vector<int>v;
    for(int i=0;i<key.size();i++)
    {
        v.push_back(mp[key[i]]);
    }
    string cipher;
    for(auto it:v)
    {
        for(int i=1;i<=row;i++)
        {
            if(table[i][it]=='.')
                continue;
            cipher+=table[i][it];
        }
    }
    cout<<cipher<<endl;


}
