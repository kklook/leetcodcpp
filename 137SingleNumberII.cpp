class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> imap;
        for (int i = 0; i < nums.size(); i++) {
            imap[nums[i]] += 1;
        }
        for (auto iter = imap.begin(); iter != imap.end(); ++iter) {
            if (iter->second == 1) {
                return iter->first;
            }
        }
        return 0;
    }
};