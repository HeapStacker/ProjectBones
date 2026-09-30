#pragma once

#include <utility>

namespace cpb {

    /// Kutija koja drži jednu vrijednost.
    template <typename T>
    class Box {
    public:
        /// Spremi danu vrijednost.
        explicit Box(T value)
            : value_(std::move(value)) {}

        /// Vrati spremljenu vrijednost.
        const T &get() const {
            return value_;
        }

        /// Napravi kutiju iz vrijednosti.
        static Box make(T value) {
            return Box(std::move(value));
        }
    private:
        T value_;
    };

} // namespace cpb
