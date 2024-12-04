#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y;float scr;cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        if(!y)scr=ceil(1.0*x/15);
        else if(!(y%2)){
            scr=y/2;
            if(x>scr*7)x-=scr*7,scr+=ceil(1.0*x/15);
        }
        else{
            scr=y/2+1;
            if(x>(((scr-1)*7)+11))x-=(scr-1)*7+11,scr+=ceil(1.0*x/15);
        }
        cout<<scr;if(i!=t-1)cout<<endl;
    }
    return 0;
}
