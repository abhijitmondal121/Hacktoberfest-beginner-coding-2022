#include<iostream>
using namespace std;
//function to find duplicates elements
void find_duplicates(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] == array[j])
			{
				cout << array[i];
			}
			
		}
	}
}
int main()
{
	int size;
	cout << " Enter the size of array : ";
	cin >> size;
	int* array = new int[size];
	//populating array
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the value of element " << i + 1 << " : ";
		cin >> array[i];
	}
	cout << endl;
	//display the array contents 
	cout << "Contents of array are :" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << "\t";
	}
	//function call
	find_duplicates(array, size);
	delete[]array;
	array = NULL;
	return 0;

}