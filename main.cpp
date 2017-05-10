#include <iostream>

using namespace std;



int main() {

    int x = 3;
    int y = 5;
    int z = 15; // The GCD (greatest common divisor) of 3 & 5 is 1, so the LCM (least common multiple) is 15
    int sumx = 0;
    int sumy = 0;
    int total = 0;

    // // Example case
    // int n = 10;
    // for (int i = 1; i < n; i++) {
    //     if (x * i < n) {
    //         sumx += x * i;
    //         // cout << "\t" << sumx << " ";
    //     }
    //     if (y * i < n) {
    //         sumy += y * i;
    //         // cout << "\t" << sumy << " ";         
    //     }
    // }
    // total = sumx + sumy;
    // cout << "\t" << total << endl;

    // Problem
    int n = 1000;
    for (int i = 1; i < n; i++) {
        if (x * i < n && (x * i) % z != 0) { // if 3 * i is less than 1000 and if x * i mod is not true
            sumx = x * i;
            total += sumx;
            cout << "\t" << sumx << " " << endl;
            cout << "\t\t" << total << " " << endl;
            
        }
        if (y * i < n) {
            sumy = y * i;
            total += sumy;
            cout << "\t" << sumy << " " << endl;
            cout << "\t\t" << total << " " << endl;
        }
    }
    cout << endl;
    cout << "\t" << total << endl;

    return 0;
}