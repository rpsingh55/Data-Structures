import java.util.*;
import java.lang.*;
import java.io.*;

class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}

class Driverclass
{
    
    public Node middleNode(Node head) {
        int len = 0;
        Node temp = head;
        while(temp != null){
            temp = temp.next;
            len += 1;
        }
        len = (len / 2) + 1;
        temp = head;
        int ginti = 1;
        while(ginti != len){
            temp = temp.next;
            ginti += 1;
        }
        return temp;
    }

    public static void main (String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            Node head = new Node(sc.nextInt());
            Node tail = head;
            while(n-- > 1){
		        tail.next = new Node(sc.nextInt());
		        tail = tail.next;
		    }
		   Driverclass d = new Driverclass();
           System.out.print()
		      head = new Solution().mergeSort(head);
		     printList(head);
		    System.out.println();
        }
    }
    public static void printList(Node head)
    {
        if(head == null)
           return;
           
        Node temp = head;
        while(temp != null)
        {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
}


class Solution
{
    
    static Node merge(Node l1, Node l2){
        Node jawab = new Node(-1);
        Node temp = jawab;
        while(l1 != null && l2 != null){
            if(l1.data < l2.data){
                temp.next = new Node(l1.data);
                l1 = l1.next;
            }
            else{
                temp.next = new Node(l2.data);
                l2 = l2.next;
            }
            temp = temp.next;
        }
        while(l1 != null){
            temp.next = new Node(l1.data);
            l1 = l1.next;
            temp = temp.next;
        }
         while(l2 != null){
            temp.next = new Node(l2.data);
            l2 = l2.next;
            temp = temp.next;
        }
        
        return jawab.next;
    }
    
    static Node mid(Node head){
        Node slow = head;
        Node fast = head;
        while(fast.next != null && fast.next.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        return slow;
    }
    
    
    static Node mergeSort(Node head)
    {
        if(head == null || head.next == null) return head;
        
        Node m = mid(head);
        Node am = m.next;
        m.next = null;
        
        Node l1 = mergeSort(head);
        Node l2 = mergeSort(am);
        
        Node jawab = merge(l1,l2);
        
        return jawab;
    }
}


