#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> a, int target) {
   int st = 0, end = a.size()-1;
   while(st<=end) {
    int mid = st + (end-st)/2;
    if(a[mid]==target) {
        return mid;
    }
    if(a[st]<=mid) {
  if(a[mid]>=target && a[st]<=target) {
        end = mid-1;
    } else {
        st = mid + 1;
    } 
}  else {
        if (a[mid]<=target && a[end]<=target) {
        st = mid+1; 
    } else {
        end = mid-1;
    }

   }

    }
    return -1;
  

}

int main () {
vector<int> a = {3,4,5,6,7,0,1,2};
int target = 0;
 search(a,0);

cout << "target index is: " << search(a,0);
}
