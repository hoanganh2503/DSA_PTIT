#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;
int n, a[MAXN], ans = 10;

double calcAvg(int start, int end) {
    double sum = 0;
    for (int i = start; i <= end; i++) {
        sum += a[i];
    }
    return sum / (end - start + 1);
}

void solve(int start, int end) {
    if (end - start + 1 > ans) {
        double avg = calcAvg(start, end);
        if (avg > calcAvg(end-ans+1, end)) {
            ans = end - start + 1;
        }
    }
    for (int i = end + 1; i < n; i++) {
        solve(end + 1, i);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    solve(0, -1);
    cout << ans << endl;
    return 0;
}
