#include <iostream>
#include <bitset>
using namespace std;

const int MAX_N = 10;

void build(int n, unsigned int used_digits, unsigned long long current_num, int last_digit, priority_queue<unsigned long long, vector<unsigned long long>, greater<unsigned long long>>& results) {
if (last_digit > 0 && abs(last_digit - n) == 1) {
return; // kh�ng c� hai ch? s? li�n ti?p c� hi?u b?ng 1
}
if (used_digits == (1 << n) - 1) {
results.push(current_num); // th�m s? d� x�y d?ng v�o heap
return;
}
for (int i = 1; i <= n; i++) {
if (!(used_digits & (1 << i))) { // n?u ch? s? i chua du?c s? d?ng
if (last_digit == 0 || abs(last_digit - i) != 1) { // n?u hai ch? s? kh�ng li�n ti?p
build(n, used_digits | (1 << i), current_num * 10 + i, i, results);
}
}
}
}

int main() {
int t;
cin >> t;
while (t--) {
int n;
cin >> n;
    priority_queue<unsigned long long, vector<unsigned long long>, greater<unsigned long long>> results;
    build(n, 0, 0, 0, results); // b?t d?u x�y d?ng t? s? 0

    while (!results.empty()) {
        cout << results.top() << endl;
        results.pop();
    }
    cout << endl;
}
return 0;
}
