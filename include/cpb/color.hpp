#pragma once

namespace cpb {

    /**
     * @defgroup utilities Utility Classes
     * @brief General-purpose utility classes and types.
     * 
     * This module provides various utility classes for common tasks.
     * @{
     */

    /**
     * @brief Color enumeration for common colors.
     * 
     * This enum provides named constants for basic colors.
     * Useful for configuration, settings, or simple color coding.
     * 
     * @ingroup utilities
     * 
     * @since Version 1.0
     * 
     * @example
     * @code
     * cpb::Color favorite = cpb::Color::Green;
     * int value = static_cast<int>(favorite); // 1
     * @endcode
     */
    enum class Color {
        Red,    ///< Red color (value 0).
        Green,  ///< Green color (value 1).
        Blue    ///< Blue color (value 2).
    };

    /** @} */ // end of utilities group

} // namespace cpb
