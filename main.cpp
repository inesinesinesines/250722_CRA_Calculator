#include "gmock/gmock.h"

class Cal {
public :
	int getGop(int a, int b) {
		return a * b;
	}

	int getSum(int a, int b) 
	{
		return a + b;
	}

	int getMinus(int a, int b) { 
		return a - b;
	}

	int getDivide(int a, int b) {
		if (b == 0) return 0;
		return (a / b);
	}

    int getZegop(int a) {
		return a * a;
	}

	int getSumSum(int a, int b, int c) {
		return a + b + c;
	}
};

TEST(TC, Gop) {
	Cal cal;
	int ret = cal.getGop(2, 3);
	EXPECT_EQ(ret, 6);
}

TEST(TC, SumTest) {
	Cal cal;
	int ret = cal.getSum(10, 20);
	EXPECT_EQ(30, ret);
}

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, getDivideTest) {
	Cal cal;
	int ret = cal.getDivide(1000, 10);
	EXPECT_EQ(ret, 1000/10);
}

TEST(SquareTest, GetSquare) {
	Cal cal;
	int num = 3;
	EXPECT_EQ(num * num, cal.getZegop(num));
}

TEST(TS, GETSUMSUMTC1) {
	Cal cal;
	int result = 0;
	result = cal.getSumSum(1, 2, 3);
	EXPECT_EQ(6, result);
}



int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}