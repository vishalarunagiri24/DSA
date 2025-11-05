class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        bool match = true;
        for(int i=0;i<strs[0].size();i++){
            char ch = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=ch || strs[j].size()< i){
                    match = false;
                    break;
                }
            }
            if(match==false){
                return ans;
            }
            else{
                ans.push_back(strs[0][i]);
            }
        }
        return ans;
    }
};