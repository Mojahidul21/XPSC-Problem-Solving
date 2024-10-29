#include<bits/stdc++.h>
#define ios ios::sync_with_stdio(false);cin.tie(nullptr);

using namespace std;

int main(){
    ios

    int n;
    cin>>n;
    if(n<=9)cout<<"000";
    else if(n<=99)cout<<"00";
    else if(n<=999)cout<<0;
    cout<<n;

    return 0;
}
