#pragma once

#include <utility>

namespace cpb {

    /**
     * @brief Template container that holds a single value.
     * 
     * The Box class provides a simple way to wrap any type of value.
     * It's useful for value semantics and template programming.
     * 
     * @tparam T Type of value stored in the box.
     * 
     * @see Counter
     * @see math.hpp
     */
    template <typename T>
    class Box {
    public:
        /**
         * @brief Construct a Box with the given value.
         * 
         * @param value The value to store in the box.
         * 
         * @note The value is moved into the box if possible.
         * @warning The box takes ownership of the value.
         */
        explicit Box(T value)
            : value_(std::move(value)) {}

        /**
         * @brief Get the stored value.
         * 
         * @return const T& Reference to the stored value.
         * 
         * @pre The box must contain a value.
         * @post The returned reference remains valid as long as the box exists.
         */
        const T &get() const {
            return value_;
        }

        /**
         * @brief Create a Box from a value.
         * 
         * Factory method for creating Box instances.
         * 
         * @param value The value to store.
         * @return Box A new Box containing the value.
         * 
         * @since Version 1.0
         */
        static Box make(T value) {
            return Box(std::move(value));
        }
        
    private:
        T value_; ///< Internal storage for the value.
    };

} // namespace cpb
