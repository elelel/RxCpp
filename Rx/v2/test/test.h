#include <exception>
#if (__GLIBCXX__ / 10000) == 2014 || (__GLIBCXX__ / 10000) == 2015
namespace std {
inline bool uncaught_exception() noexcept(true) {
    return current_exception() != nullptr;
}
}
#endif

#include "rxcpp/rx-test.hpp"
namespace rxt = rxcpp::test;

#include "catch.hpp"
