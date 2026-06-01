#include<iostream>
#include<vector>
using namespace std;

                           //1.  binary serach in a nearly sorted array

// int binarysearch(vector<int>arr ,int target) {
//     int s = 0;
//     int e = arr.size() -1;
//     int mid = s + (e-s)/2;

//     while(s <= e) {
//         if(arr[mid] == target) {
//             return mid;
//         }
//         else if(mid -1 >= 0 && arr[mid-1] == target) {
//             return mid-1;
//         } 
//         else if(mid + 1  > e && arr[mid+1] == target) {
//             return mid + 1;
//         }
//         else if ( arr[mid] < target ){
//             s = mid + 2;
//         }
//         else{
//             e = mid - 2;
//         }
//         int mid = s + (e-s)/2;

//     }
//     return -1;
// }

// int main () {
//     vector<int>arr{10,3,40,20,50,80,70};
//     int target = 80;
//     int ans = binarysearch(arr, target);
//     cout << "target found at " << ans <<endl;
//     return 0;
// }


                                    // 2. divide two number 


int solve(int dividend , int divisor) {
    int s = 0;
    int e = abs(dividend);
    int mid = s+ (e-s)/2;
    int ans = 0;

    while(s <= e) {
        if(mid*abs(divisor) == abs(dividend)) {
            return mid;
        }
        else if(mid*abs(divisor) > abs(dividend)) {
            e = mid -1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }

    }
    if((divisor <0 && dividend < 0)  || (divisor>0 && dividend>0)) {
        return ans;
    }else{
    return -ans;
    }
}


int main () {
    int dividend = 22;
    int divisor = 7;
    int ans = solve(dividend, divisor);
    cout << "value of dividing is " << ans << endl;
}