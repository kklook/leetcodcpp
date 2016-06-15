class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> times;
        for (int i = 0; i < nums.size(); i++) {
            times[nums[i]]++;
        }
        vector<int> result;
        for (auto iter = times.begin(); iter != times.end(); iter++) {
            if (iter->second == 1)
                result.push_back(iter->first);
        }
        return result;
    }
};