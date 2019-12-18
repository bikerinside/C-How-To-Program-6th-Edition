/*

3.49 

(Enforcing Privacy with Cryptography) The explosive growth of Internet communications
and data storage on Internet-connected computers has greatly increased privacy concerns. 
The field of cryptography is concerned with coding data to make it difficult
(and hopefully—with the most advanced schemes—impossible) for unauthorized users to read. 
In this exercise you’ll investigate a simple scheme for encrypting and decrypting data. 
A company that wants to send data over the Internet has asked you to write a program that will 
encrypt it so that it may be transmitted more securely.
All the data is transmitted as four-digit integers. Your application should read a four-digit
integer entered by the user and encrypt it as follows: Replace each digit with the result of adding 7
to the digit and getting the remainder after dividing the new value by 10. 
Then swap the first digit with the third, and swap the second digit with the fourth. 
Then print the encrypted integer. Write a separate application that inputs an encrypted 
four-digit integer and decrypts it (by reversing the encryption scheme) to form the original 
number. [Optional reading project: Research “public key cryptography” in general and the PGP 
(Pretty Good Privacy) specific public key scheme. 
You may also want to investigate the RSA scheme, which is widely used in industrial-strength applications.]

*/

#include <stdio.h>

int main()

{

    int tmp, UserCode, Busercode; /* code inserted by user */

    int FDig, SDig, TDig, FrDig;

    printf("Insert four digit code to encrypt : "); scanf("%d", &UserCode);

    Busercode = UserCode;

     FrDig = (( Busercode / 1 ) % 10 + 7) % 10; /* quarta cifra */

     TDig = (( Busercode / 10 ) % 10 + 7) % 10; /* terza cifra */

     SDig = (( Busercode / 100 ) % 10 + 7) % 10; /* seconda cifra */

     FDig = (( Busercode / 1000 ) % 10 + 7) % 10; /* prima cifra */

    /* swap first digit with third digit*/
     tmp = FDig;

     FDig = TDig;

     TDig = tmp;

    /* swap second digit with fourth digit */
     tmp = SDig;

     SDig = FrDig;

     FrDig = tmp;

     /* follow instruction generate an encrypted four digit integer */

     Busercode = 0;

     Busercode += FDig;

     Busercode = (Busercode * 10) + SDig;

     Busercode = (Busercode * 10) + TDig;

     Busercode = (Busercode * 10) + FrDig;


    if(FDig == 0) printf("\nCode inserted = %d  - Encrypted code = %04d\n", UserCode, Busercode);

    else printf("\nCode inserted = %d  - Encrypted code = %d\n", UserCode, Busercode);

}