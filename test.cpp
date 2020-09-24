#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>
using namespace std;

// adding commit
TEST_CASE ("Sum function test", "[Sum]"){
  vector<double> nums = {1.0,2.0,3.0,4.0,5.0};//15
  REQUIRE( Sum(nums) == 15.0);
}

