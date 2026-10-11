#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype>
#include<set>
using namespace std;

int maxsubarraysum(vector<int>& nums) {
  int currentsum = 0, maxsum = INT_MIN;
for(int val : nums) {
  currentsum += val;
  maxsum = max(currentsum,maxsum);
    if(currentsum<0) currentsum = 0;
}
return maxsum;
}

int main () {
vector<int> nums = {2,6,5,9,10,-9};

cout << "max subarray sum = " << maxsubarraysum(nums);
return 0;
}