#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) x.begin(),x.end()
#define vl vector<ll>
#define fr(v) for(ll i=0;i<v.size();i++)

void solve()
{
    ll i,j,a,b=1,c=0,d,e,f,g,h,k,l,m=0,n,o=0,sum=0,count=0,cnt=0,ans=0;
    cin>>a>>c;
    vector<int>vect;
    vector<int>ve;
    for(int i=0;i<a;i++){
        cin>>b;

        vect.push_back(b);
    }
    d=c%a;
    for(int i=0;i<a;i++){
        ve.push_back(vect[(d+i)%a]);
    }
    for(auto &it:ve)
    cout<<it<<" ";
}

int main()
{
    
    ll t,y=1;
        
    {     
        solve();
       
    } 
      
    return 0;
}

  
