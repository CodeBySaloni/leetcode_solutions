class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> count(26,-1);
        int maximum = -1;

        for(int i = 0; i < s.length(); i++){
            char ch = s[i];

            if(count[ch - 'a'] == -1){
                count[ch - 'a'] = i;
            }
            else{
                maximum = max(maximum , i - count[ch - 'a'] - 1);
            }
        }
        return maximum;
    }
};
