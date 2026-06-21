class Solution {
  public:
    string postToInfix(string &exp) {
        stack<string> st;
       for(int i=0;i<exp.size();++i)
       {
           char ch=exp[i];
           if(isalnum(ch))
           {
                  st.push(string(1, ch));
           }
           else
           {
                string op1 = st.top();
                st.pop();

                string op2 = st.top();
                st.pop();
                
                string temp = "(" + op2+ ch + op1+ ")";
                st.push(temp);
           }
       }
        return st.top();
        
    }
   
};