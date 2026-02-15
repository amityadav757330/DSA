class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string words;
        stringstream ss(s);
        while(ss>>words){
            if(ans==""){
                ans=words;
            }
            else{
                ans=words+" "+ans;
            }
        }
        return ans;

        
    }
};