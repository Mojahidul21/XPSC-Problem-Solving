#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int b=-1,e;
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(s[i]=='B'){
                if(b==-1)b=e=i;
                else e=i;
            }
        }
        cout<<e-b+1<<'\n';
    }

    return 0;
}
