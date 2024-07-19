class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp;
        mp['['] = ']';
        mp['('] = ')';
        mp['{'] = '}';

        stack<int> sh;
        for(int i=0;i<s.size();i++){
            char ch=s[i];

            if(ch=='(' || ch=='{' || ch=='[')
                sh.push(ch);
            else{
                if(!sh.empty()){
                    if(mp[sh.top()]==s[i])
                        sh.pop();
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        return sh.empty();
    }
};
