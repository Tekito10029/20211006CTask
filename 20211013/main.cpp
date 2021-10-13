#include<stdio.h>

class ArrayClass
{
public:
	ArrayClass()
	{
		newArray = new int[1000];
		for (int i = 0; i < 1000; i++)
		{
			newArray[i] = i * 1;
			printf("%d\n", newArray[i]);
		}
	}
	~ArrayClass()
	{
		delete[] newArray;
		newArray = nullptr;
		printf("%p\n", newArray);
	}
private:
	int* newArray;
};
int main()
{
	ArrayClass Array;
}