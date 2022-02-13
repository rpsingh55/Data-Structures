#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;




class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
          Node* curr=head;
        Node* dummy0= new Node(0);
        Node* zero=dummy0;
        Node* dummy1 = new Node(0);
        Node* one=dummy1;
        Node* dummy2 = new Node(0);
        Node* two=dummy2;
        while(curr!=NULL){
            if(curr->data == 0){
            Node* temp0= new Node(0);
            zero->next=temp0;
            zero=zero->next;
        }
        else if(curr->data==1){
             Node* temp1= new Node(1);
           one->next=temp1;
           one=one->next;
        }
        else{
            Node* temp2= new Node(2);
           two->next=temp2;
            two=two->next;
        }
       curr=curr->next;
        }
        Node* ans=dummy0->next;
        if(dummy1->next!=NULL)
        {zero->next=dummy1->next;
            one->next=dummy2->next;
            two->next=NULL;
        }
        else
       { 
        zero->next=dummy2->next;
        two->next=NULL;
       }
        return ans;
        
    }
};


// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}  