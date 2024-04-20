#ifndef CCARVE_CCARVE_H
#define CCARVE_CCARVE_H
#include <string.h>
#include "ccarve_inner.h"

/**
 * expect_true/false
 * @brief Check the value is as expected or not.
 * @param predicate you expected to be true/false.
 * @detail
 * If the value is defferent from the expected value, output the details.
 * If the value is as expected, do nothing.
 */
#define expect_true(predicate) \
	expect_true_false_inner(predicate, __func__, __LINE__, #predicate)

#define expect_false(predicate) \
	expect_true_false_inner(!predicate, __func__, __LINE__, #predicate)

/**
 * expect compare
 * @brief Check the comparison expression is true or false.
 * @param lhs left side of the comparison expression.
 * @param rhs right side of the comparison expression.
 * @detail
 * If the comparison expression is false, output the details.
 * If the comparison expression is true, do nothing.
 * @todo Make it available for double.
 */
#define expect_equal(lhs, rhs) \
	expect_compare_inner(lhs == rhs, __func__, __LINE__, #lhs, "==", #rhs)

#define expect_less_than(lhs, rhs) \
	expect_compare_inner(lhs < rhs, __func__, __LINE__, #lhs, "<", #rhs)

#define expect_less_than_or_equal(lhs, rhs) \
	expect_compare_inner(lhs <= rhs, __func__, __LINE__, #lhs, "<=", #rhs)

#define expect_greater_than(lhs, rhs) \
	expect_compare_inner(lhs > rhs, __func__, __LINE__, #lhs, ">", #rhs)

#define expect_greater_than_or_equal(lhs, rhs) \
	expect_compare_inner(lhs >= rhs, __func__, __LINE__, #lhs, ">=", #rhs)

#define expect_equal_string(lhs, rhs) \
	expect_compare_inner(strcmp(lhs, rhs) == 0, __func__, __LINE__, #lhs, "==", #rhs)

#endif // #ifndef CCARVE_CCARVE_H
