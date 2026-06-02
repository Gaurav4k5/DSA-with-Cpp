#include <iostream>
using namespace std;

// int findsqrt(int n)
// {
//     int target = n;
//     int s = 0;
//     int e = n;
//     int mid = s + (e - s) / 2;
//     int ans = -1;

//     while (s <= e)
//     {
//         if (mid * mid == target)
//         {
//             return mid;
//         }
//         else if (mid * mid > target)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             // ans store
//             ans = mid;
//             mid = s + 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int ans = findsqrt(n);
//     cout << "The square root of " << n << " is " << ans << endl;

//     int precision;
//     cout << "Enter the number of decimal places for precision: " << endl;
//     cin >> precision;

//     double step = 0.1;
//     double finalans = ans;
//     for(int i = 0; i < precision; i++)
//     {
//         for(double j=finalans; j*j <= n; j = j + step)
//         {
//             finalans = j;
//         }
//         step /= 10;
//     }
//     cout << "The square root of " << n << " is " << finalans << endl;
//     return 0;
// }  


//      binary serach on 2D matrix


bool binarySearch(int arr[][4] , int rows , int col, int target) {
    int s = 0;
    int e = rows*col -1;
    int mid = s + (e - s) / 2;

    while(s <= e) {
        int rowindex = mid/col;
        int colindex = mid%col;
        int element = arr[rowindex][colindex];

        if(element == target) {
            cout << "element found at index " << rowindex << " and " << colindex << endl;
            return true;
        }
        else if(element < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;

}

int main () {
    int arr[5][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };

    int target = 15;
    int rows = 5;
    int col = 4;

    bool ans = binarySearch(arr, rows, col, target);

    if(ans) {
        cout << "found" << endl;
    }
    else{
        cout << " not found" << endl;
    }
}