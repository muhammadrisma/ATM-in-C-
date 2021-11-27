/*Classes -    
Name: Muhammad Risma
NIM: 001202100048
This will create a simple class called BankAccount  
*/


#include <iostream>
using namespace std;
int main () {
    int password = 111111;
    int OperationNumber, AccountNumber, selection;
    int amount;
    int CurrentBalance;
    CurrentBalance = 10000000;
    
    cout <<"Welcome BCA, please enter your password in numbers: ";
    cin >> password;
		
    while (password != 111111) {
        cout <<" The password is 111111. Please enter your password again: ";
        cin >> password;
    }
	
    while (password == 111111) {
        cout <<"Please enter your operation number: "<<endl<<"1. Withdraw"<<endl<<"2. Deposit"<<endl<<"3. Transfer"<<endl<<"4. Check the balance"<<endl;
        cin >> OperationNumber;
        
		// Withdraw        
        if (OperationNumber == 1) {
            cout <<"Please enter the amount you would like to withdraw. "<<endl;
            cin >> amount;
            CurrentBalance = CurrentBalance - amount;
            if (CurrentBalance <= 0) {
            	cout <<"Your balance is not enough."<<endl;
			} 	
            else {
            	cout <<"Withdraw action is completed. Your new balance is "<<CurrentBalance<<endl;
			}
            
        }
		// Deposit
        else if (OperationNumber == 2) {
        	cout <<"Please enter the amount you would like to deposit."<<endl;
        	cin >> amount;
        	CurrentBalance = CurrentBalance + amount;
        	cout <<"Deposit action is completed. Your new balance is "<<CurrentBalance<<endl;
	    }
		// transfer
	    else if (OperationNumber == 3) {
	        cout <<"Please enter the account number of whom you would like to transfer."<<endl;
	        cin >> AccountNumber;
	        while (AccountNumber == 222222) {
	            cout <<"Please enter the amount of money you would like to transfer to Futra bin Abdul Aziz Al Khazab bin Muhammad account"<<endl;
	            cin >> amount;
	            CurrentBalance = CurrentBalance - amount;	            
	            if (CurrentBalance <= 0) {
            		cout <<"Your balance is not enough."<<endl;
				} 	
	            else {
	            	cout <<"Deposit action is completed. Your new balance is "<<CurrentBalance<<endl;
				}
				break;
	        };
	        while (AccountNumber != 222222) {
		        cout <<"The user couldn't be found.try 222222";
		        break;
   			};
	    }
		// Check the balance
	    else if (OperationNumber == 4) {
        	cout <<"Your balance is "<<CurrentBalance<<endl;
    	}
        cout <<"\nIf there is another operation to do, please press 1. Otherwise, you will be redirected to the main menu. "<<endl;
        cin >> selection;
        if (selection != 1) {
            cout <<"Thank you for preferring us. "<<endl;
            break;
        } 
    }
    
    return 0;
}
