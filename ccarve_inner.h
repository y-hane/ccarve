#ifndef CCARVE_CCARVE_INNER_H
#define CCARVE_CCARVE_INNER_H
#include <stdbool.h>

void expect_true_false_inner(
		const bool predicate,
		const char *func,
		const int line,
		const char *predicate_str);
void expect_compare_inner(
		const bool predicate,
		const char *func,
		const int line,
		const char *lhs,
		const char *operator,
		const char *rhs);

#endif
