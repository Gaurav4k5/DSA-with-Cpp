#include<iostream>
#include<limits.h>
using namespace std;  

int climbstairs(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return climbstairs(n-2) + climbstairs(n-1);
}

void print(int arr[], int n, int i) {
    // base
    if( i >= n) {
        return;
    }

    // process
    cout << arr[i] << " ";

    //RR
    print(arr , n, i+1);
}

void findmax(int arr[], int n , int i , int& maxi) {
    if( i >= n) {
        return;
    }
    if(arr[i] > maxi){
        maxi = arr[i];
    }

    findmax(arr, n , i+1 , maxi);


}

void printalldigits(int num) {
    if( num  == 0) {
        return;
    }
    printalldigits(num/10);
    
    cout << num%10 << " ";
}

int main () {
    // int n;
    // cin >> n;
    // int ans = climbstairs(n);
    // cout << "Answer is " << ans << endl;
    
    // int arr[5] = {11,12,13,14,15};
    // int n = 5;
    // int i = 0; 
    // print( arr , n , i);

    // find Maximum num
    // int arr[] = {11,2,4,56,66,34,23,24,45};
    // int n = 9;
    // int i = 0;
     
    // int maxi = INT_MIN;
    // findmax(arr, n ,i, maxi);
    // cout <<"Maximum Number is " << maxi << endl;

    //print all digits
    int num = 739;
    printalldigits(num);

    return 0;
}
