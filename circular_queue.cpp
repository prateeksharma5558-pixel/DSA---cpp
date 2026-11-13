#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class circularqueue {
    int* arr;
    int currsize,cap;
    int f,r;
  
    public:
    circularqueue(int size) {
        cap = size;
        arr = new int[cap];
        currsize = 0;
        f = 0;
        r = -1;
    }
        void push(int data) {
            if(currsize == cap) {
            cout << "CQ is FULL\n";
            return;
            }
            r = (r+1)%cap;
            arr[r] = data;
            currsize++;
        }
        void pop() {
            if(empty()) {
                cout << "Q is EMPTY\n";
                return;
            }
            f = (f+1)%cap;
            currsize--;
        }
        int front() {
            if(empty()) {
                cout << "Q is EMPTY\n";
                return -1;

            }
            return arr[f];
        }
        bool empty() {
            return currsize == 0;
        }

        void printarray() {
            for(int i=0; i<cap; i++) {


                cout << arr[i] << " ";
            }
            cout << endl;
        }
    };

int main() {
    circularqueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);
    cq.printarray();

    return 0;

}