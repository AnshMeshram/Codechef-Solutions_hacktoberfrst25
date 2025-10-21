//Minimum types
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        vector<int> b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        // Create product array
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = a[i] * b[i];
        }

        // Sort in descending order
        sort(ans.rbegin(), ans.rend());
        int count = 0;
        int sum = 0;
        // Check pairs
        bool found = false;
        for (int i = 0; i < n ; i++) {
            count++;
            sum += ans[i];
            if (sum >= x) {
                cout << count << endl; // Output 2 as two elements are involved
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl; // No valid pair found
        }
    }

    return 0;
}
