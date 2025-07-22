#include "gmock/gmock.h"

class Cal {
public : 
	// ÀÌ°÷¿¡ ÄÚµå ÀÛ¼º 
	int getMinus(int a, int b) { return a - b; }
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