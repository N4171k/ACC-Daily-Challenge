#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of rows: ";
    cin >> N;

    for(int i = 0; i < N; i++) {
        // Print the first half of the palindrome
        for(int j = 0; j <= i; j++) {
            cout << char('A' + j) << " ";
        }
        
        // Print the second half of the palindrome
        for(int j = i - 1; j >= 0; j--) {
            cout << char('A' + j) << " ";
        }
        
        cout << endl;
    }

    return 0;
}
