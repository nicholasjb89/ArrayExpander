
#include <iostream>

using namespace std; 

int* expandArray(int oldArray[], int length);
void displayArray(int theArray[], int length);
void fillArray(int *theArray, int length);

int main()
{
	int length = 10;
	int *theArray = new int[length];

	fillArray(theArray,length);
	cout << "The starting contents of the array \n";
	displayArray(theArray,length);

	cout << "The expanded array's contents\n";
	theArray = expandArray(theArray,length);
	displayArray(theArray,length*2);
	
	system("PAUSE");
}

int* expandArray(int oldArray[], int length)
{
	int *newArray = new int[length*2];

	for(int i=0 ; i < length ; i++)
	{
		newArray[i] = oldArray[i];
	}

	for(int i=length ; i < length*2 ; i++)
	{
		newArray[i] = 0;
	}
	return newArray;
}

void displayArray(int *theArray, int length)
{
	for(int i=0 ; i < length ; i++)
	{
		cout << theArray[i] << ", ";
	}
	cout << "\n";
}

void fillArray(int *theArray, int length)
{
	for(int i=0 ; i < length ; i++)
	{
		theArray[i] = i;
	}
}