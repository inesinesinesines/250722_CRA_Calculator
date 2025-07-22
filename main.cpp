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
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(SquareTest, GetSquare) {
	Cal cal;
	int num = 3;
	EXPECT_EQ(num * num, cal.getZegop(num));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}