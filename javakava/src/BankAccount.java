import java.util.*;

public class BankAccount {
    private String name;
    private String accountNo;
    private String typeOfAccount;
    private double balanceAmount;

    public BankAccount(String name, String accountNo, String typeOfAccount, double balanceAmount) {
        this.name = name;
        this.accountNo = accountNo;
        this.typeOfAccount = typeOfAccount;
        this.balanceAmount = balanceAmount;
    }

    public void depositAmount(int amount) {
        balanceAmount = balanceAmount + amount;
    }

    public void withdrawAmount(int amount) {
        System.out.println("The current Amount is : " + balanceAmount);
        if (balanceAmount - amount >= 0) {
            balanceAmount -= amount;
            System.out.println("The Amount withdrawn : " + amount);
            System.out.println("The remaining balance now :" + balanceAmount);
        } else {
            System.out.println("Insufficient balance!!!");
        }
    }

    public void displayDetails() {
        System.out.println("The name of the Account Holder : " + name);
        System.out.println("Current Balance in Your Account is : " + balanceAmount);
    }

    public static void main(String[] args) {
        BankAccount b1 = new BankAccount("Sashank", "45673737", "Saving", 876453.98);
        b1.depositAmount(24000);
        b1.displayDetails();
        b1.withdrawAmount(8000);
        b1.displayDetails();

        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
