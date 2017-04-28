#include <iostream>

using namespace std;



int main() {

    int x = 3;
    int y = 5;
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
        if (x * i < n) {
            sumx += x * i;
            // cout << "\t" << sumx << " ";
        }
        if (y * i < n) {
            sumy += y * i;
            // cout << "\t" << sumy << " ";         
        }
    }
    total = sumx + sumy;
    cout << "\t" << total << endl;


    return 0;
}