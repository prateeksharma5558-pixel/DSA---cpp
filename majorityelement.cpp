#include<iostream>
#include<vector>
using namespace std;
int majorityelement( vector<int>& nums) {
    int n = nums.size();
    for(int val:nums) {
        int freq = 0;
        for(int el:nums) {
           if(el==val) {
            freq++;
           }
        }
        if(freq>n/2) {
            return val;
        }
    }
    return -1;
}

int main () {
    vector<int> nums = {1,2,1,1,2,1,1};
    int n = 8;
    cout << majorityelement(nums);
    return 0;
}