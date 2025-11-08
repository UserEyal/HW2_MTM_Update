
#include "Utilities.h"

#include <string>


void exitWithError(MatamErrorType error) {
    std::string errMsg = "Matam Error: ";
    switch (error) {
        case MatamErrorType::UnmatchedSizes:
            errMsg += ("Unmatched matrices");
            break;
        case MatamErrorType::OutOfBounds:
            errMsg += ("Out of bounds");
            break;
        case MatamErrorType::NotSquareMatrix:
            errMsg += ("Matrix must be square to calculate determinant");
            break;
    }
    throw Exit(errMsg);
}
