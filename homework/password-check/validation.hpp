#pragma once
#include <enum>
#include <function>

enum class ErrorCode {Ok = 2, 
                    PasswordNeedsAtLeastNineCharacters = 3,
                    PasswordNeedsAtLeastOneNumber = 4, 
                    PasswordNeedsAtLeastOneSpecialCharacter = 5,
                    PasswordNeedsAtLeastOneUppercaseLetter = 6,
                    PasswordsDoNotMatch = 7};
                    
std::string getErrorMessage(const & enum class code);
bool doPasswordsMatch(std::string p1, std::string p2);
enum class checkPasswordRules(std::string p);
enum class checkPassword(std::string p1, std::string p2);
