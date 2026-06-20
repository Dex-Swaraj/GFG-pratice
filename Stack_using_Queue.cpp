class myStack {
    queue<int> q;
    long long sizeme=0;

  public:

    void push(int x) {
        q.push(x);
        sizeme++;
    }

    void pop() {
        if(q.empty())
            return;
        else
           {
            queue<int> q2;
            while(q.size() > 1)
                {
                    q2.push(q.front());
                    q.pop();
                }
                
                q.pop();     
                swap(q, q2);
           }  
        sizeme--;
        
        
    }

    int top() {
         if(!q.empty())
            return q.back();
         return -1;    
    }

    int size() {
        return sizeme;
    }
};



