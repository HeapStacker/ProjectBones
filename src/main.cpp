#include "cpb/box.hpp"
#include "cpb/color.hpp"
#include "cpb/counter.hpp"
#include "cpb/math.hpp"

#include <iostream>

/// Pokreni program i ispiši uzorke iz javnog API-ja.
int main() {
    std::cout << cpb::add(2, 3) << '\n';
    std::cout << cpb::max(2, 3) << '\n';

    cpb::Box<int> box = cpb::Box<int>::make(7);
    std::cout << box.get() << '\n';

    cpb::Counter counter;
    counter.bump();
    std::cout << counter.value() << '\n';
    std::cout << cpb::Counter::created() << '\n';

    std::cout << static_cast<int>(cpb::Color::Green) << '\n';
    system("pause");
    return 0;
}
