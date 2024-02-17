#include <iostream>
#include<cstdlib>
#include "randomNum.h"

using namespace std;


int main()
{
	// symbolic constants
	const int RANGE = 100;
	const int NUM_NUMBERS = 10000;

	// variable declarations
	int randNum;

	// initializing count array to 0
	int counts[RANGE] = { 0 };

	// seeding the random generator
	srand(time(NULL));

	// generate random numbers
	for (int i = 0; i < NUM_NUMBERS; i++)
	{
		randNum = rand() % RANGE;

		// Increment the count for the randomly generated number randNum

		counts[randNum]++;
		cout << randNum << endl;
	}

	
	// Initializing  maxCount and minCount with the count of the first number
	int maxCount = counts[0];
	int minCount = counts[0];

	for (int i = 0; i < RANGE; i++)
	{

		cout << "Number " << i << " generated " << counts[i] << " times." <<
			endl;

		if (counts[i] > maxCount)
		{
			maxCount = counts[i];
		}
		if (counts[i] < minCount)
		{
			minCount = counts[i];
		}
	}

	// I didn't know what expected number of times mean in the example so I skipped that part


	cout << endl;
	cout << "Minimum occurances (" << minCount << ") times:  ";
	for (int i = 0; i < RANGE; ++i)
	{
		if (counts[i] == minCount)
		{
			cout << i << ", ";
		}
	}

	cout << endl;


	cout << "Maximum occurances (" << maxCount << ") times:  ";
	for (int i = 0; i < RANGE; ++i)
	{
		if (counts[i] == maxCount)
		{
			cout << i << ", ";
		}
	}

	cout << endl;

	sort(counts, RANGE);

	// print counts after sorting 
	//for (int i = 0; i < RANGE; i++)
	//{
	//  cout << counts[i] << endl;
	//}

	int start = 0;
	int end = RANGE - 1;
	int mid = (end - start) / 2;


	cout << "Median occurances: " << counts[mid] << endl;

	return 0;
}
