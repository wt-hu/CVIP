/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        int res = 0;
        std::unordered_map<int, int> sum12;
        for (const auto &a : nums1)
        {
            for (const auto &b : nums2)
            {
                ++sum12[a + b];
            }
        }
        for (const auto &c : nums3)
        {
            for (const auto &d : nums4)
            {
                if (sum12.count(0 - c - d) > 0)
                {
                    res += sum12[0 - c - d];
                }
            }
        }
        return res;
    }
};
// @lc code=end
