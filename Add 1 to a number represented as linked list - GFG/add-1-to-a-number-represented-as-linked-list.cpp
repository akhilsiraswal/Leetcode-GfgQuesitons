// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node *reverse(Node *head){
        Node *curr=head,*prev=NULL,*next=NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *temp = head;
        int flag=0;
        while(temp){
             if(temp->data !=9) {
                flag=1;
                break;
            } 
            temp=temp->next;
        }
        
        if(!flag){
            temp=head;
            // temp->data = 1;
            // temp=temp->next;
            while(temp && temp->next){
                temp->data = 0;
                temp=temp->next;
            }
            if(temp){
                
                temp->data = 0;
                Node *t = new Node(0);
                t->next = NULL;
                temp->next = t;
                temp=t;
            }
            head->data = 1;
            return head;
        }
        // cout<<"HII"<<endl;
    
        temp = reverse(head);
        Node *t = temp;
        int carry=1;
        while(temp){
            // cout<<temp->data;
            if(temp->data+carry>9) temp->data = 0;
            else {
                temp->data = temp->data +carry;
                carry=0;
            }
            // cout<<temp->data;
            temp=temp->next;
        }
        temp=t;
        
        head = reverse(temp);
        return head;
        
        
        
        
        
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends