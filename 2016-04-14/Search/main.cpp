#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int Find(string myArray[], int arraySize, const string& searchFor, int index) {
	if (index == arraySize) {
		return -1;
	}
	if (myArray[index] == searchFor) {
		return index;
	}
	return Find(myArray, arraySize, searchFor, index + 1);
}

int main()
{
    string dogBreeds = {
        "corgi", "labrador", "bulldog", "beagle", "poodle", "boxer"
        };

    string searchFor;
    cout << "Search for what term? ";
    cin >> searchFor;

//    int foundIndex = -1;

	int foundIndex = Find(dogBreeds,6, searchFor, 0) {

	}

    for ( int i = 0; i < 6; i++ )
    {
        if ( dogBreeds[i] == searchFor )
        {
            foundIndex = i;
        }
    }

    if ( foundIndex == -1 )
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    return 0;
}
