class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefixSum = 0;
        int count = 0;

        unordered_map<int, int> mp;
        mp[0] = 1;

        for(int i=0; i<nums.size(); i++) {
            prefixSum += nums[i];
            int remainder = ((prefixSum % k) + k) % k;

            if(mp.find(remainder) != mp.end()) {
                count += mp[remainder];
            }
            mp[remainder]++; 
        }
        return count;
    }
};