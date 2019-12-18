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

    int tmp, UserCode; /* code inserted by user */

    int FDig, SDig, TDig, FrDig;

    printf("\nInsert four digit code to encrypt : "); scanf("%d", &UserCode);

     FrDig = (( UserCode / 1 ) % 10 + 7) % 10; /* fourth digit */

     TDig = (( UserCode / 10 ) % 10 + 7) % 10; /* third digit */

     SDig = (( UserCode / 100 ) % 10 + 7) % 10; /* second digit */

     FDig = (( UserCode / 1000 ) % 10 + 7) % 10; /* first digit */

    /* swap first digit with third digit*/
     tmp = FDig;

     FDig = TDig;

     TDig = tmp;

    /* swap second digit with fourth digit */
     tmp = SDig;

     SDig = FrDig;

     FrDig = tmp;

     /* follow instruction generate an encrypted four digit integer */

     UserCode = 0;

     UserCode += FDig;

     UserCode = (UserCode * 10) + SDig;

     UserCode = (UserCode * 10) + TDig;

     UserCode = (UserCode * 10) + FrDig;
    /* if case is needed in order to print a 0 as first digit */
    if(FDig == 0) printf("\nEncrypted code = %04d\n", UserCode);

    else printf("\nEncrypted code = %d\n", UserCode);

}