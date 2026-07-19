class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> present(10, false);

        for (int x : nums1)
            present[x] = true;

        int common = 10;

        for (int x : nums2) {
            if (present[x])
                common = min(common, x);
        }

        if (common != 10)
            return common;

        int a = *min_element(nums1.begin(), nums1.end());
        int b = *min_element(nums2.begin(), nums2.end());

        return min(a * 10 + b, b * 10 + a);
    }
};