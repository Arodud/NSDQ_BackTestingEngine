#include "parser.h"

BTE::Parser::Parser(const char* data, size_t size) : curr(data), end(data + size) {
    _mm_prefetch(data, _MM_HINT_T0);
}