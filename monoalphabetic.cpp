#include<bits/stdc++.h>
using namespace std;
int main()
{
    string plain,key1,key2;
    cin>>plain>>key1>>key2;// key have 26 character
    map<int,char>up,lo;
    int k=0;
    string cipher;
    for(int i=0;i<plain.size();i++)
    {
        if(isupper(plain[i]))
        {
            int p=plain[i]-'A';
            cipher+=key1[p];
        }
        else
        {
            int p=plain[i]-'a';
            cipher+=key2[p];
        }
    }
    cout<<cipher<<endl;

}
