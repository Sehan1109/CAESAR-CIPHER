#ifndef CIPHER_LOGIC_H

#define CIPHER_LOGIC_H

#include "circular_queue.h"

void encryptMessage(const char *message, char *encrypted, int shift, CircularQueue *q);

void decryptMessage(const char *encrypted, char *original, int shift, Circular Queue *q);

#endif
