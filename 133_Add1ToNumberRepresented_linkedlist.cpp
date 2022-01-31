
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


class Solution
{
    public:
    
    Node* addOneRec(Node* head , int &carry)
   {
       if(head == NULL)
       {
           return NULL;
           carry = 0;
       }
       addOneRec(head->next , carry);
       int sum = head -> data + carry;
       carry = sum/10;
       sum = sum%10;
       head -> data = sum;
   }
   
    Node* addOne(Node *head) 
    {
        
        int carry = 1;
       addOneRec(head , carry);
        Node * newHead = head;
       if(carry!=0)
       {
       newHead = new Node(carry);
       newHead -> next = head;
       return newHead;
       }
       else 
       return head;
    }
};



int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
