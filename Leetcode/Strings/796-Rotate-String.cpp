class Solution {
public:
    bool rotateString(string s, string goal) {
        int m = s.length();
        int n = goal.length();
        string newString = s + s;

        if(m!=n){
            return false;
        }

        if(newString.find(goal) != string::npos){
            return true;
        }

        return false;
        
    }
};