#pragma once

namespace cpb {

    /// Brojač s brojem stvorenih primjeraka.
    class Counter {
    public:
        /// Stvori brojač na nuli.
        Counter();

        /// Povećaj vrijednost za jedan.
        void bump();

        /// Trenutna vrijednost ovog brojača.
        int value() const;

        /// Koliko je Counter objekata stvoreno.
        static int created();
    private:
        int value_ = 0;
        static int created_;
    };

} // namespace cpb
