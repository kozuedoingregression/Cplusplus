#include <iostream>
using namespace std;

void solve(int a[], int n, int b[], int m) {
    int i = 0, j = 0;
    bool found = false;

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            cout << a[i] << " ";
            i++;
            j++;
            found = true;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }

    if (!found) {
        cout << "No Common Elements";
    }
}

int main() {
    int n, m;
    cin >> n;

    int arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cin >> m;

    int arr2[m];
    for (int j = 0; j < m; j++) {
        cin >> arr2[j];
    }

    solve(arr1, n, arr2, m);

    return 0;
}
