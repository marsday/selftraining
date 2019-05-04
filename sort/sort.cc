#include "sort.h"

//快速排序
void quick_sort(int src[], int left, int right)
{
	if(left < right)
	{
		int i = left;
		int j = right;
		int x = src[left];//选取left为基准值
		while(i < j)//两侧逼近
		{
			while( i < j && src[j] >= x)//right右侧开始递减，找出比基准值小的
			{
				j--;
			}
			if(i < j)
			{
				src[i] = src[j];//赋值到左侧
			}
			while( i < j && src[i] <= x)//left左侧开始递增，找出比基准值大的
			{
				i++;
			}
			if(i < j)
			{
				src[j] = src[i];//赋值到右侧
			}

		}
		src[i] = x;//确定基准值正式的位置，左侧比它小，右侧比它大
		quick_sort(src,left,i-1);//以基准值为中心，划分两个区域，递归调用
		quick_sort(src,i+1,right);
	}
}

//插入排序
//往一个已经排序完毕的子序列中插入，一个个比较，小于的时候交换位置
//初始时第一个元素作为已经排序完成的子序列
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