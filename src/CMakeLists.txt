set(SOURCE_FILES
        nQueens.cpp)

set(HEADER_FILES
        nQueens.hpp)

add_library(nQueens STATIC ${SOURCE_FILES} ${HEADER_FILES})