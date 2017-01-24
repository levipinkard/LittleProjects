#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    srand((int)time(0));
    int randomCoin =  int(rand() % 10) + 1;
    if (randomCoin >= 5) {
        cout << "Heads!" << endl;
    } else {
        cout << "Tails!" << endl;
    }
    return 0;
}
