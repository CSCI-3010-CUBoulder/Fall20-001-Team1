#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>


// adding commit
TES_CASE ("Sum function test", "[Sum]"){
  double<vector> nums = {1,2,3,4,5}//15
  REQUIRE( Sum(nums) == 120);
  double<vector> nums_1 = {2,3,4,5,6}//20
  REQUIRE( Sum(nums_1) == 720);
}
TES_CASE ("Product function test", "[Product]"){
  double<vector> nums = {1,2,3,4,5}//15
  REQUIRE( Product(nums) == 120);
  double<vector> nums_1 = {2,3,4,5,6}//20
  REQUIRE( Product(nums_1) == 720);
}
