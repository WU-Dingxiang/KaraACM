#if 0
#include <iostream>//cin//cout
#include <cstdio>//stdin
using namespace std;
const char* IN_FILE = "C:/in.txt";
#define DEBUG_ON1
void wdx() {
	std::ios_base::sync_with_stdio(false);
#ifdef DEBUG_ON
	freopen(IN_FILE, "r", stdin);
#endif
}
int main() {
	wdx();
	int t;
	while (cin >> t) {
		cout << t << " ";
	}
	return 0;
}
#endif
