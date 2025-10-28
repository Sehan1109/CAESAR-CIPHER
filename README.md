🛡️ CAESAR-CIPHER in C
This is a command-line implementation of the Caesar Cipher, a simple substitution cipher. This project was developed as a 2nd-year, 2nd-semester Programming 2 assignment.

The program encrypts or decrypts a user-provided message using a specified integer shift key. The core logic is uniquely implemented using a circular queue data structure to handle the "wrap-around" of the alphabet.

📋 Features
Encryption: Takes a plaintext message and a shift key to produce ciphertext.

Decryption: Takes a ciphertext message and the original shift key to produce the original plaintext.

Case-Sensitivity: Correctly handles both uppercase (A-Z) and lowercase (a-z) letters.

Character Handling: Non-alphabetic characters (like spaces, punctuation, etc.) are ignored and passed through unchanged.

⚙️ Technical Implementation
This project is divided into three main components:

main.c: The main entry point. It handles all user interaction, such as:

Asking the user to choose encryption or decryption.

Reading the input message and the shift key.

Calling the appropriate logic function and printing the final result.

cipher_logic.c / cipher_logic.h: Contains the functions encryptMessage and decryptMessage. These functions iterate through the input string and apply the shift to each character one by one.

circular_queue.c / circular_queue.h: This is the core of the cipher.

A CircularQueue struct is defined with a fixed SIZE of 26 for the English alphabet.

initializeQueue fills the queue's data array with the letters 'A' through 'Z'.

shiftForward and shiftBackward perform the actual character manipulation. They calculate the new index in the alphabet using modulo arithmetic (%SIZE) to ensure the shift correctly wraps around (e.g., 'Z' + 1 becomes 'A').

🚀 How to Use
Compile the code:

Bash

gcc main.c -o caesar_cipher
Run the executable:

Bash

./caesar_cipher
Follow the prompts:

Encryption (E) or Decryption (D)?: E
Enter your message: Hello World
Enter shift key: 3
*****************************
Encrypted Message: Khoor Zruog
Encryption (E) or Decryption (D)?: D
Enter your message: Khoor Zruog
Enter shift key: 3
*****************************
Original Message: Hello World
