#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


void errorMessage();
void menuExit();

main() {
	
	bool back = true; //Checking if input amount is suffcient from the balance
    int option; //For the main menu
    float zee_balance, zach_balance, ivan_balance;
    int choose; //For the another transaction menu

//PIN declaration of variables
	char pin[6];
	int c = 1;
	int i = 1;
	int flag = 1;
	
FILE *fptr;

mainMenu:
	system ("CLS");
	system ("color 0a");
	
	printf("                                                                    \n");
	printf("                                                                    \n");
	printf("                                                                    \n");
	printf("                                                                    \n");
	printf("                                                                    \n");
	printf("                                                                    \n");
	printf("                                     ******************Hello!*******************\n");
    printf("                                     ***********Welcome to AZIF Banks***********\n");
    printf("                                     ******Choose one of the options below******\n\n");
    printf("                                     < 1 >  Check Balance\n");
    printf("                                     < 2 >  Deposit\n");
    printf("                                     < 3 >  Withdraw\n");
    printf("                                     < 4 >  Transfer\n");
    printf("                                     < 5 >  Exit\n");
	printf("                                     =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("                                     Your Selection:\t");
    scanf("%d", &option);
    
        switch (option) {
            case 1:
            	system("CLS");
                goto checkBalance;
                break;
            case 2:
            	system("CLS");
                goto moneyDeposit;
                break;
                
            case 3:
            	system("CLS");
                goto moneyWithdraw;
                break;

            case 4:
            	system("CLS");
                goto moneyTransfer;
                break;
                
            case 5:
            	system("CLS");
            	menuExit();
            	return 0;

            default:
            	errorMessage();
                break;
        }
        
//////////////////////////////////////////////////////////////////////////////

checkBalance:
	
	//PIN SYSTEM
	checkBalanceStart:
		
		system("cls");
		printf("Enter your 6-Digit PIN : ");
		scanf("%s", &pin);
			
		while (flag == 1)
			if (strcmp(pin, "111111") == 0) {
				goto zeeCheckBalance;
			} else if (strcmp(pin, "222222") == 0) {
				goto zachCheckBalance;
			} else if (strcmp(pin, "333333") == 0) {
				goto ivanCheckBalance;
			} else {
				flag = 1;
				printf("\n\nINVALID PIN");
				Sleep(500);
				i++;
					if (i >= 4) {
					printf("\n\nCARD CONFISCATED");
					exit(0);
					}
					else {
						goto checkBalanceStart;
					}
			}
	
	
    //FONZEE CHECK BALANCE
    zeeCheckBalance:
    	system("cls");
    	//READING
    	
		fptr = fopen ("zee_balance.txt","r");
		
		fscanf(fptr,"%f", &zee_balance);
		
		printf("                 __________________________________________________________________ \n");
		printf("                |                          AZIF BANK                               |\n ");
		printf("               |DATE                        TIME                  LOCATION        | \n");
		printf("                |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("                |                                                                  | \n");
		printf("                |CARD NUMBER                                   AMOUNT              | \n");
		printf("                |******************                        **************          | ");
		printf("\n                |                                                                  | \n");
		printf("                |TRANSACTION                                  FROM                 | \n");
		printf("                |CHECK BALANCE                                ************         | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |TOTAL BALANCE                                                     |\n ");
		printf("               |$%.2f\n", zee_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |AVAILABLE BALANCE                                                 | \n");
		printf("                |$%.2f\n", zee_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |                                                                  | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("                __________________________________________________________________ \n ");	
		fclose(fptr);
		
		// ANOTHER TRANSACTION MENU
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
        
        if (choose == 1){
        	goto mainMenu;
		}
		else if (choose == 2){
			system("cls");
			menuExit();
		}
		
	return 0;
		
	//ZACH CHECK BALANCE
	zachCheckBalance:
    	
    	system("cls");
    	
    	//READING
    	
		fptr = fopen ("zach_balance.txt","r");
		
		fscanf(fptr,"%f", &zach_balance);
		printf("                 __________________________________________________________________ \n");
		printf("                |                          AZIF BANK                               |\n ");
		printf("               |DATE                        TIME                  LOCATION        | \n");
		printf("                |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("                |                                                                  | \n");
		printf("                |CARD NUMBER                                   AMOUNT              | \n");
		printf("                |******************                        **************          | ");
		printf("\n                |                                                                  | \n");
		printf("                |TRANSACTION                                  FROM                 | \n");
		printf("                |CHECK BALANCE                                ************         | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |TOTAL BALANCE                                                     |\n ");
		printf("               |$%.2f\n", zach_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |AVAILABLE BALANCE                                                 | \n");
		printf("                |$%.2f\n", zach_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |                                                                  | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("                __________________________________________________________________ \n ");
		
		fclose(fptr);
		
		// ANOTHER TRANSACTION MENU
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
        
        if (choose == 1){
        	goto mainMenu;
		}
		else if (choose == 2){
			system("cls");
			menuExit();
		}
		
	return 0;
		
	//IVAN CHECK BALANCE
	ivanCheckBalance:
    	
    	system("cls");
    	
    	//READING
    	
		fptr = fopen ("ivan_balance.txt","r");
		
		fscanf(fptr,"%f", &ivan_balance);
		printf("                 __________________________________________________________________ \n");
		printf("                |                          AZIF BANK                               |\n ");
		printf("               |DATE                        TIME                  LOCATION        | \n");
		printf("                |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("                |                                                                  | \n");
		printf("                |CARD NUMBER                                   AMOUNT              | \n");
		printf("                |******************                        **************          | ");
		printf("\n                |                                                                  | \n");
		printf("                |TRANSACTION                                  FROM                 | \n");
		printf("                |CHECK BALANCE                                ************         | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |TOTAL BALANCE                                                     |\n ");
		printf("               |$%.2f\n", ivan_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |AVAILABLE BALANCE                                                 | \n");
		printf("                |$%.2f\n", ivan_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |                                                                  | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("                __________________________________________________________________ \n ");
		
		fclose(fptr);
		
		// ANOTHER TRANSACTION MENU
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
        
        if (choose == 1){
        	goto mainMenu;
		}
		else if (choose == 2){
			system("cls");
			menuExit();
		}
		
	return 0;

/////////////////////////////////////////////////////////////////////////////////////////////////

moneyTransfer:
	
	float zee_transfer, zach_transfer, ivan_transfer;
	int transferOption;
	
	//PIN SYSTEM
	moneyTransferStart:
		
		system("cls");
		printf("Enter your 6-Digit PIN : ");
		scanf("%s", &pin);
			
		while (flag == 1)
			if (strcmp(pin, "111111") == 0) {
				goto zeeMoneyTransfer;
			} else if (strcmp(pin, "222222") == 0) {
				goto zachMoneyTransfer;
			} else if (strcmp(pin, "333333") == 0) {
				goto ivanMoneyTransfer;
			} else {
				flag = 1;
				printf("\n\nINVALID PIN");
				Sleep(500);
				i++;
					if (i >= 4) {
					printf("\n\nCARD CONFISCATED");
					exit(0);
					}
					else {
						goto moneyTransferStart;
					}
			}
			
	
	//////////////////// FONZEE MONEY TRANSFER ////////////////////
	zeeMoneyTransfer:
	
		system("cls");
		printf("Choose which account to give to : ");
		printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("< 1 > Zach\n");
        printf("< 2 > Ivan\n");
		scanf("%d", &transferOption);
		
		switch(transferOption){
			case 1:
				goto zeeToZach;
				break;
				
			case 2:
				goto zeeToIvan;
				break;
			
			default:
				errorMessage();
				break;
		}
		
		zeeToZach: /////////////////////////////////////////
			
			//READING (SHOW BALANCE OF ORIGINAL ACCOUNT)
				system("CLS");				
				fptr = fopen ("zee_balance.txt","r");
				fscanf(fptr,"%f", &zee_balance);
				
				printf("\n\n****Your Available Balance is:   $%.2f\n\n", zee_balance);
				
				fclose(fptr);
			
			//WRITING (PUTTING INPUT TRANSFER AMOUNT)
				back = true;
				while (back) {

					printf("****Enter your amount to transfer: ");
					scanf ("%f", &zee_transfer);
		
					fptr = fopen ("zee_balance.txt", "r");
					fscanf (fptr, "%f", &zee_balance);
					fclose (fptr);
						
					if (zee_transfer < zee_balance) {
						back = false;
						
						//WITHDRAW FROM MY ACCOUNT
						fptr = fopen ("zee_balance.txt", "w");
						
						zee_balance -= zee_transfer;
				
						fprintf(fptr, "%f", zee_balance);
						fclose (fptr);
						
						//DEPOSIT TO OTHER ACCOUNT
						fptr = fopen ("zach_balance.txt", "r");
						fscanf (fptr, "%f", &zach_balance);
						fclose (fptr);
						
						fptr = fopen ("zee_balance.txt", "r");
						fscanf (fptr, "%f", &zee_balance);
						
						fptr = fopen ("zach_balance.txt", "w");
						
						zach_balance += zee_transfer;
					
						fprintf(fptr, "%f", zach_balance);
						fclose (fptr);
						
						system("cls");
						printf("\nZach's new balance is: $%.2f\n", zach_balance);
		printf("                 __________________________________________________________________ \n");
		printf("                |                          AZIF BANK                               |\n ");
		printf("               |DATE                        TIME                  LOCATION        | \n");
		printf("                |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("                |                                                                  | \n");
		printf("                |CARD NUMBER                                   AMOUNT              | \n");
		printf("                |******************                           $%.2f", zee_transfer );
		printf("\n                |                                                                  | \n");
		printf("                |TRANSACTION                                  FROM                 | \n");
		printf("                |TRANSFER                                     FONZEE               | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |TOTAL BALANCE                                                     |\n ");
		printf("               |$%.2f\n", zee_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |AVAILABLE BALANCE                                                 | \n");
		printf("                |$%.2f\n", zee_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |                                                                  | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("                __________________________________________________________________ \n ");
						
					}
					
					else {
						system ("CLS");			
						printf("+++You don't have enough money+++\n");
				        printf("Please contact to your Bank Customer Services\n");
				        printf("****Your Balance is:   $%.2f\n\n", zee_balance);
				        Sleep(2000);
					}
				}
		
			// ANOTHER TRANSACTION MENU
				printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
				printf("Would you like to do another transaction:\n");
				printf("< 1 > Yes\n");
			    printf("< 2 > No\n");
			    scanf("%d", &choose);
			        
			    if (choose == 1){
			    	system("cls");
			        goto mainMenu;
				}
				else if (choose == 2){
					system("cls");
					menuExit();
				}
				
		zeeToIvan: /////////////////////////////////////////
			
			//READING (SHOW BALANCE OF ORIGINAL ACCOUNT)
				system("CLS");
				fptr = fopen ("zee_balance.txt","r");
				fscanf(fptr,"%f", &zee_balance);
				
				printf("\n\n****Your Available Balance is:   $%.2f\n\n", zee_balance);
				
				fclose(fptr);
			
			//WRITING (PUTTING INPUT TRANSFER AMOUNT)
				back = true;
				while (back) {

					printf("****Enter your amount to transfer: ");
					scanf ("%f", &zee_transfer);
		
					fptr = fopen ("zee_balance.txt", "r");
					fscanf (fptr, "%f", &zee_balance);
					fclose (fptr);
						
					if (zee_transfer < zee_balance) {
						back = false;
						
						//WITHDRAW FROM MY ACCOUNT
						fptr = fopen ("zee_balance.txt", "w");
						
						zee_balance -= zee_transfer;
				
						fprintf(fptr, "%f", zee_balance);
						fclose (fptr);
						
						//DEPOSIT TO OTHER ACCOUNT
						fptr = fopen ("ivan_balance.txt", "r");
						fscanf (fptr, "%f", &ivan_balance);
						fclose (fptr);
						
						
						fptr = fopen ("zach_balance.txt", "r");
						fscanf (fptr, "%f", &zach_balance);
						
						fptr = fopen ("ivan_balance.txt", "w");
						
						ivan_balance += zee_transfer;
					
						fprintf(fptr, "%f", ivan_balance);
						fclose (fptr);
						system("cls");
						printf("\nIvan's new balance is: $%.2f\n", ivan_balance);
		printf("                 __________________________________________________________________ \n");
		printf("                |                          AZIF BANK                               |\n ");
		printf("               |DATE                        TIME                  LOCATION        | \n");
		printf("                |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("                |                                                                  | \n");
		printf("                |CARD NUMBER                                   AMOUNT              | \n");
		printf("                |******************                           $%.2f", zee_transfer );
		printf("\n                |                                                                  | \n");
		printf("                |TRANSACTION                                  FROM                 | \n");
		printf("                |TRANSFER                                     FONZEE               | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |TOTAL BALANCE                                                     |\n ");
		printf("               |$%.2f\n", zee_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |AVAILABLE BALANCE                                                 | \n");
		printf("                |$%.2f\n", zee_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |                                                                  | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("                __________________________________________________________________ \n ");
						
					}
					
					else {
						system ("CLS");			
						printf("+++You don't have enough money+++\n");
				        printf("Please contact to your Bank Customer Services\n");
				        printf("****Your Balance is:   $%.2f\n\n", zee_balance);
				        Sleep(2000);
					}
				}
				
			// ANOTHER TRANSACTION MENU
				printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
				printf("Would you like to do another transaction:\n");
				printf("< 1 > Yes\n");
			    printf("< 2 > No\n");
			    scanf("%d", &choose);
			        
			    if (choose == 1){
			        goto mainMenu;
				}
				else if (choose == 2){
    			system("cls");
					menuExit();
				}
	
	//////////////////// ZACH MONEY TRANSFER ////////////////////
	zachMoneyTransfer:
		
	system("cls");
		printf("Choose which account to give to : ");
		printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("< 1 > Fonzee\n");
        printf("< 2 > Ivan\n");
		scanf("%d", &transferOption);
		
		switch(transferOption){
			case 1:
				goto zachToZee;
				break;
				
			case 2:
				goto zachToIvan;
				break;
			
			default:
				errorMessage();
				break;
		}
		
		zachToZee: /////////////////////////////////////////
			
			//READING (SHOW BALANCE OF ORIGINAL ACCOUNT)
				system("CLS");				
				fptr = fopen ("zach_balance.txt","r");
				fscanf(fptr,"%f", &zee_balance);
				
				printf("\n\n****Your Available Balance is:   $%.2f\n\n", zach_balance);
				
				fclose(fptr);
			
			//WRITING (PUTTING INPUT TRANSFER AMOUNT)
				back = true;
				while (back) {

					printf("****Enter your amount to transfer: ");
					scanf ("%f", &zach_transfer);
		
					fptr = fopen ("zach_balance.txt", "r");
					fscanf (fptr, "%f", &zach_balance);
					fclose (fptr);
						
					if (zach_transfer < zach_balance) {
						back = false;
						
						//WITHDRAW FROM MY ACCOUNT
						fptr = fopen ("zach_balance.txt", "w");
						
						zach_balance -= zach_transfer;
				
						fprintf(fptr, "%f", zach_balance);
						fclose (fptr);
						
						//DEPOSIT TO OTHER ACCOUNT
						fptr = fopen ("zee_balance.txt", "r");
						fscanf (fptr, "%f", &zee_balance);
						fclose (fptr);
						
						fptr = fopen ("zee_balance.txt", "w");
						
						zee_balance += zach_transfer;
					
						fprintf(fptr, "%f", zee_balance);
						fclose (fptr);
						system("cls");
						printf("\nFonzee's new balance is: $%.2f\n", zee_balance);
		printf("                 __________________________________________________________________ \n");
		printf("                |                          AZIF BANK                               |\n ");
		printf("               |DATE                        TIME                  LOCATION        | \n");
		printf("                |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("                |                                                                  | \n");
		printf("                |CARD NUMBER                                   AMOUNT              | \n");
		printf("                |******************                           $%.2f", zach_transfer );
		printf("\n                |                                                                  | \n");
		printf("                |TRANSACTION                                  FROM                 | \n");
		printf("                |TRANSFER                                     ZACH                 | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |TOTAL BALANCE                                                     |\n ");
		printf("               |$%.2f\n", zach_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |AVAILABLE BALANCE                                                 | \n");
		printf("                |$%.2f\n", zach_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |                                                                  | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("                __________________________________________________________________ \n ");
						
					}
					
					else {
						system ("CLS");			
						printf("+++You don't have enough money+++\n");
				        printf("Please contact to your Bank Customer Services\n");
				        printf("****Your Balance is:   $%.2f\n\n", zach_balance);
				        Sleep(2000);
					}
				}
				
			// ANOTHER TRANSACTION MENU
				printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
				printf("Would you like to do another transaction:\n");
				printf("< 1 > Yes\n");
			    printf("< 2 > No\n");
			    scanf("%d", &choose);
			        
			    if (choose == 1){
			        goto mainMenu;
				}
				else if (choose == 2){
					system("cls");
					menuExit();
				}
				
		zachToIvan: /////////////////////////////////////////
			
			//READING (SHOW BALANCE OF ORIGINAL ACCOUNT)
				system("CLS");				
				fptr = fopen ("zach_balance.txt","r");
				fscanf(fptr,"%f", &zee_balance);
				
				printf("\n\n****Your Available Balance is:   $%.2f\n\n", zach_balance);
				
				fclose(fptr);
			
			//WRITING (PUTTING INPUT TRANSFER AMOUNT)
				back = true;
				while (back) {

					printf("****Enter your amount to transfer: ");
					scanf ("%f", &zach_transfer);
		
					fptr = fopen ("zach_balance.txt", "r");
					fscanf (fptr, "%f", &zach_balance);
					fclose (fptr);
						
					if (zach_transfer < zach_balance) {
						back = false;
						
						//WITHDRAW FROM MY ACCOUNT
						fptr = fopen ("zach_balance.txt", "w");
						
						zach_balance -= zach_transfer;
				
						fprintf(fptr, "%f", zach_balance);
						fclose (fptr);
						
						//DEPOSIT TO OTHER ACCOUNT
						fptr = fopen ("ivan_balance.txt", "r");
						fscanf (fptr, "%f", &ivan_balance);
						fclose (fptr);
						
						
						fptr = fopen ("ivan_balance.txt", "w");
						
						ivan_balance += zach_transfer;
					
						fprintf(fptr, "%f", ivan_balance);
						fclose (fptr);
						system("cls");
						printf("\nIvan's new balance is: $%.2f\n", ivan_balance);
		printf("                 __________________________________________________________________ \n");
		printf("                |                          AZIF BANK                               |\n ");
		printf("               |DATE                        TIME                  LOCATION        | \n");
		printf("                |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("                |                                                                  | \n");
		printf("                |CARD NUMBER                                   AMOUNT              | \n");
		printf("                |******************                           $%.2f", zach_transfer );
		printf("\n                |                                                                  | \n");
		printf("                |TRANSACTION                                  FROM                 | \n");
		printf("                |TRANSFER                                     ZACH                 | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |TOTAL BALANCE                                                     |\n ");
		printf("               |$%.2f\n", zach_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |AVAILABLE BALANCE                                                 | \n");
		printf("                |$%.2f\n", zach_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |                                                                  | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("                __________________________________________________________________ \n ");
						
					}
					
					else {
						system ("CLS");			
						printf("+++You don't have enough money+++\n");
				        printf("Please contact to your Bank Customer Services\n");
				        printf("****Your Balance is:   $%.2f\n\n", zach_balance);
				        Sleep(2000);
					}
				}
		
			// ANOTHER TRANSACTION MENU
				printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
				printf("Would you like to do another transaction:\n");
				printf("< 1 > Yes\n");
			    printf("< 2 > No\n");
			    scanf("%d", &choose);
			        
			    if (choose == 1){
			        goto mainMenu;
				}
				else if (choose == 2){
					system("cls");
					menuExit();
				}
				
	//////////////////// IVAN MONEY TRANSFER ////////////////////
	ivanMoneyTransfer:
		
		system("cls");
		printf("Choose which account to give to : ");
		printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("< 1 > Fonzee\n");
        printf("< 2 > Zach\n");
		scanf("%d", &transferOption);
		
		switch(transferOption){
			case 1:
				goto ivanToZee;
				break;
				
			case 2:
				goto ivanToZach;
				break;
			
			default:
				errorMessage();
				break;
		}
		
		ivanToZee: /////////////////////////////////////////
			
			//READING (SHOW BALANCE OF ORIGINAL ACCOUNT)
				system("CLS");				
				fptr = fopen ("ivan_balance.txt","r");
				fscanf(fptr,"%f", &ivan_balance);
				
				printf("\n\n****Your Available Balance is:   $%.2f\n\n", ivan_balance);
				
				fclose(fptr);
			
			//WRITING (PUTTING INPUT TRANSFER AMOUNT)
				back = true;
				while (back) {

					printf("****Enter your amount to transfer: ");
					scanf ("%f", &ivan_transfer);
		
					fptr = fopen ("ivan_balance.txt", "r");
					fscanf (fptr, "%f", &ivan_balance);
					fclose (fptr);
						
					if (ivan_transfer < ivan_balance) {
						back = false;
						
						//WITHDRAW FROM MY ACCOUNT
						fptr = fopen ("ivan_balance.txt", "w");
						
						ivan_balance -= ivan_transfer;
				
						fprintf(fptr, "%f", ivan_balance);
						fclose (fptr);
						
						//DEPOSIT TO OTHER ACCOUNT
						fptr = fopen ("zee_balance.txt", "r");
						fscanf (fptr, "%f", &zee_balance);
						fclose (fptr);
						
						fptr = fopen ("zee_balance.txt", "w");
						
						zee_balance += ivan_transfer;
					
						fprintf(fptr, "%f", zee_balance);
						fclose (fptr);
						system("cls");
						printf("\nFonzee's new balance is: $%.2f\n", zee_balance);
		printf("                 __________________________________________________________________ \n");
		printf("                |                          AZIF BANK                               |\n ");
		printf("               |DATE                        TIME                  LOCATION        | \n");
		printf("                |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("                |                                                                  | \n");
		printf("                |CARD NUMBER                                   AMOUNT              | \n");
		printf("                |******************                           $%.2f", ivan_transfer );
		printf("\n                |                                                                  | \n");
		printf("                |TRANSACTION                                  FROM                 | \n");
		printf("                |TRANSFER                                     IVAN                 | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |TOTAL BALANCE                                                     |\n ");
		printf("               |$%.2f\n", ivan_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |AVAILABLE BALANCE                                                 | \n");
		printf("                |$%.2f\n", ivan_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |                                                                  | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("                __________________________________________________________________ \n ");
						
					}
					
					else {
						system ("CLS");			
						printf("+++You don't have enough money+++\n");
				        printf("Please contact to your Bank Customer Services\n");
				        printf("****Your Balance is:   $%.2f\n\n", zee_balance);
				        Sleep(2000);
					}
				}
				
			// ANOTHER TRANSACTION MENU
				printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
				printf("Would you like to do another transaction:\n");
				printf("< 1 > Yes\n");
			    printf("< 2 > No\n");
			    scanf("%d", &choose);
			        
			    if (choose == 1){
			        goto mainMenu;
				}
				else if (choose == 2){
					system("cls");
					menuExit();
				}
				
		ivanToZach: /////////////////////////////////////////
			
			//READING (SHOW BALANCE OF ORIGINAL ACCOUNT)
				system("CLS");				
				fptr = fopen ("ivan_balance.txt","r");
				fscanf(fptr,"%f", &ivan_balance);
				
				printf("\n\n****Your Available Balance is:   $%.2f\n\n", ivan_balance);
				
				fclose(fptr);
			
			//WRITING (PUTTING INPUT TRANSFER AMOUNT)
				back = true;
				while (back) {

					printf("****Enter your amount to transfer: ");
					scanf ("%f", &ivan_transfer);
		
					fptr = fopen ("ivan_balance.txt", "r");
					fscanf (fptr, "%f", &ivan_balance);
					fclose (fptr);
						
					if (ivan_transfer < ivan_balance) {
						back = false;
						
						//WITHDRAW FROM MY ACCOUNT
						fptr = fopen ("ivan_balance.txt", "w");
						
						ivan_balance -= ivan_transfer;
				
						fprintf(fptr, "%f", ivan_balance);
						fclose (fptr);
						
						//DEPOSIT TO OTHER ACCOUNT
						fptr = fopen ("zach_balance.txt", "r");
						fscanf (fptr, "%f", &zach_balance);
						fclose (fptr);
						
						fptr = fopen ("zach_balance.txt", "w");
						
						zach_balance += ivan_transfer;
					
						fprintf(fptr, "%f", zach_balance);
						fclose (fptr);
						system("cls");
						printf("\nZach's new balance is: $%.2f\n", zach_balance);
		printf("                 __________________________________________________________________ \n");
		printf("                |                          AZIF BANK                               |\n ");
		printf("               |DATE                        TIME                  LOCATION        | \n");
		printf("                |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("                |                                                                  | \n");
		printf("                |CARD NUMBER                                   AMOUNT              | \n");
		printf("                |******************                           $%.2f", ivan_transfer );
		printf("\n                |                                                                  | \n");
		printf("                |TRANSACTION                                  FROM                 | \n");
		printf("                |TRANSFER                                     IVAN                 | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |TOTAL BALANCE                                                     |\n ");
		printf("               |$%.2f\n", ivan_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |AVAILABLE BALANCE                                                 | \n");
		printf("                |$%.2f\n", ivan_balance                                            );
		printf("                |                                                                  | \n");
		printf("                |                                                                  | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("                |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("               |                                                                  |\n ");
		printf("                __________________________________________________________________ \n ");
						
					}
					
					else {
						system ("CLS");			
						printf("+++You don't have enough money+++\n");
				        printf("Please contact to your Bank Customer Services\n");
				        printf("****Your Balance is:   $%.2f\n\n", zee_balance);
				        Sleep(2000);
					}
				}
		
			// ANOTHER TRANSACTION MENU
				printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
				printf("Would you like to do another transaction:\n");
				printf("< 1 > Yes\n");
			    printf("< 2 > No\n");
			    scanf("%d", &choose);
			        
			    if (choose == 1){
			        goto mainMenu;
				}
				else if (choose == 2){
					system("cls");
					menuExit();
				}
		
return 0;

////////////////////////////////////////////////////////////////////////////////////////////////

moneyDeposit:
	
    float zee_deposit, zach_deposit, ivan_deposit;
    
    //PIN SYSTEM
	moneyDepositStart:
		
		system("cls");
		printf("Enter your 6-Digit PIN : ");
		scanf("%s", &pin);
			
		while (flag == 1)
			if (strcmp(pin, "111111") == 0) {
				goto zeeMoneyDeposit;
			} else if (strcmp(pin, "222222") == 0) {
				goto zachMoneyDeposit;
			} else if (strcmp(pin, "333333") == 0) {
				goto ivanMoneyDeposit;
			} else {
				flag = 1;
				printf("\n\nINVALID PIN");
				Sleep(500);
				i++;
					if (i >= 4) {
					printf("\n\nCARD CONFISCATED");
					exit(0);
					}
					else {
						goto moneyDepositStart;
					}
			}
    
    //FONZEE MONEY DEPOSIT
    zeeMoneyDeposit:
    	
	    fptr = fopen ("zee_balance.txt", "r");
	    fscanf (fptr, "%f", &zee_balance);
		printf("You choose to Deposit money\n");
		printf("\nYour Balance is: $%.2f\n\n", zee_balance);
		fclose (fptr);
    	
		// WRITING 
			fptr = fopen ("zee_balance.txt", "w");
			printf("****Enter your amount to Deposit\n");
			scanf ("%f", &zee_deposit);
			    
			zee_balance += zee_deposit;
		
			fprintf(fptr, "%.2f", zee_balance);
				
			fclose (fptr);
				
				system("cls");
				
		printf("       __________________________________________________________________ \n");
		printf("      |                          AZIF BANK                               |\n ");
		printf("     |DATE                        TIME                  LOCATION        | \n");
		printf("      |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("      |                                                                  | \n");
		printf("      |CARD NUMBER                                  AMOUNT               | \n");
		printf("      |******************                         %f", zee_deposit        );
		printf("\n      |                                                                  | \n");
		printf("      |TRANSACTION                                  FROM                 | \n");
		printf("      |DEPOSIT                                      ************         | \n");
		printf("      |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("     |TOTAL BALANCE                                                     |\n ");
		printf("     |$%.2f\n", zee_balance                                            );
		printf("      |                                                                  | \n");
		printf("      |AVAILABLE BALANCE                                                 | \n");
		printf("      |$%.2f\n", zee_balance                                            );
		printf("      |                                                                  | \n");
		printf("      |                                                                  | \n");
		printf("      |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("     |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("      |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("      __________________________________________________________________ \n ");	
		    
		// ANOTHER TRANSACTION MENU
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
			printf("Would you like to do another transaction:\n");
			printf("< 1 > Yes\n");
		    printf("< 2 > No\n");
		    scanf("%d", &choose);
		        
		    if (choose == 1){
		        goto mainMenu;
			}
			else if (choose == 2){
				system("cls");
				menuExit();
			}
				
			return 0;
	
	//ZACH MONEY DEPOSIT
	zachMoneyDeposit:
    	
	    fptr = fopen ("zach_balance.txt", "r");
	    fscanf (fptr, "%f", &zach_balance);
		printf("You choose to Deposit money\n");
		printf("\nYour Balance is: $%.2f\n\n", zach_balance);
		fclose (fptr);
    	
		// WRITING 
			fptr = fopen ("zach_balance.txt", "w");
			printf("****Enter your amount to Deposit\n");
			scanf ("%f", &zach_deposit);
			    
			zach_balance += zach_deposit;
		
			fprintf(fptr, "%.2f", zach_balance);
				
			fclose (fptr);
				
				system("cls");
				
		printf("       __________________________________________________________________ \n");
		printf("      |                          AZIF BANK                               |\n ");
		printf("     |DATE                        TIME                  LOCATION        | \n");
		printf("      |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("      |                                                                  | \n");
		printf("      |CARD NUMBER                                  AMOUNT               | \n");
		printf("      |******************                         %f", zach_deposit        );
		printf("\n      |                                                                  | \n");
		printf("      |TRANSACTION                                  FROM                 | \n");
		printf("      |DEPOSIT                                      ************         | \n");
		printf("      |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("     |TOTAL BALANCE                                                     |\n ");
		printf("     |$%.2f\n", zach_balance                                            );
		printf("      |                                                                  | \n");
		printf("      |AVAILABLE BALANCE                                                 | \n");
		printf("      |$%.2f\n", zach_balance                                            );
		printf("      |                                                                  | \n");
		printf("      |                                                                  | \n");
		printf("      |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("     |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("      |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("      __________________________________________________________________ \n ");	
		    
		// ANOTHER TRANSACTION MENU
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
			printf("Would you like to do another transaction:\n");
			printf("< 1 > Yes\n");
		    printf("< 2 > No\n");
		    scanf("%d", &choose);
		        
		    if (choose == 1){
		        goto mainMenu;
			}
			else if (choose == 2){
				system("cls");
				menuExit();
			}
				
			return 0;
			
	//IVAN MONEY DEPOSIT
	ivanMoneyDeposit:
    	
	    fptr = fopen ("ivan_balance.txt", "r");
	    fscanf (fptr, "%f", &zee_balance);
		printf("You choose to Deposit money\n");
		printf("\nYour Balance is: $%.2f\n\n", ivan_balance);
		fclose (fptr);
    	
		// WRITING
			fptr = fopen ("ivan_balance.txt", "w");
			printf("****Enter your amount to Deposit\n");
			scanf ("%f", &ivan_deposit);
			    
			ivan_balance += ivan_deposit;
		
			fprintf(fptr, "%.2f", ivan_balance);
				
			fclose (fptr);
				
				system("cls");
				
		printf("       __________________________________________________________________ \n");
		printf("      |                          AZIF BANK                               |\n ");
		printf("     |DATE                        TIME                  LOCATION        | \n");
		printf("      |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
		printf("      |                                                                  | \n");
		printf("      |CARD NUMBER                                  AMOUNT               | \n");
		printf("      |******************                         %f", ivan_deposit        );
		printf("\n      |                                                                  | \n");
		printf("      |TRANSACTION                                  FROM                 | \n");
		printf("      |DEPOSIT                                      ************         | \n");
		printf("      |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("     |TOTAL BALANCE                                                     |\n ");
		printf("     |$%.2f\n", ivan_balance                                            );
		printf("      |                                                                  | \n");
		printf("      |AVAILABLE BALANCE                                                 | \n");
		printf("      |$%.2f\n", ivan_balance                                            );
		printf("      |                                                                  | \n");
		printf("      |                                                                  | \n");
		printf("      |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("     |                THIS IS YOUR TRANSACTION RECORD                   | \n");
		printf("      |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("     |                                                                  |\n ");
		printf("      __________________________________________________________________ \n ");	
		    
		// ANOTHER TRANSACTION MENU
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
			printf("Would you like to do another transaction:\n");
			printf("< 1 > Yes\n");
		    printf("< 2 > No\n");
		    scanf("%d", &choose);
		        
		    if (choose == 1){
		        goto mainMenu;
			}
			else if (choose == 2){
				system("cls");
				menuExit();
			}
				
			return 0;
						
//////////////////////////////////////////////////////////////////////////////////////////////////
    
moneyWithdraw:
	
    float zee_withdraw, zach_withdraw, ivan_withdraw;
		
	//PIN SYSTEM
	moneyWithdrawStart:
		
		system("cls");
		printf("Enter your 6-Digit PIN : ");
		scanf("%s", &pin);
			
		while (flag == 1)
			if (strcmp(pin, "111111") == 0) {
				goto zeeMoneyWithdraw;
			} else if (strcmp(pin, "222222") == 0) {
				goto zachMoneyWithdraw;
			} else if (strcmp(pin, "333333") == 0) {
				goto ivanMoneyWithdraw;
			} else {
				flag = 1;
				printf("\n\nINVALID PIN");
				Sleep(500);
				i++;
					if (i >= 4) {
					printf("\n\nCARD CONFISCATED");
					exit(0);
					}
					else {
						goto moneyWithdrawStart;
					}
			}
			
			
	//FONZEE MONEY WITHDRAW
	zeeMoneyWithdraw:
	
    fptr = fopen ("zee_balance.txt", "r");
    fscanf (fptr, "%f", &zee_balance);
    printf("You choose to Withdraw a money\n");
	printf("\nYour Balance is: $%.2f\n\n", zee_balance);
	fclose (fptr);
	
	back = true;
    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &zee_withdraw);
    	
		if (zee_withdraw < zee_balance) {
		        back = false;
		        
		        // WRITING 
					fptr = fopen ("zee_balance.txt", "w");
				    
					zee_balance -= zee_withdraw;
			
					fprintf(fptr, "%.2f", zee_balance);
					
					fclose (fptr);
					
					
				
			printf("       __________________________________________________________________ \n");
			printf("      |                          AZIF BANK                               |\n ");
			printf("     |DATE                        TIME                  LOCATION        | \n");
			printf("      |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
			printf("      |                                                                  | \n");
			printf("      |CARD NUMBER                                  AMOUNT               | \n");
			printf("      |******************                         %f", zee_withdraw        );
			printf("\n      |                                                                  | \n");
			printf("      |TRANSACTION                                  FROM                 | \n");
			printf("      |WITHDRAW                                     ************         | \n");
			printf("      |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("     |TOTAL BALANCE                                                     |\n ");
			printf("     |$%.2f\n", zee_balance                                            );
			printf("      |                                                                  | \n");
			printf("      |AVAILABLE BALANCE                                                 | \n");
			printf("      |$%.2f\n", zee_balance                                            );
			printf("      |                                                                  | \n");
			printf("      |                                                                  | \n");
			printf("      |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("     |                THIS IS YOUR TRANSACTION RECORD                   | \n");
			printf("      |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("      __________________________________________________________________ \n ");
		
		    }
		    
		        else {
		
		        printf("+++You don't have enough money+++\n");
		        printf("Please contact to your Bank Customer Services\n");
		        printf("****Your Balance is:   $%.2f\n\n", zee_balance);
		        goto zeeAnotherTransaction;
		
		    }
			}

	    // ANOTHER TRANSACTION MENU
	    zeeAnotherTransaction:
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	        printf("Would you like to do another transaction:\n");
	        printf("< 1 > Yes\n");
	        printf("< 2 > No\n");
	        scanf("%d", &choose);
	        
	        if (choose == 1){
	        	goto mainMenu;
			}
			else if (choose == 2){
				system("cls");
				menuExit();
			}
			
			return 0;
			
	//ZACH MONEY WITHDRAW
	zachMoneyWithdraw:
	
    fptr = fopen ("zach_balance.txt", "r");
    fscanf (fptr, "%f", &zach_balance);
    printf("You choose to Withdraw a money\n");
	printf("\nYour Balance is: $%.2f\n\n", zach_balance);
	fclose (fptr);

	back = true;
    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &zach_withdraw);
    	
		if (zach_withdraw < zach_balance) {
		        back = false;
		        
		        // WRITING 
					fptr = fopen ("zach_balance.txt", "w");
				    
					zach_balance -= zach_withdraw;
			
					fprintf(fptr, "%.2f", zach_balance);
					
					fclose (fptr);
					
					
				
			printf("       __________________________________________________________________ \n");
			printf("      |                          AZIF BANK                               |\n ");
			printf("     |DATE                        TIME                  LOCATION        | \n");
			printf("      |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
			printf("      |                                                                  | \n");
			printf("      |CARD NUMBER                                  AMOUNT               | \n");
			printf("      |******************                         %f", zach_withdraw        );
			printf("\n      |                                                                  | \n");
			printf("      |TRANSACTION                                  FROM                 | \n");
			printf("      |WITHDRAW                                     ************         | \n");
			printf("      |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("     |TOTAL BALANCE                                                     |\n ");
			printf("     |$%.2f\n", zach_balance                                            );
			printf("      |                                                                  | \n");
			printf("      |AVAILABLE BALANCE                                                 | \n");
			printf("      |$%.2f\n", zach_balance                                            );
			printf("      |                                                                  | \n");
			printf("      |                                                                  | \n");
			printf("      |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("     |                THIS IS YOUR TRANSACTION RECORD                   | \n");
			printf("      |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("      __________________________________________________________________ \n ");
		
		    }
		    
		        else {
		
		        printf("+++You don't have enough money+++\n");
		        printf("Please contact to your Bank Customer Services\n");
		        printf("****Your Balance is:   $%.2f\n\n", zach_balance);
		        goto zachAnotherTransaction;
		
		    }
			}

	    // ANOTHER TRANSACTION MENU
	    zachAnotherTransaction:
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	        printf("Would you like to do another transaction:\n");
	        printf("< 1 > Yes\n");
	        printf("< 2 > No\n");
	        scanf("%d", &choose);
	        
	        if (choose == 1){
	        	goto mainMenu;
			}
			else if (choose == 2){
				system("cls");
				menuExit();
			}
			
			return 0;
			
	//IVAN MONEY WITHDRAW
	ivanMoneyWithdraw:
	
    fptr = fopen ("ivan_balance.txt", "r");
    fscanf (fptr, "%f", &ivan_balance);
    printf("You choose to Withdraw a money\n");
	printf("\nYour Balance is: $%.2f\n\n", ivan_balance);
	fclose (fptr);

	back = true;
    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &ivan_withdraw);
    	
		if (ivan_withdraw < ivan_balance) {
		        back = false;
		        
		        // WRITING 
					fptr = fopen ("ivan_balance.txt", "w");
				    
					ivan_balance -= ivan_withdraw;
			
					fprintf(fptr, "%.2f", ivan_balance);
					
					fclose (fptr);
					
					
				
			printf("       __________________________________________________________________ \n");
			printf("      |                          AZIF BANK                               |\n ");
			printf("     |DATE                        TIME                  LOCATION        | \n");
			printf("      |XX-XX-XX                  XX:XX:XX                XXXXXXXX        | \n");
			printf("      |                                                                  | \n");
			printf("      |CARD NUMBER                                  AMOUNT               | \n");
			printf("      |******************                         %f", ivan_withdraw        );
			printf("\n      |                                                                  | \n");
			printf("      |TRANSACTION                                  FROM                 | \n");
			printf("      |WITHDRAW                                     ************         | \n");
			printf("      |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("     |TOTAL BALANCE                                                     |\n ");
			printf("     |$%.2f\n", ivan_balance                                            );
			printf("      |                                                                  | \n");
			printf("      |AVAILABLE BALANCE                                                 | \n");
			printf("      |$%.2f\n", ivan_balance                                            );
			printf("      |                                                                  | \n");
			printf("      |                                                                  | \n");
			printf("      |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("     |                THIS IS YOUR TRANSACTION RECORD                   | \n");
			printf("      |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("     |                                                                  |\n ");
			printf("      __________________________________________________________________ \n ");
		
		    }
		    
		        else {
		
		        printf("+++You don't have enough money+++\n");
		        printf("Please contact to your Bank Customer Services\n");
		        printf("****Your Balance is:   $%.2f\n\n", ivan_balance);
		        goto ivanTransactionMenu;
		
		    }
			}

	    // ANOTHER TRANSACTION MENU
	    ivanTransactionMenu:
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	        printf("Would you like to do another transaction:\n");
	        printf("< 1 > Yes\n");
	        printf("< 2 > No\n");
	        scanf("%d", &choose);
	        
	        if (choose == 1){
	        	goto mainMenu;
			}
			else if (choose == 2){
				system("cls");
				menuExit();
			}
			
			return 0;
			
///////////////////////////////////////////////////////////////////////////////////////////////////////////

}//main code

void errorMessage(){

    printf("\n+++!!!You selected invalid number!!!+++\n");
    Sleep (750);
    main();
}

void menuExit(){

    printf("\n  ______________________________________");
	printf("\n   ************************************");
	printf("\n   **************THANKYOU**************");
	printf("\n   ****************FOR*****************");
	printf("\n   **************TRUSTING**************");
	printf("\n   **************AZIFBANK**************");
	printf("\n   ************************************");
	printf("\n  ______________________________________");

    exit(0);
}
