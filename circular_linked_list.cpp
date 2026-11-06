#include<iostream>
#include<vector>

using namespace std;


class Node {
public:
int data;
Node* next;
Node* prev;

Node(int val) {
    data = val;
    next = prev = NULL;
}
};

class circularlist {
    Node* head;
    Node* tail;

    public: 
     circularlist() {
        head = tail = NULL;
     }

     void insertathead(int val) {
        Node* newNode = new Node(val);

        if(tail == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode -> next = head;
            head = newNode;
            tail->next = head;
        }
     }

     void insertattail(int val) {
        Node* newNode = new Node(val);

        if(tail == NULL) {
            head = tail = newNode;
            tail -> next = head;
        } else {
            newNode->next = head;
            tail -> next = newNode;
            tail = newNode; 
        }
    }
    
    void deleteathead() {
        if(head == NULL) {
            return;
        } else if(head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            tail -> next = head;

            temp -> next = NULL;
            delete temp;
        }
    }

    void deleteattail() {
        if(head == NULL) {
            return;
        } else if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = tail;
            Node* prev = head;
            while(prev -> next != tail) {
                prev = prev -> next;
               
               
            }
             tail = prev;
                tail -> next = head;
               
             delete temp;
        }

    }

     void print() {
        if(head == NULL) return;
        cout << head->data << "->";
        Node* temp = head -> next;

        while(temp != head) {
            cout << temp -> data << "->";
            temp = temp -> next;
        }
        cout << temp -> data << endl;
     }
};

int main () {
    circularlist cll;
    cll.insertathead(1);
    cll.insertathead(2);
    cll.insertathead(3);
    cll.deleteattail();
    cll.print();
    return 0;
}