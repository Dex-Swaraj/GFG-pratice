class Solution {
  public:
    string postToPre(string s) {
        stack<string> st;
        for(int i =0; i <  s.size(); i++) {

            char ch = s[i];

            if(isalnum(ch)) {
                st.push(string(1, ch));
            }
            else {
                string op1 = st.top();
                st.pop();

                string op2 = st.top();
                st.pop();

                string temp = ch + op2 + op1;
                st.push(temp);
            }
        }

        return st.top();
    }
        
        
    
};