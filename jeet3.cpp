//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&&&          &&          &&          &&              &&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&&&&&&&  &&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&&&&&&&  &&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&&&&&&&  &&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&     SUM  RAN     &&  /&&&&&&&&&  &&&&&&      &&&&&&      &&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&  &&&&&  &&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&  &&&&&  &&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&  &&&  &&&&&&&  &&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&&&&&&
//&&&&&&&&&&  &&&&&&&&&&  /&&&&&    &&&&&&&&          &&          &&&&&&&&  &&&&&&&&&
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define F(i,a,b) for(long long int i = (a); i < (b) ; ++i)
#define f1(n) for(long long int i = 0 ; i < (n) ; ++i)
#define f2(n) for(long long int j = 0 ; j < (n) ; ++j)
#define vat(array) vector<ll> array

int main()
{
      ios_base::sync_with_stdio(false), cin.tie(NULL);
      ll arr[1006];
      ll z=0;
      f1(1668)
      {
           if(((i+1)%3==0) || ((i+1)%10==3))
           {
                
           }
           else
           {
                arr[z]=i+1;
                z++;
           }
      }
      ll t;
      cin>>t;
      while(t--)
      {
           ll n;
           cin>>n;
           cout<<arr[n-1]<<'\n';
      }
    return 0;
}
