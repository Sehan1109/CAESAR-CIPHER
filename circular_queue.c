#include <stdio.h>
#include "circular_queue.h"

//Initialize circular queue with A-Z
void initializeQueue(CircularQueue*q){
    q->front = 0;
    q->rear = SIZE-1;
    for(int i=0; i<SIZE; i++){
        q->dataa[i] = 'A'+i;
    }
}

// Shift character forward by 'shift' using circular logic
char shiftForward(CircularQueue*q, char ch, int shift){
    if(ch >= 'A' && ch <= 'Z'){
        int index = (ch-'A'+shift+SIZE);
        return q->data[index];
    } else if(ch >= 'a' && ch <= 'z'){
        int index = (ch-'a'+shift+SIZE)%SIZE;
        return q->data[index]+32;
    }else{
        return ch;
    }
}

//Shift character backward by 'shift' using circular logic
char shiftBackward(CircularQueue*q, char ch, int shift){
    return shiftForward(q, ch, -shift);
}
