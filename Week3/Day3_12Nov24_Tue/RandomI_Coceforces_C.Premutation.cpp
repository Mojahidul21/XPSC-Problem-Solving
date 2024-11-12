#include<bits/stdc++.h>

#define snl cout<<'\n'                      // snl - staring new line
#define enl <<'\n';                         // enl - ending new line
#define dnl cout<<'\n';                     // dnl - detached new line
#define pss <<" "                           // pss - print single space
#define pyn ?cout<<"YES":cout<<"NO";        // pyn - print yes no

#define lli long long int                   // lli - long long int
#define con const int c=1e                  // con - constant
#define imx INT_MAX;                        // imx - INT_MAX
#define imn INT_MIN;                        // imn - INT_MIN

#define vin for(int i=0;i<n;i++)cin>>v[i];  // vin - vector input

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>mat(n,vector<int>(n-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++)cin>>mat[i][j];
        }

        int inlier,outlier=0;
        for(int j=0;j<n-1;j++){
            for(int i=0;i<n;i++){
                if(!j&&!i)inlier=mat[i][j];
                else if(!j&&i==1&&inlier!=mat[i][j])outlier=mat[i][j];
                else if(!j&&i==2&&!outlier&&inlier!=mat[i][j]){outlier=mat[i][j];break;}
                else if(!j&&i==2&&outlier&&inlier==mat[i][j])break;
                else if(!j&&i==2&&outlier&&inlier!=mat[i][j]){outlier=inlier,inlier=mat[i][j];break;}
                else if(!j&&!outlier&&inlier!=mat[i][j]){outlier=mat[i][j];break;}
                else if(inlier!=mat[i][j]){outlier=mat[i][j];break;}
            }
            cout<<inlier pss;
            if(j==n-2){cout<<outlier enl break;}
            inlier=outlier,outlier=0;
        }
    }

    return 0;
}
