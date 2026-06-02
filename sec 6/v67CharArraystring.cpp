#include<iostream>
using namespace std;

int main () {
    //  char name[10];
    char name[50];
    cin >> name[2];
    cin  >> name[59];
    cin >> name;

    //  cin >> name;
    // cin.getline(name, 50);
    for(int i=0; i<49; i++) {
        cout << name[i];
    }
    // cout << name << endl;
}