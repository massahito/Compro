#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long N, X;

    cin >> N >> X;
    vector<long long> A(N), B(N);
    vector<bool> P(X + 1, false);

    for (long long i = 0; i < N; i++)
        cin >> A[i] >> B[i];

    P[0] = true;
    for (long long i = 0; i < N; i++) {
        for (long long j = 0; j <= X; j++) {
            if (P[j]) {
                for (long long k = 1; k <= B[i]; k++) {
                    if (j + A[i] * k <= X) {
                        P[j + A[i] * k] = true;
                    } else {
                        break; // より大きい値は考慮しなくても良いので break
                    }
                }
            }
        }
    }

    if (P[X])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

