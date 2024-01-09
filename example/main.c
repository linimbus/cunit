
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdarg.h>

#include "Basic.h"
#include "CUnit.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"
{
#endif
#endif

void ctest_case1(void)
{
	CU_ASSERT(1);
}

void ctest_case2(void)
{
	CU_ASSERT(1);
}
	
CU_TestInfo ctest_cases[] = {
	{"ctest_case1", ctest_case1},
	{"ctest_case2", ctest_case2},  
	CU_TEST_INFO_NULL,
};

int cunit_init(void)
{
	return 0;
}

int cunit_cleanup(void)
{
	return 0;
}

CU_SuiteInfo suites[] = 
{
	{ "ctest", cunit_init, cunit_cleanup, ctest_cases },
	CU_SUITE_INFO_NULL,
};

int main (int argc, char *argv[])
{
    CU_initialize_registry();
	CU_register_suites(suites);

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();

	CU_cleanup_registry();

	return CU_get_error();
}

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif


