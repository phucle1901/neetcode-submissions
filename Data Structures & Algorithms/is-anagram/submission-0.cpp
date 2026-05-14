class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector <char> vs;
        vector <char> vt;
        
        for(int i=0;i<s.size();i++){
            vs.push_back(s[i]);
            vt.push_back(t[i]);
        }
        sort(vs.begin(),vs.end());
        sort(vt.begin(),vt.end());
        for(int i=0;i<s.size();i++){
            if(vs[i]!=vt[i]){
                return false;
            }
        }

        return true;
    }
};
