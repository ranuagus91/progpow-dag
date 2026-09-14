#include "progpow-dag/work.h"

#include <cstdlib>
#include <iostream>

#define CHECK(cond)                                                          \
    do {                                                                     \
        if (!(cond)) {                                                       \
            std::cerr << "fail: " #cond " (" << __FILE__ << ":" << __LINE__  \
                      << ")\n";                                              \
            return 1;                                                        \
        }                                                                    \
    } while (0)

int main() {
    auto a = progpow::make_job("pool");
    auto b = progpow::make_job("pool");
    CHECK(a.id == b.id);
    CHECK(progpow::hash_nonce(a, 1) != progpow::hash_nonce(a, 2));
    CHECK(progpow::bench(8) == 8);
    CHECK(progpow::algo() != nullptr);
    std::cout << "ok\n";
    return 0;
}
