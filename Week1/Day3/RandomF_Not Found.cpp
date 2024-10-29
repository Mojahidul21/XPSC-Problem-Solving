#include<bits/stdc++.h>
#define ios ios::sync_with_stdio(false);cin.tie(nullptr);

using namespace std;

int main(){
    ios

    string s;
    cin>>s;
    set<char>st;
    for(auto c:s)st.insert(c);
    char ch='a';
    for(auto c:st){
        if(ch!=c)break;
        ch++;
    }
    if(ch>'z')cout<<"None";
    else cout<<ch;

    return 0;
}
