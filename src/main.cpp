#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	string s;
	cin >> s;

	auto ans = int{ 0 };
	for (auto i = 0; i < n / 2; ++i) {
		if (s[i] != s[n - i - 1]) {
			++ans;
		}
	}

	cout << ans;

	return 0;
}