#include<iostream>
using namespace std;

class Node {
    public :
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

    class list {
        Node* head;
        Node* tail;

        public:

        list() {
            head = tail = NULL;
        }

        void push_front(int val) {
            Node* newnode = new Node(val);
            if(head == NULL) {
            head = tail = newnode;
            return;
            } else {
                newnode -> next = head;
                head = newnode;
            }
        }
          void printll() {
            Node* temp = head;
            while(temp != NULL) {
            cout << temp->data <<  "->";
             temp = temp->next;
            }
            cout << "NULL" << endl;
          }

    };

    int main() {
        list ll;

        ll.push_front(1);
        ll.push_front(2);
        ll.push_front(3);
        ll.printll();
    }