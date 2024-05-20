#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll getExp(ll a,ll b,ll M)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
         auto temp=getExp(a,b/2,M)%M;
        return (temp*temp)%M;
    }
    else
        return (a*getExp(a,b-1,M)%M)%M;
}
int main()
{
    ll p,q;
    cin>>p>>q;
    ll n=p*q;
    ll phi=(p-1)*(q-1);
    ll e;
    for(ll i=2;i<phi;i++)
    {
        if(__gcd(i,phi)==1)
        {
            e=i;
            break;
        }
    }
    ll d=0;
    //cout<<n<<" "<<phi<<endl;
    while((d*e)%phi!=1)
        d++;
    cout<<"public key "<<e<<" "<<n<<endl;
    cout<<"private key "<<d<<" "<<n<<endl;
    cout<<"Enter message "<<endl;
    ll M;
    cin>>M;
    ll c=getExp(M,e,n);
    cout<<"cipher "<<c<<endl;
    ll m=getExp(c,d,n);
    cout<<"plain "<<m<<endl;

}
