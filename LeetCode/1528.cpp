#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length();
        string ans(n,' ');
        for(int i=0;i<n;i++) {
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int n;
    string s;
    vector<int> indices;
    cin>>n>>s;
    for(int i=0;i<n;i++) {
        cin>>indices[i];
    }
    cout<<sol.restoreString(s, indices)<<"\n";
}
