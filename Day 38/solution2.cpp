class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(char c:s){
            if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
                if((c>='A' && c<='Z')){
                    c=(c-'A')+'a';
                }
                temp.push_back(c);
            }
        }
        int start=0;
        int end=temp.length()-1;
        while(start<=end){
            if(temp[start]!=temp[end]) return 0;
            else{
                start++;
                end--;
            }
        }
        return 1;
    }
};