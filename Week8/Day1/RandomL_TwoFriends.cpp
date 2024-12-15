#include<iostream>
using namespace std;

int main(){
    int t,n;cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;int ans=3,p[n];
        for(int j=0;j<n;j++)cin>>p[j];
        for(int l=0;l<n-1;l++){
            for(int m=1;m<n;m++){
                if(l+1==p[m]&&p[l]==m+1){cout<<2<<endl;ans=0;break;}
            }
            if(ans==0)break;
        }
        if(ans==3)cout<<3<<endl;
    }

    return 0;
}
