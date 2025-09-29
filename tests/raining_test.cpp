#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/raining.hpp"

using namespace std;


TEST_CASE("Add a business") {
    vector<string> businesses;

    addBusiness(businesses, "WalMart");
    REQUIRE(businesses.size() == 1);
    REQUIRE(businesses[0] == "WalMart");

    addBusiness(businesses, "JC Penney");
    REQUIRE(businesses.size() == 2);
    REQUIRE(businesses[1] == "JC Penney");
}

TEST_CASE("Sort businesses alphabetically") {
    vector<string> businesses = {"WalMart", "JC Penney", "Appleby's"};
    sortBusinesses(businesses);

    REQUIRE(businesses[0] == "Appleby's");
    REQUIRE(businesses[1] == "JC Penney");
    REQUIRE(businesses[2] == "WalMart");
}

TEST_CASE("Check shouldContinue") {
    REQUIRE(shouldContinue("y") == true);
    REQUIRE(shouldContinue("Y") == true);
    REQUIRE(shouldContinue("yes") == true);
    REQUIRE(shouldContinue("Yes") == true);

    REQUIRE(shouldContinue("n") == false);
    REQUIRE(shouldContinue("No") == false);
    REQUIRE(shouldContinue("anything else") == false);
}