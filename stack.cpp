#include<iostream>
#include<vector>
#include<list>
using namespace std;
//stack using vector
class stack {
    public:
    vector<int> v;

    void push(int val) {//O(1)
        v.push_back(val);
    }

    void pop() {//O(1)
        v.pop_back();
    }

    int top() {//O(1)
        return v[v.size()-1];
    }
    
    bool empty() {
        return v.size() == 0;
    }
};

//stack using linked list

class stack_ll {
public:
list<int> ll;
  
    void push(int val) {//O(1)
        ll.push_front(val);
    }

    void pop() {//O(1)
    ll.pop_front();
    }

    int top() {//O(1)
     return ll.front();
    }
    
    bool empty() {
     return ll.size() == 0;
    }
};

int main() {
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl; 

    return 0;
}