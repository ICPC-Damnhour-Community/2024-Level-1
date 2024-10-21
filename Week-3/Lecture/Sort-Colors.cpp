class Solution {
public:
    void sortColors(vector<int>& nums) {
        int freq[3] = {0};
        for(auto i : nums) 
        	freq[i]++;
        	
    	int idx=0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < freq[i]; j++){
                nums[idx++] = i;
            }
        }
    }
};