
#pragma once

#include <stdexcept>

enum class MatamErrorType {
    UnmatchedSizes,
    OutOfBounds,
    NotSquareMatrix
};

using Exit = std::runtime_error;

void exitWithError(MatamErrorType error);
