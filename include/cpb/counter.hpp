#pragma once

namespace cpb {

    /**
     * @brief Counter with instance tracking.
     * 
     * The Counter class maintains an individual count and tracks
     * the total number of Counter instances created.
     * 
     * @details
     * This class is useful for counting events or objects while
     * also keeping track of how many counters exist in the system.
     */
    class Counter {
    public:
        /**
         * @brief Construct a Counter initialized to zero.
         * 
         * @post value() == 0
         * @post created() is incremented by 1
         */
        Counter();

        /**
         * @brief Increment the counter by one.
         * 
         * Increases the internal count by 1.
         * 
         * @post value() == old value() + 1
         */
        void bump();

        /**
         * @brief Get the current counter value.
         * 
         * @return int The current count.
         */
        int value() const;

        /**
         * @brief Get the total number of Counter instances created.
         * 
         * @return int Number of Counter objects constructed.
         * 
         * @note This count includes all instances, including destroyed ones.
         * @since Version 1.0
         */
        static int created();
        
    private:
        int value_ = 0; ///< Current counter value.
        static int created_; ///< Total instances created.
    };

} // namespace cpb
