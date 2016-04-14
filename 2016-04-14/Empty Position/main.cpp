#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int emptyIndexFinder(float list[], int length, int index) {
	if (list[index] == -1) {
		return index;
	}
	if (index + 1 > length) {
		return -1;
	}
	return emptyIndexFinder(list,length, index + 1);
}

int main()
{
    float gpas[] = { 4.0, 3.0, -1, 2.0, 3.0, 3.5, -1, 3.2 };
	int numGPAS = 8;
    float newGpa = 3.4;

	int emptyIndex = 0;
	emptyIndex = emptyIndexFinder(gpas, numGPAS, 0);
    if ( emptyIndex != -1 )
    {
        gpas[emptyIndex ] = newGpa;
    }

    for ( int i = 0; i < 8; i++ )
    {
        cout << i << ": " << gpas[i] << endl;
    }

    return 0;
}

