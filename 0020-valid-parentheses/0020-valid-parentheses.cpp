class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(char i : s)
        {
            if(i=='(' || i=='{' || i=='[')
            {
                st.push(i);
            }
            else if(i==')')
            {
                if(st.size()==0 || st.top()!='(')
                return false;
                st.pop();
            }
            else if(i=='}')
            {
                if(st.size()==0 || st.top()!='{')
                return false;
                st.pop();
            }
            else if(i==']')
            {
                if(st.size()==0 || st.top()!='[')
                return false;
                st.pop();
            }
        }
        if(st.size()!=0)
        return false;
        return true;
    }
};