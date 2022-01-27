// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    int length(Node *head){
        int count=0;
        while(head){
            head=head->next;count++;
        }
        return count;
    }
    
    Node *reverse(Node *head){
        Node *curr = head,*prev=NULL,*next=NULL;
        while(curr){
            next=curr->next;
            curr->next = prev;
            prev= curr;
            curr = next;
        }
        return prev;
    }
    
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        int n = length(head);
        if(n==1) return true;
        n/=2;
        Node *prev=NULL,*t=head;
        for(int i=1;i<=n;i++){
            prev=t;
            t=t->next;
            
        }
        prev->next = NULL;
        
        Node *temp = reverse(t);
        
        while(temp && head){
            if(head->data!=temp->data) return false;
        
            temp=temp->next;
            head=head->next;
        }
        return true;
        
        
        
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends