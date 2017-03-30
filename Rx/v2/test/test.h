#include <exception>
#if (__GLIBCXX__ / 10000) == 2014 || (__GLIBCXX__ / 10000) == 2015
namespace std {
inline bool uncaught_exception() noexcept(true) {
    return current_exception() != nullptr;
}
}
#endif

#include "rxcpp/rx-lite.hpp"

#include "rxcpp/rx-util.hpp"
#include "rxcpp/rx-sources.hpp"
#include "rxcpp/rx-operators.hpp"
#include "rxcpp/rx-subjects.hpp"
#include "rxcpp/rx-scheduler.hpp"
#include "rxcpp/rx-notification.hpp"

namespace rx=rxcpp;
namespace rxu=rxcpp::util;
namespace rxs=rxcpp::sources;
namespace rxo=rxcpp::operators;
namespace rxsub=rxcpp::subjects;
namespace rxsc=rxcpp::schedulers;
namespace rxn=rx::notifications;

#include "rxcpp/rx-test.hpp"
namespace rxt = rxcpp::test;

#include "catch.hpp"
