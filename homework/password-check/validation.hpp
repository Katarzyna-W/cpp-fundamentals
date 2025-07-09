#pragma once
#include <string>

enum class ErrorCode {Ok = 2, 
                    PasswordNeedsAtLeastNineCharacters = 3,
                    PasswordNeedsAtLeastOneNumber = 4, 
                    PasswordNeedsAtLeastOneSpecialCharacter = 5,
                    PasswordNeedsAtLeastOneUppercaseLetter = 6,
                    PasswordsDoNotMatch = 7};
                    
std::string getErrorMessage(ErrorCode code);
bool doPasswordsMatch(std::string p1, std::string p2);
ErrorCode checkPasswordRules(std::string p);
ErrorCode checkPassword(std::string p1, std::string p2);
