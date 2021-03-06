#include <SI/detail/unit.h>

auto copy_ctor_same_ratio_test() {
  constexpr SI::detail::unit_t<'X', 1, int64_t, std::ratio<1>> v1{1};
  constexpr SI::detail::unit_t<'X', 1, int64_t, std::ratio<1>> v2{v1};

  return v2;
}
