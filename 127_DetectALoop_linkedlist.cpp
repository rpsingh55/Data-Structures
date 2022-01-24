#include<bits/stdc++.h>
using namespace std;
  
struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
  
struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }

    bool detectLoop(Node* head)
    {
        struct Node* slow = head;
        struct Node* fast = head;
        if( head==0 )
    	    return false;
    	while(fast != NULL && fast->next != NULL)
    	    {
        	    slow=slow->next;
        	    fast=fast->next->next;
        	    if(slow==fast)
        	    return true;
    	    }
	    return false; 
    }

    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
  
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
  

int main()
{
 
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
    cout<<ll.detectLoop(ll.head);
    return 0;
}