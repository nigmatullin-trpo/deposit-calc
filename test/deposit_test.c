#include <ctest.h>
#include <deposit.c>

CTEST(simpleSuite, simpleTest) 
{
	int res = InputSum(0);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}