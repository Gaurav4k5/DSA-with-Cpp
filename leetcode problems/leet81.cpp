#include<iostream>
#include<vector>
using namespace std;

bool findSearchIndex(std::vector<int>& nums , int target)  {
    int s = 0;
    int e = nums.size() - 1;

    while(s <= e) {
        int mid = s + (e-s)/2;
        if( nums[mid] == target) {
            return true;
        }

        if(nums[s] == nums[mid] && nums[e] == nums[mid]) {
            s++;
            e--;
        }

        // left sorted array ke  liye 
        else if(nums[s] <= nums[mid]) {
            if( nums[s] <= target && target <= nums[mid]) {
                e = mid - 1;
            }
            else{
                s = mid+1;
            }
        }
        else {
            if(nums[e] >= target && target >= nums[mid]) {
                s = mid+1;
            }
            else{
                e = mid - 1;
            }
        }
        
    }
    return false;

}

int main () {
    vector<int> nums = {2,5,6,0,0,1};
    int target = 2;
     

    cout << findSearchIndex(nums, target) << endl;
}