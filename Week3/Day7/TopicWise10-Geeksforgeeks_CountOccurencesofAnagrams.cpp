//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    map<char,int>fp,fw; // frequency map for pat, frequency map for window
	    for(auto c:pat)fp[c]++;
	    for(int i=0;i<pat.size();i++)fw[txt[i]]++;
	    int cnt=fw==fp;
	    for(int i=1;i<=txt.size()-pat.size();i++){
            fw[txt[i-1]]--,fw[txt[i+pat.size()-1]]++;
            if(!fw[txt[i-1]])fw.erase(txt[i-1]);
            cnt+=fw==fp;
        }
	    return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends
