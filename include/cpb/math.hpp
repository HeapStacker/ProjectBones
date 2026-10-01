#pragma once

namespace cpb {

    // Math Functions
    // Basic mathematical operations for integer arithmetic.

    /**
     * @brief Add two integers.
     * 
     * @param a First integer.
     * @param b Second integer.
     * @return int Sum of a and b.
     * 
     * @pre None.
     * @post Returns a + b.
     * @throws Never throws.
     */
    inline int add(int a, int b) {
        return a + b;
    }

    /**
     * @brief Get the maximum of two integers.
     * 
     * Returns the larger of the two input values.
     * If both values are equal, returns that value.
     * 
     * @param a First integer.
     * @param b Second integer.
     * @return int The maximum of a and b.
     * 
     * @since Version 1.0
     */
    int max(int a, int b);



} // namespace cpb
