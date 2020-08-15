#include "unity.h"
#include "break_string.h"

//Required by the test unity framework
void setUp() {}

//Required by the unity framework
void tearDown() {}

void testing_break_string_4(void)
{
    char arr_4[6][15]={"my","name","is","edcast","future","skills"};
    TEST_ASSERT_EQUAL_PTR_ARRAY(arr_4, break_string("my_name_is_edcast_future_skills"),6);
}
void testing_break_string_2(void)
{
    char arr_2[4][15]={"Larsen","and","Toubro","Technology"};
    TEST_ASSERT_EQUAL_PTR_ARRAY(arr_2, break_string("Larsen_and_Toubro_Technology"),4);
}
void testing_break_string(void)
{
    char arr[3][15]={"Santhosh","Kumar","Kadaveru"};
    TEST_ASSERT_EQUAL_PTR_ARRAY(arr, break_string("Santhosh_Kumar_Kadaveru"),3);
}
void testing_break_string_3(void)
{
    char arr_3[2][15]={"Stepin","program"};
    TEST_ASSERT_EQUAL_PTR_ARRAY(arr_3, break_string("Stepin_program"),2);
}
int main(void)
{
    //Initiating the unity framework
    UNITY_BEGIN();
    RUN_TEST(testing_break_string_4);
    RUN_TEST(testing_break_string);
    RUN_TEST(testing_break_string_2);
    RUN_TEST(testing_break_string_3);
    return UNITY_END();
}
