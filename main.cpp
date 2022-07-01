/* ************************************************************************************************ */	
/*    _______              ______ _           ______  _______ _______     ______ _           _ _  	*/
/*   (_______)     _      / _____) |         (_____ \(_______|_______)   / _____) |         | | | 	*/
/*    _    _| |_ _| |_   ( (____ | |__  _____  ____) )______  ______    ( (____ | |__  _____| | |	*/ 
/*	 | |  (_   _|_   _)   \____ \|  _ \(____ |/ ____/(_____ \|  ___ \    \____ \|  _ \| ___ | | |   */
/*   | |____|_|   |_|     _____) ) | | / ___ | (_____ _____) ) |___) )   _____) ) | | | ____| | | 	*/
/*	 \______)            (______/|_| |_\_____|_______|______/|______/   (______/|_| |_|_____)\_)_) 	*/
/* 																			 					  	*/
/* 	 By Skyx [ID FR] **_** 	-  <skyx-fr@pm.me> 							  					  	    */
/* 																			 					  	*/
/* ************************************************************************************************ */

/* To your information, build and run command :
   g++ sha256_encryption_functions\aux_hash_function.cpp main.cpp -o output.exe

   Colored text in C++ :
   https://stackoverflow.com/questions/4053837/colorizing-text-in-the-console-with-c
*/

#include <iostream>
#include <iso646.h>
#include <string>
#include <stdio.h>

/* Include sha256 main extension file : */
#include "sha256_encryption_functions/main_hash_function.h"
 
using std::string;
using std::cout;
using std::endl;

void welcome_banner() {
	system("cls");
	printf("\033[1;44;37m\n --------- | C++ Sha256 Encrypt/Decrypt Shell Script | --------- \n\n\033[0m");
}

void end_message() {
	printf("\x1B[31m[EXIT]\033[0m Bye ! \n\n");

	/* Text in colors in C++ : 
    printf("\x1B[93mYellow\033[0m"); */
}


int main(int argc, char const *argv[]) {
	int choice_num;

	while (true) {
  		welcome_banner();

	 	printf("1- Generate sha256 key from text. \n2- Exit \n\nYour answer : ");
	 	scanf("%d", &choice_num);

		/* If statements to determinated what user enter : */
		if (choice_num == 1) {
			char key[255];
			printf("Enter your text : ");
			scanf("%s", key);

			/* SHA256 key hash section : */
			string input = key;
			string hash_key = sha256(input);
			cout << "\n\x1B[32m[SUCESS]\033[0m Your text ("<< key << ") : " << hash_key << endl;

			system("pause");
			/* end_message(); */

		} else if (choice_num == 2) {
			end_message();
			return 0;
		} else {
			printf("\nSorry.. :/ \nNo options avaible for : ");
			printf("\x1B[31m%d\033[0m !\n\n", choice_num);
			system("pause");
			end_message();
		}	
	} 
	return 0;
}

/* 
To an third option (decryption of message in sha256) :
	else if (choice_num == 3) {
				printf("You choose the third option !\n");
				system("pause");

	} 
*/