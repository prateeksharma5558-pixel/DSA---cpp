#include<iostream>
#include<vector>
using namespace std;

void getperm(vector<int>& arr, int idx) {
if(idx==arr.size()) {
    for(int val:arr) {
        cout << val << " ";
    }
    cout << endl;
    return;
}
for(int i=idx; i<arr.size();i++) {
    swap(arr[i],arr[idx]);
    getperm(arr,idx+1);
    swap(arr[idx],arr[i]);
}
}

int main () {
    vector<int>arr = {1,2,3};
    getperm(arr,0);
    return 0;
}