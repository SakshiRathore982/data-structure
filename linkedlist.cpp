#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
Node* insert(Node *head,int item)
{    

     Node* newnode=new Node();
     newnode->data=item;
     newnode->next=NULL;
	if(head->next==NULL)
	{
		head->next=newnode;
	}
	else 
	{
	newnode->next=head;
	head=newnode;
}
	return head;
}
void atend(Node* head,int item)
{
	
     Node* newnode=new Node();
     newnode->data=item;
     newnode->next=NULL;
	if(head->next==NULL)
	{
		head->next=newnode;
	}
	else
	{ 	Node* temp=new Node();
	temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	return ;
	}	

void display(Node *head)
{
	Node* temp=new Node();
	temp=head;
	while(temp)
	{
		cout<<temp->data<<"-> ";
		temp=temp->next;
	}
	cout<<temp->data;
}
void del(Node* head,int item)
{
	Node* temp=new Node();
	Node* prev=new Node();
	temp=head;
	prev=temp;
	
	while(temp->data!=item)
	{
		temp=temp->next;
	}
	prev->next=temp->next;
	return ;
}

int main()

{
  Node* head=new Node();
  head->next=NULL;
	int item=1;
	head=insert(head,item);
	head=insert(head,2);
	del(head,0);
    atend(head,7);
	display(head);
	return 0;
}
