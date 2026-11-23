#include<bits/stdc++.h>
using namespace std;

int main(){

    char course[]= "CSE-101";
    course[0] = 'E';

    const char *university = "DUET";
    // university[0] = 'B'; (not modifiable)
    university = "BUET";

    // cout << "Updated Course :" << course << endl;
    // cout << "University :" << university << endl;
    cout << "New University :" << university << endl;

    return 0;
}