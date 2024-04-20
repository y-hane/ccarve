#include <stdio.h>
#include "ccarve_inner.h"

/*
 * 1st %s: test function name
 * 2nd %d: line number
 * 3rd %s: predicate
 * ex) failed: test_function: 15: expected x == 3
 */
#define EXPECT_TRUE_FALSE_FAILED_MESSAGE "failed: %s(%d) expected %s\n"
#define EXPECT_COMPARE_FAILED_MESSAGE "failed: %s(%d) expected %s %s %s \n"

void expect_true_false_inner(
		const bool predicate,
		const char *func,
		const int line,
		const char *predicate_str)
{
	if (!predicate) {
		printf(EXPECT_TRUE_FALSE_FAILED_MESSAGE, func, line, predicate_str);
	}
}

void expect_compare_inner(
		const bool predicate,
		const char *func,
		const int line,
		const char *lhs,
		const char *operator,
		const char *rhs)
{
	if (!predicate) {
		printf(EXPECT_COMPARE_FAILED_MESSAGE, func, line, lhs, operator, rhs);
	}
}
