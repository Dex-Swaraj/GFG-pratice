class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int sizeme=arr.size();
        vector<int> vect(sizeme,-1);
        stack<int> stacku;
        for(int i=sizeme-1;i>=0;i--)
        {
            while(!stacku.empty() && stacku.top()>=arr[i])
            {
                  stacku.pop();
            }
            if(stacku.empty())
            {
                  vect[i]=-1;
            }else
            {
                vect[i]=stacku.top();
            }
            stacku.push(arr[i]);
        }
        
        return vect;
    }
};