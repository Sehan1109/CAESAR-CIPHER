#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include"circular_queue.c"
#include"cipher_logic.c"

#define MAX_LEN 1024

int main(){
  CircularQueue q;
  initializeQueue(&q);

  char choice;
  char message[MAX_LEN];
  char result[MAX_LEN];
  int shift;

  printf("Encryption (E) or Decryption (D)?: ");
  scanf("%c",&choice);  //space before %c to skip newline
  getchar();  //consume leftover newline

  if(choice !='E' && choice !='D' && choice !='e' && choice !='d'){
     printf("Invalid choice.Use'E'for encryption or'D'for decryption.\n");
     return 1;
  }

  printf("Enter your message:");
  fgets(message,MAX_LEN,stdin);
  message[strcspn(message,"\n")]='\0';  //remove trailing newline

  printf("Enter shift key:");
  scanf("%d",&shift);

  printf("*****************************\n");

  if(choice =='E' || choice =='e'){
     encryptMessage(message,result,shift,&q);
     printf("Encrypted Message:%s\n",result);
  }else{
     decryptMessage(message,result,shift,&q);
     printf("Original Message:%s\n",result);
  }

  return 0;
}
