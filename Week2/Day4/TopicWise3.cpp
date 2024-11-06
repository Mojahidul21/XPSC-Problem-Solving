#include<bits/stdc++.h>

#define snl cout<<'\n'                  // snl - staring new line
#define enl <<'\n';                     // enl - ending new line
#define pss <<" "                       // pss - print single space
#define pyn ?cout<<"YES":cout<<"NO";    // pyn - print yes no
#define lli long long int               // lli - long long int
#define con const int c=1e              // con - constant
#define imx INT_MAX;                    // imx - INT_MAX
#define imn INT_MIN;                    // imn - INT_MIN

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }

        priority_queue<int>pq;
        for(auto it=mp.begin();it!=mp.end();it++)pq.push(it->second);

        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b= pq.top();
            pq.pop();
            if(a>1)pq.push(a-1);
            if(b>1)pq.push(b-1);
        }
        cout<<(pq.empty()?0:pq.top())enl
    }

    return 0;
}
