#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<max(max(a,b)*2-1,a+b);

    return 0;
}
