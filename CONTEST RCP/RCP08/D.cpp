
using namespace std;

#include <iostream>
#define MAXS 102
#define MAX(a,b) ((a) > (b) ? a : b)

int main(void) {

	int s, n, x, y;
	cin >> s >> n;

	int cf[MAXS][MAXS];
	for (int i=0; i<MAXS*MAXS; i++) cf[i/MAXS][i%MAXS] = 0;
	for (int i=0; i<n; i++) {
		cin >> x >> y;
		cf[x][y]++;
	}

	for (int i=0; i<MAXS; i++)
		for (int j=1; j<MAXS; j++)
			cf[i][j] += cf[i][j-1];

	for (int j=0; j<MAXS; j++)
		for (int i=1; i<MAXS; i++)
			cf[i][j] += cf[i-1][j];

	int res = 0;
	for (x=1; x+s<MAXS; x++)
		for (int y=1; y+s<MAXS; y++)
			res = MAX(res, cf[x+s][y+s]-cf[x-1][y+s]-cf[x+s][y-1]+cf[x-1][y-1]);
	cout << res << endl;

	return 0;
}
