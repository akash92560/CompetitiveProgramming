#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0, n = S.length();
        for(int i=0;i<n;i++) {
            if(J.find(S[i]) != string::npos){
                count++;
            }
        }
        return count;
    }
};


int main() {
	Solution sol;
	string J,S;
	cin>>J>>S;
	cout<<sol.numJewelsInStones(J,S)<<"\n";
}