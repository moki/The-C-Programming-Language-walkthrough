#include <stdio.h>
#include <math.h>

int hexDic(char hex);
int hex2int(char string[]);

int main() {
  char hexademical[] = "0xAF3";
  int result;

  result = hex2int(hexademical);

  if (result > 0) {
    printf("hexademical value: %s converted to decimal: %d\n", hexademical, result);
  } else {
    return -1;
  }

  return 0;
}

int hex2int(char string[]) {
  int i, isPrefixed;

  i = 0;

  while (string[i] != '\0') {
    ++i;
  }

  /*
     check if value is prefixed with 0x or 0X
  */
  if (i > 2 && string[0] == '0' && (string[1] == 'x' || string[1] == 'X')) {
    isPrefixed = 1;
  } else {
    isPrefixed = 0;
  }

  int left, right;

  /*
     if prefixed set length 2 positions shorter, define it as right
     and also set offset of 2 positions, define it as left
     => now we know hex value should be (between 2) and (length of the string - 2)
  */
  if (isPrefixed) {
    left = 2;
    right = left + i - 2;
  } else {
    left = 0;
    right = i;
  }

  int isValidHex;

  isValidHex = 1;

  /*
     Check if it's a valid hex string.
  */
  while (left < right) {
    if (!(string[left] >= '0' && string[left] <= '9' ||
        string[left] >= 'A' && string[left] <= 'F' ||
        string[left] >= 'a' && string[left] <= 'f')) {
      isValidHex = 0;
    }
    
    ++left;
  }

  if (!isValidHex) {
    printf("provided string isn't hexademical value\n");
    return -1;
  }

  /*
     Reset left and right check 41-45 line comments.
  */
  if (isPrefixed) {
    left = 2;
    right = left + i - 2;
  } else {
    left = 0;
    right = i;
  }

  int result;

  result = 0;
  
  /*
     Convert hex string to int
  */
  while (left < right) {
    result += hexDic(string[left]) * (int) pow(16, right - left - 1);

    ++left;
  }

  return result;
}

int hexDic(char hex) {
  if (hex >= '0' && hex <= '9') {
    return hex - '0';
  } else if (hex >= 'A' && hex <= 'F') {
    return 10 + hex - 'A';
  } else if (hex >= 'a' && hex <= 'f') {
    return 10 + hex - 'a';
  }

  return -1;
}