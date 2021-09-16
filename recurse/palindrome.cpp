#include <iostream>
#include <string>

using namespace std;

bool isPalindromebyRecurrence(string str) {

    int strLen = str.length();

    // if (strLen < 1){
    //     return false;
    // }

    if (strLen <= 1) {
        return true;
    }

    // if (strLen == 2) {
    //     return str[0] == str[1];
    // }

    if (str[0] == str[strLen - 1]) {
        return isPalindromebyRecurrence(str.substr(1, strLen - 2));
    }

    return false;

}

bool isPalindromeCharbyRecurrence(const char* str, int strLen) {

    if (strLen <= 1) {
        return true;
    }


    if (str[0] == str[strLen - 1]) {
        return isPalindromeCharbyRecurrence(str + 1, strLen - 2);
    }

    return false;

}

bool isPalindromebyStep(string str) {

    int strLen = str.length();
    bool isPalindrome = true;

    // if (strLen < 1){
    //     return false;
    // }

    if (strLen <= 1) {
        return true;
    }

    // if (strLen == 2) {
    //     return str[0] == str[1];
    // }

    for (int i = 0; i < strLen/2; i++) {
        if (str[i] != str[strLen - i - 1]){
            isPalindrome = false;
            break;
        }
    }

    return isPalindrome;


}

bool isPalindromeCharbyStep(const char* str, int strLen) {

    bool isPalindrome = true;

    if (strLen <= 1) {
        return true;
    }


    for (int i = 0; i < strLen/2; i++) {
        if (str[i] != str[strLen - i - 1]){
            isPalindrome = false;
            break;
        }
    }

    return isPalindrome;


}

int main()
{
    string isPalindrome = " is a palindrome";
    string notPalindrome = " is not a palindrome";

    const char* str = "";
    if (isPalindromeCharbyRecurrence(str, 0)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "a";
    if (isPalindromeCharbyRecurrence(str, 1)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "ab";
    if (isPalindromeCharbyRecurrence(str, 2)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "aba";
    if (isPalindromeCharbyRecurrence(str, 3)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "abba";
    if (isPalindromeCharbyRecurrence(str, 4)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "cccbccc";
    if (isPalindromeCharbyRecurrence(str, 7)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "aaaaa";
    if (isPalindromeCharbyRecurrence(str, 5)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    cout << "========================================" << endl;
    str = "";
    if (isPalindromeCharbyStep(str, 0)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "a";
    if (isPalindromeCharbyStep(str, 1)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "ab";
    if (isPalindromeCharbyStep(str, 2)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "aba";
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "abba";
    if (isPalindromeCharbyStep(str, 4)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "cccbccc";
    if (isPalindromeCharbyStep(str, 7)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "aaaaa";
    if (isPalindromeCharbyStep(str, 5)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }
}