#include<bits/stdc++.h>
using namespace std;

int main() {
   int n,m;
   cin>>n>>m;
   vector<int>a(n+1);
   for(int i=1;i<=n;i++)cin>>a[i];
   vector<int>cnt(n+1);
   set<int>s;
   for(int i=n;i>=1;i--){
      s.insert(a[i]);
      cnt[i]=s.size();
   }
   for(int i=1;i<=m;i++){
      int l;
      cin>>l;
      cout<<cnt[l]<<endl;
   }
   return 0;
}
