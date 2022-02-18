#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



class Solution
{
    public:
    
      Node *reverse(Node *head){
        Node *prev=NULL,*cur=head,*nex;
        while(cur){
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        return prev;
    }
    
    Node *compute(Node *head)
    {
        int max=INT_MIN;
        Node *dummy=new Node(0);
        Node *temp=dummy;
        head=reverse(head);
        while(head){
            if(max<=head->data){
                max=head->data;
                temp->next=head;
                temp=temp->next;
            }
            head=head->next;
        }
        temp->next=NULL;
        return reverse(dummy->next);
    }
    
};
   



int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  