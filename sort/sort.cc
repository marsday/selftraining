#include "sort.h"

//��������
void quick_sort(int src[], int left, int right)
{
	if(left < right)
	{
		int i = left;
		int j = right;
		int x = src[left];//ѡȡleftΪ��׼ֵ
		while(i < j)//����ƽ�
		{
			while( i < j && src[j] >= x)//right�Ҳ࿪ʼ�ݼ����ҳ��Ȼ�׼ֵС��
			{
				j--;
			}
			if(i < j)
			{
				src[i] = src[j];//��ֵ�����
			}
			while( i < j && src[i] <= x)//left��࿪ʼ�������ҳ��Ȼ�׼ֵ���
			{
				i++;
			}
			if(i < j)
			{
				src[j] = src[i];//��ֵ���Ҳ�
			}

		}
		src[i] = x;//ȷ����׼ֵ��ʽ��λ�ã�������С���Ҳ������
		quick_sort(src,left,i-1);//�Ի�׼ֵΪ���ģ������������򣬵ݹ����
		quick_sort(src,i+1,right);
	}
}

//��������
//��һ���Ѿ�������ϵ��������в��룬һ�����Ƚϣ�С�ڵ�ʱ�򽻻�λ��
//��ʼʱ��һ��Ԫ����Ϊ�Ѿ�������ɵ�������
void insert_sort(int src[], int len)
{
	for (int i = 1; i < len; i++)
	{
		//int target = src[i];
		for (int j = i-1; j >= 0; j--)
		{
			if (src[j+1] < src[j])
			{
				int tmp = src[j + 1];
				src[j + 1] = src[j];
				src[j] = tmp;
			}
		}
	}
}