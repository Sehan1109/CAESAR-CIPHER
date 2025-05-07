#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#define SIZE 26 // English alpahabet

// Circular Queue structure
typedef struct {
    char data[SIZE];
    int front;
    int rear;
}CircularQueue;

void initializeQueue(CircularQueue*q);
char shiftForward(CircularQueue*q, char ch, int shift);
char shiftBackward(CircularQueue*q, char ch, int shift);

#endif // CIRCULAR_QUEUE_H
