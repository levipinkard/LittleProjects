#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {	
	int x;
	if (argc !=2) {
		cout << "No number given \n";
	}
	else{
		long long numTally = atoll(argv[1]);
		x = numTally;
		if (numTally > 25) {
			cout << "Number too large" << "\n";
			return 0;
		}
		else if (numTally <= 0) {
			cout << "Number too small" << "\n";
			return 0;
		}
		while(x > 1) {
			numTally = numTally * (x - 1);
			x = x -1;
		}
		cout << numTally << "\n";
	}
	return 0;
}
