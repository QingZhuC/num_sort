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
		int flag = 1;//����˴�ð�������������
		for (j = 0; j < sz-1-i; j++)//����һ��ð����������ֵ�Ѿ��Ƶ��ұߣ�����-i�����ٲ���Ҫ��ѭ������
		{
			if (arr[j] > arr[j + 1])//����������������ִ��
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;//������������鲢������ȫ����
			}
			count++;
		}
		if (flag == 1)
		{
			break;//��������ֱ������ѭ��
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

