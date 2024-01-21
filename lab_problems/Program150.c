/* Write a program to encode the following string such that it gets converted into an unrecognizable form. Also write a decode function to get back the original string.

"Man's reach must always exceed his grasp.... or what is the heaven for?"*/
#include<stdio.h>

void encode(char *str,int key);
void decode(char *str,int key);

int main() {
    char str[100];
    printf("Enter the string:\n");
    fgets(str,80,stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    int key;
    printf("Enter the key by it is to be encoded= ");
    scanf("%d",&key);

    printf("Original String: %s\n", str);

    // Encoding
    encode(str, key);
    printf("Encoded String: %s\n", str);

    // Decoding
    decode(str, key);
    printf("Decoded String: %s\n", str);

}

void encode(char *str, int key) {
    for (int i = 0; str[i] != '\0'; ++i) {
        // if (str[i] >= 'A' && str[i] <= 'Z') {
        //     str[i] = (str[i] + key - 'A') % 26 + 'A';
        // } else if (str[i] >= 'a' && str[i] <= 'z') {
        //     str[i] = (str[i] + key - 'a') % 26 + 'a';
        // }
        str[i]=str[i]+key;
    }
}

void decode(char *str, int key) {
    encode(str, -key); // Decoding is the same as encoding with the inverse key
}
