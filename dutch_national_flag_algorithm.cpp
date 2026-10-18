#include<iostream>
#include<vector>
using namespace std;

void sortarray(vector<int>& nums) {
    int n = nums.size();
    int low = 0, mid = 0, high = n-1;
    while(mid<=high) {
        if(nums[mid]==0) {
            swap(nums[low],nums[mid]);
            low++,mid++;
        } else if (nums[mid]==1) {
            mid++;
        } else {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    
}

int main() {
    vector<int> nums = {0,0,0,1,1,1,2,2,2,0,0,0,1,1};
     sortarray(nums);
    for(int val:nums) {
        cout << val << "  "; 
    }
    return 0;
}