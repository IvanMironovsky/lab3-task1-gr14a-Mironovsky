//
// Created by ivan Mironovsky
//

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char str1[MAX_LEN], str2[MAX_LEN], new_str[MAX_LEN];
    int len, i;

    printf("Enter two strings of equal length:\n");
    if(scanf("%s %s", str1, str2) == 1) {
      len = strlen(str1);

      for (i = 0; i < len; i++) {
        if (i % 2 == 0) {
            new_str[i] = str1[i];
        } else {
            new_str[i] = str2[i];
        }
      }

      printf("New string: %s\n", new_str);
    } else {
      printf("Failed to read.\n");
    }
    return 0;
}

