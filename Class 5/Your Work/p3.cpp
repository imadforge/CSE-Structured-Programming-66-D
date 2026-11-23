#include<bits/stdc++.h>
using namespace std;

int main(){

    
    char city1[20]= "Sylhet";
    char city2[20]= "Dhaka";
    char temp[20];

    cout << "Before swap -> 1st: "<< city1 << "2nd: " << city2 << endl;\
    
    strcpy(temp, city1);
    strcpy(city1, city2);
    strcpy(city2, temp);
    
    cout << "After swap -> 1st: "<< city1 << "2nd: " << city2 << endl;\



    return 0;
}