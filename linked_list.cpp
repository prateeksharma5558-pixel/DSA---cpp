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

        void push_back(int val) {
            Node* newnode = new Node(val);
            
            if(head == NULL) {
                head = tail = newnode;
            } else {
                tail->next = newnode;
                tail = newnode;
            }
        }

        void pop_front() {
            if(head == NULL) {
                cout << "LL is empty\n";
                return;
            }
            Node* temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp;
        }

        void pop_back() {
            if(head == NULL) {
                cout << "LL is empty\n";
                return;
            }

            Node* temp = head;
            while(temp->next != tail) {
                temp = temp->next;
            }
            temp -> next = NULL;
            delete tail;
            tail = temp;
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
        ll.push_back(4);
        ll.pop_front();
        ll.pop_back();
        ll.printll();

    }