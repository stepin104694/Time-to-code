#include "unity.h"
#include "break_string.h"

//Required by the test unity framework
void setUp() {}

//Required by the unity framework
void tearDown() {}

void testing_break_string(void)
{
    char arr[3][15]={"Larsen","and","Toubro"};
    TEST_ASSERT_EQUAL_STRING_ARRAY(arr, break_string("Larsen_and_Toubro"),3);
}
int main(void)
{
    //Initiating the unity framework
    UNITY_BEGIN();
    RUN_TEST(testing_break_string);
    return UNITY_END();
}
