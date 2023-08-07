
int N, P[20];
void _main() {
	cin >> N;
	rep(i, 0, N) cin >> P[i];

	int ans = 0;
	rep(i, 1, N - 1) {
		int mi = min({ P[i - 1], P[i], P[i + 1] });
		int ma = max({ P[i - 1], P[i], P[i + 1] });
		if (mi != P[i] and ma != P[i]) ans++;
	}
	cout << ans << endl;
}

