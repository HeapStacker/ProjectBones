#include "cpb/counter.hpp"

namespace cpb {

int Counter::created_ = 0;

Counter::Counter() {
    ++created_;
}

void Counter::bump() {
    ++value_;
}

int Counter::value() const {
    return value_;
}

int Counter::created() {
    return created_;
}

}
