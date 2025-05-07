#include <stdio.h>

#include <string.h>

#include "cipher_logic.h"

// Encrypt message using Caesar Cipher and circular queue
void encryptMessage(const char *message, char *encrypted, int shift, CircularQueue *q) {

int i;

for (i = 0; message[i] != '\0'; i++) {

encrypted[i] = shiftForward(q, message [i], shift);

}

encrypted[i] = '\0';

}

// Decrypt message using Caesar Cipher and circular queue
void decryptMessage(const char *encrypted, char *original, int shift, Circular Queue *q) {

int i;

for (i = 0; encrypted[i] != '\0'; i++) {

original[i] = shiftBackward(q, encrypted[i], shift);

}

original[i] = '\0';

}
