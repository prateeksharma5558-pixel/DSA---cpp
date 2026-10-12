#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int> a, int n, int m, int mid) {
int students = 1, pages = 0;
for(int i=0; i<n; i++) {
    if(a[i]>mid) {
        return false;
    }

 if(pages+a[i] <= mid) {
    pages+=a[i];
 } else {
    students++;
    pages=a[i];
 } 
} 
return students > m ? false : true;
}
int allocatebook(vector<int> a, int n, int m) {
    
    if(m>n) {
        return -1;
    }
    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum+=a[i];
    }

    int ans = -1;
    int st = 0, end = sum;
    while(st<=end) {
        int mid = st + (end-st)/2;
        if(isvalid(a,n,m,mid)) {
            ans = mid;
            end = mid-1;
        } else {
            st = mid+1;
        }
    }
    return ans;
}

int main () {
    vector<int> a = {2,1,3,4};
    int n = 4, m = 2;
    cout << allocatebook(a,n,m) << endl;
    return 0;
}