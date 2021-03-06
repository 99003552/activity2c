#include <unity.h>
#include<test_unitconver.h>
#include<test_base.h>
#include<test_exponential.h>
#include<test_quadratic.h>
#include<test_revers.h>
#include<test_calculator_operations.h>
#include<test_trigno.h>
#include<test_logicaunittest.h>
//#include<test_statistcs.h>
/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

int main(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

    // Check primality function
    test_is_unitconv();
	 test_base();
	test_is_expo();
	test_revers();
	 test_calc();
	 test_is_trig();
	test_quadratic();
	test_logics();
	//test_statistics();
	 

	/* Close the Unity Test Framework */
	return UNITY_END();
}
