#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}


class Solution{
  public:
    //Function to merge K sorted linked list.
   void merge(Node *first, Node* &second){
         
         Node* dummy = new Node(-1);
         Node* ans   = dummy;
         while(first != NULL && second!= NULL){
             
             if(first->data <second->data){
                 dummy->next = first;
                 dummy = dummy->next;
                 first = first->next;
             }
             else{
                 dummy->next = second;
                 dummy = dummy ->next;
                 second = second->next;
             }
         }
         while(first != NULL){
             dummy->next = first;
             dummy = dummy->next;
             first = first->next;
             
         }
          while(second != NULL){
             dummy->next = second;
             dummy = dummy->next;
             second = second->next;
         }
        second =  ans->next;
     }
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    
    {
        for(int i=0 ;i<K-1;i++){
            merge(arr[i],arr[i+1]);
        }
          return(arr[K-1]);
    }
};

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
  // } Driver Code Ends