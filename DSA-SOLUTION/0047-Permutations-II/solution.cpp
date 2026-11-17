class Solution {
public:
    void permutation(vector<int>& arr, vector<vector<int>>& ans, int index) {

        if (index == arr.size()) {
            ans.push_back(arr);
            return;
        }

        vector<int> vis(21, 0);

        for (int i = index; i < arr.size(); i++) {

            if (vis[arr[i] + 10] == 0) {

                swap(arr[i], arr[index]);

                permutation(arr, ans, index + 1);

                swap(arr[i], arr[index]);  

                vis[arr[i] + 10] = 1;
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permutation(nums, ans, 0);
        return ans;
    }
};
