#include<iostream>
using namespace std;
//function for sorting array in ascendeing order 
void sort_array(int array[],int size)
{
	int temp = array[0];
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
//function for finding kth smallest element
int kthsmallest(int array[], int size, int k)
{
	return array[k - 1];
}
int main()
{
	int size;
	cout << " enter the number of elements you want to enter : ";
	cin >> size;
	int* array=new int[size];
	//populating the array
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the value of element " << i + 1 << " : ";
		cin >> array[i];
	}
	//function call
	sort_array(array, size);
	
	int k = 0;
	cout << " Enter the k'th number to find smallest element : ";
	cin >> k;
	while (k > size)
	{
		cout << " Error! given number is out of bound " << endl;
		cout << " Enter again " << endl;
		cin >> k;
	}
	//calling function
	int smallest = 0;
	smallest=kthsmallest(array, size, k);
	cout << k<<"th smallest element is : " << smallest;
	delete[]array;
	array = NULL;
	return 0;
}