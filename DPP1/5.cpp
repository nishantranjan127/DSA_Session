#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) x.begin(),x.end()
#define vl vector<ll>
#define fr(v) for(ll i=0;i<v.size();i++)
void solve()
{
 ll i,j,a,b=1,c=0,d,e,f,g,h,k,l,n,o=0,sum=0,count=1,cnt=0,ans=0;
 cin>>a;
 ll arr[a];
 
 for(i=0;i<a;i++){
 cin>>arr[i];
 
 }
 //sum=arr[0];
 int xr=arr[0];
 for(i=1;i<a;i++){
   xr^=arr[i];
 }

 cout<<xr;
 
 
 
 
 }
 
 
int main()
{
 
 ll t,y=1;
//  cin>>t;
//  while(t--) 
 { 
 solve();
 
 } 
 
 return 0;
}
