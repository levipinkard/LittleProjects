#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long divisionAccum = 0;
    double workingFact;
    if (argc == 2) {
        workingFact = atof(argv[1]);
    } else {
        workingFact = 0;
    }
    do {
        workingFact = workingFact / ++divisionAccum;
        if (workingFact == 1) {
            cout << divisionAccum << endl;
        }
        if (workingFact > 0 && workingFact < 1 || workingFact == 0) {
            cout << 0 << endl;
        }
    } while(workingFact > 1 && divisionAccum < 10);
    return 0;
}
