#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}



class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        if(head == NULL){
            return NULL;
        }
        struct node *c = head;
        struct node *p = NULL;
        struct node *n = NULL;
        int ginti = 0;
        while(ginti < k && c != NULL){
            n = c->next;
            c->next = p;
            p = c;
            c = n;
            ginti++;
        }
        if(n != NULL){
            head->next = reverse(n,k);
        }
        return p;
    }
};



int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}