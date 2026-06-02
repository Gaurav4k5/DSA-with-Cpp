#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;    

// int binarySearch(int arr[], int n , int target) {
//     int first = 0;
//     int last = n-1;
//     int mid = first + (last - first)/2;
     
//     while(first <= last) {
//         if(arr[mid] == target) {
//             return mid;
//         }
//         else if(arr[mid] < target) {
//             first = mid + 1;
//         }
//         else{
//             last = mid - 1;
//         }
//         mid = first + (last - first)/2;
//     }
//     return -1;

// }

//  . 2
int LastOccurence(vector<int> v, int target) {
    int s = 0;
    int e = v.size() - 1;

    int mid = s + (e - s)/2;
    int ans =  -1;

    while(s <= e) {
        if(v[mid] == target) {
            // ans store and then  left
            ans = mid;
            s = mid + 1;
        }
        else if ( target > v[mid]) {
            s = mid + 1;
        }
        else if (target < v[mid]) {
            e = mid - 1;
        }
        mid = s + (e - s)/2; 
    }
    return ans;
}


// .1
// int firstOccurence(vector<int> v, int target) {
//     int s = 0;
//     int e = v.size() - 1;

//     int mid = s + (e - s)/2;
//     int ans =  -1; 

//     while(s <= e) {
//         if(v[mid] == target) {
//             // ans store and then  left
//             ans = mid;
//             e = mid - 1;
//         }
//         else if ( target > v[mid]) {
//             s = mid + 1;
//         }
//         else if (target < v[mid]) {
//             e = mid - 1;
//         }
//         mid = s + (e - s)/2; 
//     }
//     return ans;
// }




int main() {
    // int arr[] = {3, 8, 12, 17, 24, 33, 42, 51, 59, 66, 71, 80, 88, 94, 99};
    // int target = 33;
    // int n = sizeof(arr)/sizeof(int);
    // int targetindex = binarySearch(arr, n, target);
    // if(targetindex == -1) {
    //     cout << "Target was not found " << endl;
    // }
    // else{
    //     cout << " target is found at" <<" "<< targetindex << " index "<< endl;
    // }
    // vector<int> v{1,2,3,4,5,6};
    // if(binary_search (v.begin(), v.end() , 3)) {
    //     cout << "found " << endl;
    // }
    // else {
    //     cout << "not found " << endl;
    // }
    // return 0;



    //1. Find the first occurence of an element 
    vector<int> v{1,3,4,4,4,4,4,4,4,4,6,7};
    int target = 4;

    // int ans = firstOccurence(v, target);
    int ans = LastOccurence(v, target);

    cout << "ans is " << ans << endl;

}