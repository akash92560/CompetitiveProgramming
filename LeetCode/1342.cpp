#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps (int num) {
        int step = 0;
        while(num!=0) {
            if((num&1) == 0){
                num/=2;
            }
            else{
                num--;
            }
            step++;
        }
        return step;
    }
};

int main() {
    Solution sol;
    string num;
    cin>>num;
    cout<<sol.numberOfSteps(num)<<"\n";
}
