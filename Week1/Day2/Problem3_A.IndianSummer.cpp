#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    cin.ignore();
    set<string>s;
    while(n--){
        string st;
        getline(cin,st);
        s.insert(st);
    }
    int ans=0;
    for(auto it=s.begin();it!=s.end();it++)ans++;
    cout<<ans;

    return 0;
}
