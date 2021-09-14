#include <iostream>
#include <string>

using namespace std;

bool isPalindromebyRecurrence(string str) {

    int strLen = str.length();

    if (strLen < 1){
        return false;
    }

    if (strLen == 1) {
        return true;
    }

    if (strLen == 2) {
        return str[0] == str[1];
    }

    if (str[0] == str[strLen - 1]) {
        return isPalindromebyRecurrence(str.substr(1, strLen - 2));
    }

    return false;


}

bool isPalindromebyStep(string str) {

    int strLen = str.length();
    bool isPalindrome = true;

    if (strLen < 1){
        return false;
    }

    if (strLen == 1) {
        return true;
    }

    if (strLen == 2) {
        return str[0] == str[1];
    }

    for (int i = 0; i < strLen/2; ++i) {
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

    string str = "";
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "a";
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "ab";
    if (isPalindromebyRecurrence(str)) {
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
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "cccbccc";
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "aaaaa";
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    cout << "========================================" << endl;
    str = "";
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "a";
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "ab";
    if (isPalindromebyRecurrence(str)) {
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
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "cccbccc";
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }

    str = "aaaaa";
    if (isPalindromebyRecurrence(str)) {
        cout << str << isPalindrome << endl;
    }
    else {
        cout << str << notPalindrome << endl;
    }
}