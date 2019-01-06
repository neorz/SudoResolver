#include "../3rdparty/gtest/googletest/include/gtest/gtest.h"

using namespace ::testing;

int main(int argc, char ** argv)
{
	InitGoogleTest(&argc, argv);
	
	return RUN_ALL_TESTS();
}

