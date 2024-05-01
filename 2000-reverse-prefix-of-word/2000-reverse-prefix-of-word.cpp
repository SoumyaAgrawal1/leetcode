class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos=word.find(ch);
        int s=0;
        while(s<pos){
            swap(word[s++],word[pos--]);
        }
        return word;
        
    }
};