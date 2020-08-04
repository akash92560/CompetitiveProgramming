//https://www.geeksforgeeks.org/gold-mine-problem/
class Solution {
public:
	vector<vector<int> > goldMine;
	int rows, cols;
	int maxGoldICanGet() {
		vector<vector<int> > dp(rows, vector<int>(cols));
		for(int i=0;i<rows;i++) {
			dp[i][0]=goldMine[i][0];
		}
		int ans = 0;
		for(int i = 1;i<cols;i++) {
			for(int j=0;j<rows;j++) {
				int right = dp[j][i-1];
				int rightTop = (j==0)?0:dp[j-1][i-1];
				int rightBottom = (j==(rows-1))?0:dp[j+1][i-1];
				dp[j][i] = max(right, max(rightTop, rightBottom)) + goldMine[j][i];
				if(i == (cols-1)) {
					ans = max(ans, dp[j][i]);
				}
			}
		}
		return ans;
	}

	void input() {

		cin>>rows>>cols;
		vector<vector<int> > goldMineTemp(rows,vector<int>(cols));
		goldMine = goldMineTemp;
		for(int i=0;i<rows;i++) {
			for(int j=0;j<cols;j++) {
				cin>>goldMine[i][j];
			}
		}
	}
	void solution() {
		cout<<maxGoldICanGet()<<"\n";
	}
};