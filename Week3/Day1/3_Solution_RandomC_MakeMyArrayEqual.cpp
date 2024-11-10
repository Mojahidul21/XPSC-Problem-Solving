#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        stack<int>stk;
        string ans="YES";
        for(int i=1;i<=n;i++){
            int v;
            cin>>v;
            if(v!=0&&stk.empty())stk.push(v);
            else if(v!=0&&!stk.empty()&&stk.top()!=v)ans="NO";
        }
        cout<<ans<<endl;
    }
    return 0;
}
