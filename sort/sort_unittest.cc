#include "sort.h"
#include "gtest/gtest.h"
#include <iostream>
using namespace std;

template<typename T, size_t size>
    ::testing::AssertionResult ArraysMatch(const T (&expected)[size],
                                           const T (&actual)[size]){
        for (size_t i(0); i < size; ++i){
            if (expected[i] != actual[i]){
                return ::testing::AssertionFailure() << "array[" << i
                    << "] (" << actual[i] << ") != expected[" << i
                    << "] (" << expected[i] << ")";
            }
        }

        return ::testing::AssertionSuccess();
}

TEST(SortTest, quicksorttest) {
	int a[] = {2,0,5,7,1,10};
	int sorted[] = {0,1,2,5,7,10};

	int len = sizeof(a)/sizeof(int);
	for(int i = 0 ; i < len; i++)
		cout<<a[i]<<" ";
	cout<<endl;

	quick_sort(a,0,len-1);
	
	for(int i = 0 ; i < len; i++)
		cout<<a[i]<<" ";
	cout<<endl;

	EXPECT_TRUE(ArraysMatch(a, sorted));
}