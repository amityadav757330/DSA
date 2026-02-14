class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words;
        string ans = "";
        while (ss >> words) {
            string temp;
            for (int i = words.size()-1; i >= 0; i--) {
                temp.push_back(words[i]);
            }
            if (ans != "") {
                ans += " ";
            }
            ans += temp;
           
        }
        return ans ;
        
    }
};