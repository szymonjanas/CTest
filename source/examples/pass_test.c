#include <stdio.h>

#include "test.h"

int main(){
    test_testing_begin();

        test_category_begin("Pass test");    
            test_scenario_begin("test assert");
                test_assert(true);
            test_scenario_begin("test assert array int");
                int arr_1[5] = {1,2,3,4,5};
                int arr_2[5] = {1,2,3,4,5};
                test_assert_array_int(arr_1, 5, arr_2, 5);
            test_scenario_begin("test assert comp int");
                test_assert_comp_int(5, 5);
            test_scenario_begin("test assert strs");
                test_assert_strs("Hello World!", "Hello World!");
            test_scenarios_end();
            test_scenarios_end();
        test_category_end();

        test_category_begin("Fail test");    
            test_scenario_begin("test assert");
                test_assert(false);
            test_scenario_begin("test assert array int");
                int arr_12[5] = {1,2,3,4,6};
                int arr_22[5] = {1,2,3,4,5};
                test_assert_array_int(arr_12, 5, arr_22, 5);
            test_scenario_begin("test assert comp int");
                test_assert_comp_int(5, 6);
            test_scenario_begin("test assert strs");
                test_assert_strs("Hello WorLd!", "Hello World!");
            test_scenarios_end();
        test_category_end();

    return test_testing_end();
}