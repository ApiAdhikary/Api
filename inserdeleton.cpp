#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int arr[100], size, insert, i, pos;
	cout << "Enter Array Size : ";
	cin >> size;

	cout << "Enter array elements : ";
	for (i = 0; i<size; i++)
	{
		cin >> arr[i];
	}

	cout << "Enter element to be insert : ";
	cin >> insert;


	cout << "At which position (Enter index number) ? ";
	cin >> pos;

	// now create a space at the required position
	for (i = size; i>pos; i--)
	{
		arr[i] = arr[i-1];
	}


	arr[pos] = insert;
	cout << "Element inserted successfully..!!\n";


	cout << "Now the new array is : \n";
	for (i = 0; i<size + 1; i++)
	{
		cout << arr[i] << " ";
	}

	cout<<endl;


	// deletion:

	cout << "which pos u want to delete :" << endl;
	int delp;
	cin >> delp;
	for (i = delp-1; i<size; i++)
	{
		arr[i] = arr[i + 1];
	}

	cout << "Now the new array is : \n";
	for (i = 0; i<size + 1; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;




	return 0;
}
