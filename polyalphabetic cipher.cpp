#include<bits/stdc++.h>
using namespace std;
int main()
{
    string plain,key;
    cin>>plain>>key;
    string cipher;
    /// cstenoaakhcs
    /// nstanstansta
    int n=key.size();
    for(int i=0;i<plain.size();i++)
    {
        int mp=i%n;
        cipher+=((plain[i]-'a')+(key[mp]-'a'))%26+97;
    }
    cout<<cipher<<endl;
}
