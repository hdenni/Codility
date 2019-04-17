#include <iostream>

using namespace std;

int solution(int N) {
	int k;
	int max = 0, pwalk = 0;
	bool flg = true;

	k = 0;
	while (N > 0) {
		printf("%d %d %d\n", N, pwalk, max);
		// if this zero cannot be binary gaps
		if (flg && !(N % 2)) {
			printf("-");
			k++; N /= 2; continue;
		}

		if (!(N % 2)) pwalk++;
		else {
			max = max > pwalk ? max : pwalk;
			pwalk = 0;
			flg = false;
		}
		N /= 2;
	}
	if (flg) return 0;
	return max;
}

int main() {
	int N;
	scanf("%d", &N);
	printf("%d", solution(N));
	return 0;
}