//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node* reverseList (struct Node* head) {
        
        if (head == NULL || head -> next == NULL) {
            return head;
        }
        
        struct Node* last = reverseList(head->next);
        head->next->next = head;
        head -> next = NULL;
        return last;
    }
    
    struct Node* mergerTwoList(Node *node1,Node *node2) {
        if (node1 == NULL) {
            return node2;
        }
        if (node2 == NULL) {
            return node1;
        }
        // your code goes here
        struct Node* result;
        
        if (node1->data < node2->data) {
            result = node1;
            result-> next = mergerTwoList(node1->next,node2);
        }else {
            result = node2;
            result->next = mergerTwoList(node1,node2->next);
        }
        
        return result;
    }
    
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        struct Node* result = mergerTwoList(node1,node2);
        
        return reverseList(result);
     
        
    }
      
        
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends