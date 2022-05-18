
#include "acutest.h"
#include "logic.h"

void test_add()
{
	TEST_CHECK_(add(2,2)== 4 , "add(%d,%d)==%d" , 2,2,4);
}

TEST_LIST = {
	{"int add(int,int);" , test_add},
	{0}/*   */
};
