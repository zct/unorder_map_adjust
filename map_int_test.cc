#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m1;
    unordered_map<int, string> m2;
    unordered_map<int, string> m3;

    m1[2] = "john";
    m1[4] = "sarah";
    m1[1] = "mark";
    m1[3] = "mbrk";
    m1[5] = "markkk";
    m1[6] = "mbrkkk";
    m1[9] = "mcrk";

    /*m1[1] = "john";
    m1[2] = "sarah";
    m1[3] = "a";
    m1[4] = "b";
    m1[16] = "c";*/
    // m1[6] = "d";

    /*m1[1] = "mark";
    m1[3] = "mbrk";
    m1[5] = "markkk";
    m1[6] = "mbrkkk";
    m1[7] = "a";
    m1[8] = "b";
    m1[10] = "c";
    m1[11] = "d";
    m1[12] = "e";
    m1[13] = "f";*/
    // m1[14] = "d";
    // m1[9] = "mcrk";
    // m2 = m1;
    // m3 = m2;

    for (auto it = m1.begin(); it != m1.end(); ++it) {
        cout << it->second << endl;
    }
    cout << endl;
    /*for(auto it = m2.begin(); it != m2.end(); ++it) {
        cout << it->second << " ";
    }
    cout << endl;
    for(auto it = m3.begin(); it != m3.end(); ++it) {
        cout << it->second << " ";
    }
    cout << endl; */
}
