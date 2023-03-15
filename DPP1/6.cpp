#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) x.begin(),x.end()
#define vl vector<ll>
#define fr(v) for(ll i=0;i<v.size();i++)
void solve()
{
 ll i,j,a,b=1,c=0,d,e,f,g,h,k,l,n,o=0,sum=0,count=1,cnt=0,ans=0;
 vector<ll>vect;
 vector<ll>vec;
 
 cin>>a;
 ll arr[a];
 
 for(i=0;i<a;i++){
 cin>>arr[i];
 
 }

        map<int,int>mp;
        for(int i=0;i<a;i++){
            mp[arr[i]]++;
            
        }
        for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if(itr->second%2!=0){
            vect.push_back(itr->first);
        }
    }
    reverse(vect.begin(),vect.end());
    for (auto &it :vect) {
        cout<<it;
        
    }
}
int main()
{
 
 ll t,y=1;
 cin>>t;
 while(t--) 
 { 
 solve();
 
 } 
 
 return 0;
}
