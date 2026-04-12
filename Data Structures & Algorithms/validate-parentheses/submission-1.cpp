class Solution {
public:
    bool isValid(string s) {
        stack<char> paranth;
        int open=0;
        bool is_valid=true;
        for(char c: s) {
            switch(c) {
                case ')':
                case '}':
                case ']':
                    if(paranth.empty()){
                        is_valid=false;
                    }else if(paranth.top()=='(' and c != ')'){
                        is_valid=false;
                        paranth.pop();
                    }else if(paranth.top()=='[' and c != ']'){
                        is_valid=false;                        
                        paranth.pop();
                    }else if(paranth.top()=='{' and c != '}'){
                        is_valid=false;                        
                        paranth.pop();
                    } else {
                        paranth.pop();
                    }
                    break;
                case '(':
                case '{':
                case '[':
                    paranth.push(c);
                    break;
                default:
                    is_valid=false;
                    break;
            }
        }
        if(not paranth.empty())
            is_valid=false;
        return is_valid;
    }
};
