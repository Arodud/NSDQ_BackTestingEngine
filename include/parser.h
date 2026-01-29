#pragma once


#include <cstdint>
#include <type_traits>
#include <array>
#include <immintrin.h>


namespace BTE {

    struct alignas(64) Parser {
        const char* curr;
        const char* end;

        Parser(const char* data, size_t size);
        
    };
}