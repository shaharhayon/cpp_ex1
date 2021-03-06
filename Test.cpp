#include "doctest.h"
#include "snowman.hpp"

using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("Good snowman code")
{
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11111111) == string("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(snowman(22222222) == string(" ___ \n.....\n\\(o.o)/\n (] [) \n (\" \")"));
    CHECK(snowman(33333333) == string("  _  \n /_\\\n (O_O) \n/(> <)\\\n (___)"));
    CHECK(snowman(44444444) == string(" ___ \n(_*_)\n (- -)\n (   ) \n (   )"));
    CHECK(snowman(33232124) == string("  _  \n /_\\\n\\(o_O)\n (] [)>\n (   )"));
    CHECK(snowman(44242123) == string(" ___ \n(_*_)\n\\(o -)\n (] [)>\n (___)"));
    CHECK(snowman(41341144) == string(" ___ \n(_*_)\n (O,-)\n<(   )>\n (   )"));
    CHECK(snowman(12222212) == string("_===_\n\\(o.o)/\n ( : ) \n (\" \")"));
    CHECK(snowman(32443333) == string("  _  \n /_\\\n (-.-) \n/(> <)\\\n (___)"));
    CHECK(snowman(44444432) == string(" ___ \n(_*_)\n (- -)\n (> <)\n(\" \")"));
    CHECK(snowman(12341214) == string("_===_\n (O.-)/\n<( : )\n (   )"));
    CHECK(snowman(12344321) == string("_===_\n (O.-)\n (] [)\\\n ( : )"));
    CHECK(snowman(12333321) == string("_===_\n (O.O) \n/(] [)\\\n ( : )"));
}

TEST_CASE("Illegal digit number, legal digits")
{
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(12341));
    CHECK_THROWS(snowman(123412));
    CHECK_THROWS(snowman(1234123));
    CHECK_THROWS(snowman(123412341));
}

TEST_CASE("Legal digit number, illegal digits")
{
    CHECK_THROWS(snowman(55555555));
    CHECK_THROWS(snowman(66666666));
    CHECK_THROWS(snowman(77777777));
    CHECK_THROWS(snowman(88888888));
    CHECK_THROWS(snowman(99999999));
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(12345123));
}

TEST_CASE("Illegal digit number, illegal digits")
{
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(50));
    CHECK_THROWS(snowman(560));
    CHECK_THROWS(snowman(5670));
    CHECK_THROWS(snowman(56780));
    CHECK_THROWS(snowman(567890));
    CHECK_THROWS(snowman(5678905));
    CHECK_THROWS(snowman(56789056));
}
