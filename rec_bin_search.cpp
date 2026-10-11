#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& nums, int n, int target, int start, int end) {
    if(start<=end) {
        int mid = start + (end-start)/2;
        if(nums[mid]==target) {
            return mid;
        } else if (nums[mid] < target) {
            return binarysearch(nums,n,target,mid+1, end);

            } else {
                return binarysearch(nums,n,target,start,mid-1);
        }

    }
    return -1;
}
int search(vector<int> arr, int target) {
    int st = 0, end = arr.size()-1;
    return binarysearch(arr,arr.size(),target,0,arr.size()-1);
}

int main () {
    vector<int>nums = {2,3,5,7,11};
   int result = search(nums,8);
   if(result!=-1) {
    cout << "found at index: " << result << endl;
   } else {
    cout << "not found" << endl;
   }
}