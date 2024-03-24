#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int getPivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] > nums[e]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s;
    }

    int binarySearch(vector<int>& nums, int s, int e, int key) {
        int start = s;
        int end = e;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == key) {
                return mid;
            } else if (key > nums[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums);
        if (target >= nums[pivot] && target <= nums[nums.size() - 1]) {
            return binarySearch(nums, pivot, nums.size() - 1, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<int> ans(3, 10);
    for(auto i: ans){
        cout << i << " " ;
    }

    return 0;
}
