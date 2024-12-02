#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define pnl cout<<'\n';                             // pnl - print new line
#define tnl if(t)pnl                                // tnl - testcase new line

#define pye cout<<"YES";                            // pye - print YES
#define pno cout<<"NO";                             // pno - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO

#define lli long long                               // lli - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e                          // con - constant

#define vii vector<int>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vii - vector integer input
#define vli vector<lli>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vli - vector long long input

bool is_palindrome(string s){for(int l=0,r=s.size()-1;l<=r;l++,r--)if(s[l]!=s[r])return 0;return 1;}

int main(){
    tourist

    int t;cin>>t;
	while(t--){
	    int n;string s;cin>>n>>s;

        bool a=is_palindrome(s),b=is_palindrome(s.substr(1)),c=is_palindrome(s.substr(0,n-1));

        if(a)cout<<0;
        else if(b&&c)cout<<-1;
        else cout<<1;
        tnl
	}

    return 0;
}
