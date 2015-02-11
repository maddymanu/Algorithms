class Solution {
public:
    bool isValid(string s) {
        if(s == "") {
            return true;
        }
        
        if(s.size()%2 != 0 ) {
            return false;
        }
        
        stack<char> st;
        for(int i=0 ; i <s.size() ; i++) {
            char c = s[i];
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            }else {
                
                if(st.size() == 0) {
                    return false;
                }
                char sTop = st.top();
                st.pop();
                
                if(c==')' && sTop !='(') {
                    return false;
                }
                else if(c=='}' && sTop !='{') {
                    return false;
                }
                else if(c==']' && sTop !='[') {
                    return false;
                }
            }
        }
        
        
        if(st.size() == 0) {
            return true;
        }else {
            return false;
        }
    }
};