// First repeating element in an array
#include <iostream> 
#include <unordered_map>
using namespace std;

int firstRepeating(int arr[], int n) 
{ 
    unordered_map<int, int> s; 
    for (int i = 0; i < n; i++) { 
        s[arr[i]]++;
    } 
    for (int i = 0; i < n; i++) { 
        if (s[arr[i]] > 1) 
            return arr[i]; 
    } 
    return -1; 
}

int main() 
{ 
    int arr[] = {10, 5, 3, 4, 3, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int res = firstRepeating(arr, n); 
    if (res != -1) 
        cout << "The first repeating element is " << res; 
    else
        cout << "There are no repeating elements"; 
    return 0; 
}