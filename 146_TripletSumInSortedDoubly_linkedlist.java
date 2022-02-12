
import java.io.*;
import java.util.*;

class Node 
{
	int data;
	Node prev, next;
	Node(int val)
	{
		data = val; 
		prev = null;
		next = null;
	}
}

class GFG
{

	static int countTriplets(Node head, int x)
	{
			Node ptr1, ptr2, ptr3;
			int count = 0;

			for (ptr1 = head; ptr1 != null; ptr1 = ptr1.next)
				for (ptr2 = ptr1.next; ptr2 != null; ptr2 = ptr2.next)
					for (ptr3 = ptr2.next; ptr3 != null; ptr3 = ptr3.next)

						
						if ((ptr1.data + ptr2.data + ptr3.data) == x)
							
							count++;

			return count;
	}

	static Node insert(Node head, int val)
	{
			Node temp = new Node(val);

			if (head == null)
				head = temp;

			else
			{
				temp.next = head;
				head.prev = temp;
				head = temp;
			}
		
			return head;
	}

	public static void main(String args[])
	{
		
			Node head = null;
			
			
			head = insert(head, 9);
			head = insert(head, 8);
			head = insert(head, 6);
			head = insert(head, 5);
			head = insert(head, 4);
			head = insert(head, 2);
			head = insert(head, 1);

			int x = 17;
			System.out.println("count = " + countTriplets(head, x));
	}
}

