#include "gmock/gmock.h"

class Cal {
public : 
	// ÀÌ°÷¿¡ ÄÚµå ÀÛ¼º 
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

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
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