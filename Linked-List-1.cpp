#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;

  Node(int value)
  {
    data=value;
    next=NULL;
  }

  void insertAtFirst()
  {

  }
};

int main()
{
  Node *Head;
  Head = NULL;

  int arr[]={2,4,6,8,10};

  //INsertion at beginning

  // Linked List doesnt exist
  for(int i=0;i<5;i++)
  {
    if(Head==NULL)
    {
      Head=new Node(arr[i]);
    }
    //Linked list exist
    
    else
    {
      Node *temp=new Node(arr[i]);
      temp->next = Head;
      Head=temp;
    }
  }

  

  // Insertion at the end

 
  //If linked list is empty

  if(Head==NULL)
  {
      Head=new Node(100);
  }
  else
  {
    Node *temp = Head;

    while(temp->next != NULL)
    {
      temp=temp->next;
    } 

    Node *temp1 = new Node(1000);
    temp->next = temp1;
  }
  Node *a1 = Head;

  while(a1)
  {
    cout<<a1->data<<" ";
    a1=a1->next;
  }
  //He used tail as pointer to keep track of the last element

  // Node *Head,*Tail;
  // Tail=Head=NULL;

  // if empty
  //Head=NULL 
  // Head = new Node(arr[i])
  // Head = Tail

  // else
  // Node *temp = new Node(arr[i])
  // Use Temp->next = new Node(arr[i]) instead 
  // Tail = Tail->Next;
}