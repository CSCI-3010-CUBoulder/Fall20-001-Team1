#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>


// adding commit
TEST_CASE ("Sum function test", "[Sum]"){
  double<vector> nums = {1,2,3,4,5}//15
  REQUIRE( Sum(nums) == 15);
}

