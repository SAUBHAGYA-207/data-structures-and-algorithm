#include <bits/stdc++.h>
using namespace std;

bool canMake(vector<int>& vec, int m, int k, int days) {

    int bouquets = 0;
    int streak = 0;

    for(int i = 0; i < vec.size(); i++) {

        if(vec[i] <= days) {
            streak++;
        } 
        else {
            streak = 0;
        }

        if(streak == k) {
            bouquets++;
            streak = 0;
        }
    }

    return bouquets >= m;
}

int main() {

    int N;
    cin >> N;

    vector<int> vec(N);

    for(int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    int m, k;
    cin >> m >> k;

    if((long long)m * k > N) {
        cout << -1;
        return 0;
    }

    int low = *min_element(vec.begin(), vec.end());
    int high = *max_element(vec.begin(), vec.end());

    int ans = -1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(canMake(vec, m, k, mid)) {
            ans = mid;
            high = mid - 1;
        } 
        else {
            low = mid + 1;
        }
    }

    cout << ans;

    return 0;
}