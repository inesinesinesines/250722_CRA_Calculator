#include "gmock/gmock.h"

class Cal {
public :
	int getSum(int a, int b) 
	{
		return a + b;
	}

	int getMinus(int a, int b)
	{ 
		return a - b;
	}

	int getDivide(int a, int b) {
		if (b == 0) return 0;
		return (a / b);
	}
    int getZegop(int a) {
		return a * a;
	}
};


TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}