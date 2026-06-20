class myQueue {
  stack<int>stackme;
  int fronts;
  public:
    myQueue() {
        fronts=-1;
    }

    void enqueue(int x) {
        if(stackme.empty())
            fronts=x;
       stackme.push(x);
    }

    void dequeue() {
        if(stackme.empty())
        {
            fronts=-1;
            return ;
        }
        else
           {
               stack<int> stack2;
               while(stackme.size()>1)
               {
                   stack2.push(stackme.top());
                   stackme.pop();
                   
               }
               stackme.pop();
             
               if(stack2.empty())
                {
                    fronts = -1;
                }
                else
                {
                    fronts = stack2.top();
                }
                
               while(!stack2.empty())
                {
                    stackme.push(stack2.top());
                    stack2.pop();
                }
           }
    }

    int front() {
        return fronts;
    }

    int size() {
        return stackme.size();
    }
};
