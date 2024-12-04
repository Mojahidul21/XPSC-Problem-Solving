#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    for(int i=0;i<t;++i){
        cin>>n;vector<int>a(n);long long sum=0,cnt=0;int mx=INT_MIN;
        for(int j=0;j<n;++j){
            cin>>a[j];
            sum+=a[j],mx=max(mx,a[j]);
            if(sum==mx*2)++cnt;
        }
        cout<<cnt;if(t-i-1>0)cout<<'\n';
    }
    return 0;
}
