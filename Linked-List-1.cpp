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

};

Node* CreatedLinkedList(int arr[],int index,int size)
{
  if(index==size)
  return NULL;

  Node *temp=new Node(arr[index]);
  temp->next = CreatedLinkedList(arr,index+1,size);
  return temp;
}

Node* CreatedLinkedListInReverse(int arr[],int index,int size,Node *prev_temp)
{
  if(index==size)
  return prev_temp;

  Node *temp=new Node(arr[index]);
  temp->next = prev_temp;
  return CreatedLinkedListInReverse(arr,index+1,size,temp);
  
}

// You can also just start from the end of array

int main()
{
  int arr[]={2,3,4,5,6};
  // Node *Head = CreatedLinkedList(arr,0,5);
  Node *Head = CreatedLinkedListInReverse(arr,0,5,NULL);

  
  Node *temp;
  temp=Head;
  while(temp)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}