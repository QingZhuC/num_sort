#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sort(int arr[], int sz)
{
	int count = 0;
	int i = 0;
	int j = 0;
	
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;//假设此次冒泡排序是有序的
		for (j = 0; j < sz-1-i; j++)//进行一趟冒泡排序后，最大值已经移到右边，所以-i来减少不必要的循环次数
		{
			if (arr[j] > arr[j + 1])//若本次数组无序则执行
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;//本次排序的数组并不是完全有序
			}
			count++;
		}
		if (flag == 1)
		{
			break;//若有序，则直接跳出循环
		}
	}
	printf("count == %d\n", count);

}

int main()
{
	int i = 0;
	int arr[] = { 0,1,2,3,9,8,5,4,7,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr,sz);
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}

