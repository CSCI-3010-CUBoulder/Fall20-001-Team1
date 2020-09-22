#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>
using namespace std;

TEST_CASE ( "Factorials are computed", "[factorial]") {
  REQUIRE( Factorial(0) == 1 );
  REQUIRE( Factorial(1) == 1 );
  REQUIRE( Factorial(2) == 2 );
  REQUIRE( Factorial(3) == 6 );
  REQUIRE( Factorial(10) == 3628800 );
}
TES_CASE ("Sum function test", "[Sum]"){
  double<vector> nums = {1,2,3,4,5}//15
  REQUIRE( Sum(nums) == 15);
  double<vector> nums_1 = {2,3,4,5,6}//20
  REQUIRE( Sum(nums_1 == 20);
}
TES_CASE ("Sum function test", "[Product]"){
  double<vector> nums = {1,2,3,4,5}//15
  REQUIRE( Product(nums) == 120);
  double<vector> nums_1 = {2,3,4,5,6}//20
  REQUIRE( Product(nums_1 == 720);
}
TEST_CASE("incrementing values in integer vector", "[addN]"){
	std::vector<int> v{1,2,3,5,6,7,8,10};

	SECTION("checking with +ve n"){
		int n=5;
		std::vector<int> res = AddN(v, n);
		srand(time(NULL));
		int random = rand()%v.size();
		REQUIRE(v.size() == res.size());
		REQUIRE( res[0] == 6 );
		REQUIRE( res[v.size()-1] == 15 );
		REQUIRE(res[random] == v[random]+n);
	}
	SECTION("checking with -ve n"){
		int n=-5;
		std::vector<int> res = AddN(v, n);
		srand(time(NULL));
		int random = rand()%v.size();
		REQUIRE(v.size() == res.size());
		REQUIRE( res[0] == -4 );
		REQUIRE( res[v.size()-1] == 5 );
		REQUIRE(res[random] == v[random]+n);
	}
	
}
