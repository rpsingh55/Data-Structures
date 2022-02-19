#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


int getNthFromLast(struct Node* head, int n);


int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}
int getNthFromLast(Node *head, int n)
{
       Node *temp = head;
    while(n != 1 && temp != NULL){
        temp = temp->next;
        n--;
    }
    if(temp == NULL) return -1;
    while(temp->next != NULL){
        temp = temp->next;
        head = head->next;
    }
    
    return head->data;
}

