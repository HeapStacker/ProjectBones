#pragma once

namespace cpb {

    /**
     * @defgroup math Math Functions
     * @brief Basic mathematical operations.
     * 
     * This module provides fundamental mathematical functions
     * for integer arithmetic.
     * @{
     */

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
     * 
     * @example
     * @code
     * int result = cpb::add(2, 3); // 5
     * @endcode
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
     * @complexity O(1)
     * @since Version 1.0
     * 
     * @example
     * @code
     * int max_val = cpb::max(2, 5); // 5
     * int same_val = cpb::max(3, 3); // 3
     * @endcode
     */
    int max(int a, int b);

    /** @} */ // end of math group

} // namespace cpb
