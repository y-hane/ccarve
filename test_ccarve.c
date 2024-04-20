#include "ccarve.h"

void test_expect_true_false(void)
{
	expect_true(0 == 0);
	expect_true(0 == 1); // fail

	const int x = 0;
	expect_false(0 == 1);
	expect_false(x == 0); // fail
}

void test_expect_equal(void)
{
	expect_equal(3, 3);
	expect_equal(3, 4); // fail
	expect_equal(4, 3); // fail
}

void test_expect_less_than(void)
{
	expect_less_than(3, 4);
	expect_less_than(4, 4); // fail
	expect_less_than(4, 3); // fail	
}

void test_expect_less_than_or_equal(void)
{
	expect_less_than_or_equal(3, 4);
	expect_less_than_or_equal(3, 3);
	expect_less_than_or_equal(4, 3); // fail
}

void test_expect_greater_than(void)
{
	expect_greater_than(4, 3);
	expect_greater_than(4, 4); // fail
	expect_greater_than(3, 4); // fail
}

void test_expect_greater_than_or_equal(void)
{
	expect_greater_than_or_equal(4, 3);
	expect_greater_than_or_equal(4, 4);
	expect_greater_than_or_equal(3, 4); // fail
}

void test_expect_numerics(void)
{
	test_expect_true_false();
	test_expect_equal();
	test_expect_less_than();
	test_expect_less_than_or_equal();
	test_expect_greater_than();
	test_expect_greater_than_or_equal();
}

void test_expect_equal_string(void)
{
	expect_equal_string("hello", "hello");
	expect_equal_string("hello", "hello, world"); // fail
	expect_equal_string("say hello", "hello"); // fail
}

void test_expect_strings(void)
{
	test_expect_equal_string();
}

int main(void)
{
	test_expect_numerics();
	test_expect_strings();
	return 0;
}
