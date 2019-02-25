#include "sort.h"

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