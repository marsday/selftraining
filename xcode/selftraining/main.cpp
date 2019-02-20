//
//  main.cpp
//  selftraining
//
//  Created by 李強 on 2019/2/20.
//  Copyright © 2019 marsday. All rights reserved.
//

#include <iostream>


#include "gtest/gtest.h"

GTEST_API_ int main(int argc, char **argv) {
    printf("Running main() from gtest_main.cc\n");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
