class myStack {
  public:
    int *arr;
    int top;
    int n;

    myStack(int n) {
        arr=new int[n];
        top=-1;
        this->n=n;
    }

    bool isEmpty() {
        if(top==-1)
            return top == -1;
        return false;
    }

    bool isFull() {
        if(top==n-1)
           return top == n-1;
         return false;  
    }

    void push(int x) {
        if(!isFull())
          {
               top+=1;
               arr[top]=x;
          }
    }

    void pop() {
        if(!isEmpty())
        {
          top-=1;
        }
       
    }

    int peek() {
         if(!isEmpty())
         {
           return arr[top];
         }
         return -1;
    }
    
};