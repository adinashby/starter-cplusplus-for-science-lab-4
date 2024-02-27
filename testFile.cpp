/* DO NOT MODIFY THIS FILE */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "labFile.hpp"

TEST_CASE("test1", "Calculate sum using a for loop") {
    REQUIRE(sumUsingForLoop(5) == 15);
    REQUIRE(sumUsingForLoop(10) == 55);
    REQUIRE(sumUsingForLoop(0) == 0);
}

TEST_CASE("test2", "Calculate factorial using a while loop") {
    REQUIRE(factorialUsingWhile(5) == 120);
    REQUIRE(factorialUsingWhile(0) == 1);
    REQUIRE(factorialUsingWhile(1) == 1);
    REQUIRE(factorialUsingWhile(10) == 3628800);
}

TEST_CASE("test3", "Print even numbers using a do-while loop") {
    // Redirect cout to a stringstream to capture output for testing
    std::stringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    printEvenNumbers(3, 10);
    
    // Restore cout buffer
    std::cout.rdbuf(oldCoutBuffer);

    REQUIRE(output.str() == "4 6 8 10 ");
}

TEST_CASE("test4", "Calculate Fibonacci sequence using a for loop") {
    // Redirect cout to a stringstream to capture output for testing
    std::stringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    fibonacci(8);

    // Restore cout buffer
    std::cout.rdbuf(oldCoutBuffer);

    REQUIRE(output.str() == "Fibonacci sequence up to term 8:\n0 1 1 2 3 5 8 13 ");
}


TEST_CASE("test5", "Print multiplication table using nested loops") {
    // Redirect cout to a stringstream to capture output for testing
    std::stringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    printMultiplicationTable(3);
    
    // Restore cout buffer
    std::cout.rdbuf(oldCoutBuffer);

    // Check the output
    std::string expectedOutput = "1 * 1 = 1\n1 * 2 = 2\n1 * 3 = 3\n1 * 4 = 4\n1 * 5 = 5\n1 * 6 = 6\n1 * 7 = 7\n1 * 8 = 8\n1 * 9 = 9\n1 * 10 = 10\n\n2 * 1 = 2\n2 * 2 = 4\n2 * 3 = 6\n2 * 4 = 8\n2 * 5 = 10\n2 * 6 = 12\n2 * 7 = 14\n2 * 8 = 16\n2 * 9 = 18\n2 * 10 = 20\n\n3 * 1 = 3\n3 * 2 = 6\n3 * 3 = 9\n3 * 4 = 12\n3 * 5 = 15\n3 * 6 = 18\n3 * 7 = 21\n3 * 8 = 24\n3 * 9 = 27\n3 * 10 = 30\n\n";
    REQUIRE(output.str() == expectedOutput);
}
