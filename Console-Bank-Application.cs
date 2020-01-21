using System;
public class Bank
{
    public static void Main(string[] args)
    {
    Double deposit_amount, rate,current_balance=2300,deposit_balance,duration,duration_year; // Set Default bank balance is 2300 rate is used for interest on fd or savings account
		int choice;
		bool recurring_deposited = false;
		while(true){
			Console.Write("\n_________________________________________________________\n");
			Console.Write("\nFor Which Kind of Deposit you are interested ? :");
			Console.Write("\n1. Press 1 for Fix Deposit.");
			Console.Write("\n2. Press 2 for Recurring Deposit");
			Console.Write("\n3. Press 3 for savings Deposit @ rate of 4% year.");
			Console.Write("\n4.Press 4 to Check Bank Balance\n");
			choice = Convert.ToInt32(Console.ReadLine());
			if(choice==1){
					Console.Write("How much you want to deposit? : ");
					deposit_amount = Convert.ToInt32(Console.ReadLine());
					Console.Write("For how much month, you want to deposit?: ");
					rate = 7.5; // 7.5% interest on FD
					duration = Convert.ToInt32(Console.ReadLine());
					duration_year = duration/12;
					deposit_balance = ((deposit_amount*rate*duration_year)/100)+deposit_amount;
					Console.Write("\nAfter "+duration_year+" year your amount will be : " + deposit_balance+"\n");
					Console.Write("\nAmount Deposited Successfully....");
					current_balance = current_balance + deposit_balance;
			}else if(choice==2){
					if(recurring_deposited){
						Console.Write("\nInstallment for current month already deposited... Now, please deposit next month\n");
					}else{
						Console.Write("\nHow much you want to deposit this month?: ");
						deposit_balance = Convert.ToInt32(Console.ReadLine());
						Console.Write("\n Amount Deposited Successfully...");
						current_balance = current_balance + deposit_balance;
						recurring_deposited = true;
					}
			}else if(choice==3){
					Console.Write("How much you want to deposit?: ");
					deposit_balance = Convert.ToInt32(Console.ReadLine());
					rate = 4;
					deposit_balance = ((deposit_balance*rate*1)/100)+deposit_balance; // we are taking time as 1 year for now.
					Console.Write("\n Amount Deposited Successfully...");
					current_balance = current_balance + deposit_balance;
			}else if(choice==4){
					Console.Write("\nYour bank balance is: "+current_balance);
			}else if(choice==5){
					Console.Write("\nHow much money you want to withdraw?: \n");
					deposit_balance = Convert.ToInt32(Console.ReadLine()); // We are withdrawling
					current_balance = current_balance - deposit_balance;
					Console.Write("\n Amount withdrawled successfully....");
					Console.Write("\nYour bank balance is: "+current_balance);
			}
		}
    }
}
