//{ Driver Code Starts
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
        cout << node->data%10; 
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
    Node* addOne(Node *head) 
    {
        Node* temp2=NULL;
        Node* temp=head;
        Node* temp1=NULL;
        if(head->next!=NULL){
            temp1=head->next;
        }
        while(temp!=NULL){
            temp->next=temp2;
            temp2=temp;
            temp=temp1;
            if(temp1!=NULL){
                temp1=temp1->next;
            }
            
        }
        head=temp2;
        int carry=1;
        // cout<<"hello"<<endl;
        while(temp2!=NULL){
            
            int val=temp2->data+carry;
            if(temp2->next==NULL){
                if(val>9){
                    temp2->data=val%10;
                    carry=val/10;
                    Node* n=new Node(carry);
                    temp2->next=n;
                    temp2=temp2->next;
                }
                else{
                    temp2->data=val;
                }
                break;
            }
            if(val>9){
                temp2->data=val%10;
                carry=val/10;
            }
            else{
                temp2->data=val%10;
                carry=0;
            }
            temp2=temp2->next;
        }
        temp=head;
        temp2=NULL;
        temp1=head->next;
        while(temp!=NULL){
            temp->next=temp2;
            temp2=temp;
            temp=temp1;
            if(temp1!=NULL){
                temp1=temp1->next;
            }
        }
        head=temp2;
        return head;
        return temp2;
        
    }
};

//{ Driver Code Starts.

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