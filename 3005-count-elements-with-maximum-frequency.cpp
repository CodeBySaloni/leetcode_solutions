class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101,0);

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        int maximum = 0;

        for(int i = 0; i < 101; i++){
            maximum = max(maximum , freq[i]);
        }

        int count = 0;

        for(int i = 0; i < 101; i++){
            if(freq[i] == maximum){
                count+=freq[i];
            }
        }

        return count;
        
    }
};
