#include<iostream>
using namespace std;

// void printcounting(int n )
//  {
//     // base case 
//     if(n == 0){
//         return;
//     }

//     // processing 
//     cout << n ;

//     // recursive relation
//     printcounting(n-1);
//  }
// int main () {
//     int n;
//     cin >> n;

//     int printcounting(n);

//     cout << endl;
    
//     return 0;
// }

int fbn(int n )
 {
  if(n == 1) {
    return 0;
  }
  if(n == 2) {
    return 1;
  }

  return fbn(n-1) + fbn(n-2);
 }
int main() {
  int n;
  cin >> n;

  int ans = fbn(n);
  cout << n <<"th therm is " << ans << endl;

  return 0;
}
