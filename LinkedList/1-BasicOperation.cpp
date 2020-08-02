#include<bits/stdc++.h>
using namespace std;
class Node {
    private:
        int data;
        Node* next;
    public:
        Node(int data){
            this->data = data;
            this->next = NULL;   
        }
};
class LinkedList {
    private:
        Node* root;
    public:
        void appendNode(int data) {  
            Node* itr = root;
            Node* newNode = new Node(data);
            if(itr == null) {
                root = newNode;
                return;
            }
            while(itr->next != NULL) {
                itr = itr->next;
            }
            itr->next = newNode;
            return;
        }
        void insertInFront(int data) {
            Node* newNode = new Node(data);
            newNode->next = root;
            root = newNode;
        }

        void reverseLinkedList() {
            
        }
        void printLinkedList() {
            Node* itr = root;
            while(itr != NULL) {
                cout<<itr->data<<", ";
                itr = itr->next;
            }
            cout<<"\n";
            return;
        }

}

int main() {
    Node* root;
    
}