#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// 1. Valid palindrome

// bool validpindrome( string s ) {
//     int i=0;
//     int j=s.size()-1;
//     while(i<j) {
//         if(s[i] != s[j]) {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;

// }

// int main () {
//     string s = "noonab";
//     cout << validpindrome(s) << endl;

// }

// 2. remove all adjecent duplicate

// int main() {
//     string s = "abbaca";
//     string ans = "";
//     for(auto i: s) {
//         if(ans.size() > 0 && ans.back() == i) {
//             ans.pop_back();
//         }
//         else {
//             ans.push_back(i);
//         }
//     }
//     cout << ans << endl;
// }

                                // 3. remove all occurences of substring
// int main()
// {
//     string str = "daabcbaabcbc";
//     string part = "abc";
//     size_t pos = str.find(part);
//     while (pos != string::npos)
//     {
//         str.erase(pos, part.length());
//         pos = str.find(part);
//     }
//     cout << str << endl;
//     return 0;
// }

// 4. min time diff

int findminidiffer(vector<string> timestamp ) {
    vector<int> minutes;

    for(int i=0; i<timestamp.size(); i++) {
        string curr = timestamp[i];

        int hour = stoi(curr.substr(0,2));
        int minute = stoi(curr.substr(3,2));
        int totalminutes = hour*60 + minute;
        minutes.push_back(totalminutes);
    }
    sort(minutes.begin(), minutes.end());
    int mini = INT_MAX;
    int n = minutes.size();

    for(int i=0; i<n-1; i++) {
        int diff = minutes[i+1] - minutes[i];
        mini = min(mini, diff);

        int lastdiff1 = (minutes[0] + 1440) - minutes[n-1];
        int lastdiff2 = minutes[n-1] - minutes[0];
        int lastdiff = min(lastdiff1, lastdiff);
        mini = min(mini, lastdiff);
    }
    return mini;
}

int main() {
    vector<string> timestamp;
    timestamp = {"02:00","03:50"};
    cout << findminidiffer(timestamp) << endl;
}




                                // 5. Count palindrome in a substring
