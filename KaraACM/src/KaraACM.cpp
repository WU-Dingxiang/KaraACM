#include <iostream>//cin//cout
#include <cstdio>//stdin
using namespace std;
const char* IN_FILE = "C:/in.txt";
void wdx() {
	std::ios_base::sync_with_stdio(false);
	freopen(IN_FILE, "r", stdin);
}
int main() {
	wdx();
	int t;
	while (cin >> t) {
		cout << t << " ";
	}
	return 0;
}
