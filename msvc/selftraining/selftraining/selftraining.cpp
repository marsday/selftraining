// selftraining.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


/*
int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
*/
#include <stdio.h>

#include "gtest/gtest.h"

int _tmain(int argc, _TCHAR* argv[]) {
  printf("Running main() from gtest_main.cc\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

