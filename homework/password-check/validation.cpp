#include "validation.hpp"

std::string getErrorMessage(ErrorCode code) {
    switch (code) {
    case ErrorCode::Ok:
        return "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs to have at least nine characters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
    }
    return "-1";
}

bool doPasswordsMatch(std::string p1, std::string p2) {
    if (p1.empty() and p2.empty()) {
        return true;
    }
    if (p1.empty() or p2.empty()) {
        return false;
    }
    if (!p1.compare(p2)) {
        return true;
    } else {
        return false;
    }
}

ErrorCode checkPasswordRules(std::string p) {
    int max = 7;
    int min = 2;
    int randNum = rand() % (max - min + 1) + min;

    ErrorCode forRandomPurpose[] = {
        ErrorCode::Ok, ErrorCode::PasswordNeedsAtLeastNineCharacters,
        ErrorCode::PasswordNeedsAtLeastOneNumber,
        ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter,
        ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter};
    ErrorCode randomError = forRandomPurpose[randNum];
    return randomError;
}

ErrorCode checkPassword(std::string p1, std::string p2) {
    if (doPasswordsMatch(p1, p2)) {
        return checkPasswordRules(p1);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}
