 #pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep2(i,a,b) for(int i=(a);i<(b);++i)

template<class T> inline void chmin(T& a, T b) {if (a > b) a = b;}
template<class T> inline void chmax(T& a, T b) {if (a < b) a = b;}

//vector出力
template <class T>ostream &operator<<(ostream &o,const vector<T>&v){
  o<<"{";
  for(int i=0;i<(int)v.size();i++) o << (i>0?", ":"") << v[i];
  o<<"}";
  return o;
}



int main() {
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  vector<int> dp(n+10,1000);
  dp[0]=0;
  rep(i,n){
    if (i==a||i==b||i==c)continue;
    dp[i+1]=min(dp[i+1],dp[i]+1);
    dp[i+2]=min(dp[i+2],dp[i]+1);
    dp[i+3]=min(dp[i+3],dp[i]+1);
  }
  if (n!=a && n!=b && n!=c && dp[n]<101){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}
