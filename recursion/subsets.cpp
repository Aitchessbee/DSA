#include <iostream>
#include <vector>
using namespace std;

void subsets(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans) {
    if (index >= nums.size()) {
        ans.push_back(output);
        return;
    }

    // exclude
    subsets(nums, output, index + 1, ans);

    // include
    output.push_back(nums[index]);
    subsets(nums, output, index + 1, ans);
}

int main() {
    int n = 3;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans;
    vector<int> output;

    int index = 0;

    subsets(nums, output, index, ans);

    cout << ans.size();

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}