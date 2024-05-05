#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> nums;
 
bool check(int time){
	int currIdx=0;
	int currWorkers=1;
	for (int i=0;i<n;i++){
		if (nums[i]-nums[currIdx]>2*time){
			currIdx=i;
			currWorkers++;
		}
	}
	return currWorkers<=3;
 
}
 
int main() {
	int t;
	cin>>t;
	while (t--){
		cin>>n;
		nums.clear();
		for (int i=0;i<n;i++){
			int curr;
			cin>>curr;
			nums.push_back(curr);
		}
		sort(nums.begin(),nums.end());
		int currLeft=0;
		int currRight=nums[n-1];
		while (true){
			if (currLeft==currRight){
				cout<<currLeft<<endl;
				break;
			}
			if (currLeft==currRight-1){
				if (check(currLeft)){
					cout<<currLeft<<endl;
					break;
				} else{
					cout<<currRight<<endl;
					break;
				}
			}
			int currMid=(currLeft+currRight)/2;
			if (check(currMid)){
				currRight=currMid;
			} else{
				currLeft=currMid+1;
			}
		}
	}
 
 
}