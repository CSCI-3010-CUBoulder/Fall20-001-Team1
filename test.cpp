#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Sum function test", "[Product]"){
  std::vector<double> nums = {1,2,3,4,5};//15
  REQUIRE( Product(nums) == 120);
  std::vector<double> nums_1 = {2,3,4,5,6};//20
  REQUIRE( Product(nums_1) == 720);
}
// adding commit
