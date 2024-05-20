#include<bits/stdc++.h>
using namespace std;
int main()
{
    string plain;
    int key;
    cin>>plain>>key;
    string cipher;
    for(int i=0;i<plain.size();i++)
    {
        if(plain[i]>='A' && plain[i]<='Z')
        {
            cipher+=(plain[i]-65+key)%26+65;
        }
        else if(plain[i]>='a' && plain[i]<='z')
        {
            cipher+=(plain[i]-97+key)%26+97;
        }
    }
    cout<<cipher<<endl;
}
