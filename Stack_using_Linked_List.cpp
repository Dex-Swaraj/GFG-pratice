/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class myStack {
    Node* head;

  public:
    myStack() {
        // Initialize your data members
        head=new Node(-1);
    }

    bool isEmpty() {
        return head->next==nullptr;
    }

    void push(int x) {
        Node* newNode=new Node(x);
        newNode->next=head->next;
        head->next=newNode;
        
    }

    void pop() {
        Node* temp=head->next;
        head->next=temp->next;
        delete(temp);
    }

    int peek() {
       if(head->next==nullptr)
           return -1;
        else
          return head->next->data;
    }

    int size() {
        int sizes=0;
        Node* temp=head;
        while(temp->next!=nullptr)
           {
                 sizes++;
                 temp=temp->next;
           }
          return sizes;
    }
};


