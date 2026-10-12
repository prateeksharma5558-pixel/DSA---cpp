#include<iostream>
#include<vector>
using namespace std;

//bubble sort

void bubblesort(int arr[], int n) {
    for(int i = 0; i<n-1; i++) {
        for(int j = 0; i<n-i-1; j++) {
            if(arr[j]>=arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }

  
}
  void printarray (int arr[], int n) {
        for(int i = 0; i<n; i++) {
            cout << arr[i] << " ";

        }
        cout << endl;
    }

    // selection sort
    void selectionsort(int arr[], int n) {
        for(int i=0; i<n; i++) {
            int smallestidx = i;
            for(int j =0; j<n-i-1;j++) {
                if(arr[j]<arr[smallestidx] ) {
                    smallestidx = j;
                } 
                swap(arr[i],arr[smallestidx]);
            }
        }
    }


    // insertion sort
  void insertionsort(int arr[],int n) {
    for(int i = 1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev]>curr) {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
  }