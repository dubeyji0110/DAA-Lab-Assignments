#include<bits/stdc++.h>
using namespace std;

void findMaj(int arr[], int n) {
    int maxcount = 0;
    int index = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxcount) {
            maxcount = count;
            index = i;
        }
    }
    if (maxcount > n / 2)
        // cout << "Majority Element => " << arr[index] << endl;
        cout << "yes\n";
    else
        cout << "no\n";
}
double findMedian(int a[], int n) {
    sort(a, a + n);
    if (n % 2 != 0)
        return (double)a[n / 2];
    return (double)(a[n - 1 / 2] + a[n / 2]) / 2.0;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input_3.txt", "r", stdin);
    freopen("output_3.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    findMaj(arr, n);
    cout << findMedian(arr, n) << endl;
}