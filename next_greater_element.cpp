#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main() {
    vector<int> arr = {6,8,0,1,3};
    //next greater element
    stack<int> s;
     int n = arr.size();
    vector<int> ans(n,0);
    for(int i=n-1; i>=0; i--) {
    while(s.size() > 0 && s.top() <= arr[i]) {
        s.pop();
    }
    if(s.empty()) {
        ans[i] = -1;
    } else {
        ans[i] = s.top();
    }
    s.push(arr[i]);
    }
    //print 
    for(int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}