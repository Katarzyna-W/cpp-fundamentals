#include "validation.hpp"

std::string getErrorMessage(ErrorCode code){
    switch (code){
        case ErrorCode::Ok: return "Ok";
        break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters: 
        return "Password needs at least nine characters";
        break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber: 
        return "Password needs at least one number";
        break;
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: 
        return "Password needs at least one special character";
        break;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: 
        return "Password needs at least one uppercase letter";
        break;
        case ErrorCode::PasswordsDoNotMatch: 
        return "Passwords do not match";
        break;
    }
    return "-1";
}

bool doPasswordsMatch(std::string p1, std::string p2){
    if (p1.empty() and p2.empty()) {
        return true;
    }
    if (p1.empty() or p2.empty()) {
        return false;
    }
    if (!p1.compare(p2)) {
        return true;
    } 
    return false;
}

ErrorCode checkPasswordRules(std::string p){
    int max = 7;
    int min = 2;
    int randNum = rand() % (max - min + 1) + min;

    ErrorCode forRandomPurpose[] = {ErrorCode::Ok, ErrorCode::PasswordNeedsAtLeastNineCharacters, 
            ErrorCode::PasswordNeedsAtLeastOneNumber,ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, 
            ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter};
    ErrorCode randomError = forRandomPurpose[randNum];
    return randomError;
}

ErrorCode checkPassword(std::string p1, std::string p2){
    if (doPasswordsMatch(p1, p2)) {
        return checkPasswordRules(p1);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}
