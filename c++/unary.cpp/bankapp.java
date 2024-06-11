import java.util.Scanner;
class Customer{
    String name , address,dob,Accounttype;
    long Acc_no,mob;
    float balance=0.0f;
    Scanner sc = new Scanner(System.in);  

    void acc_open( )
    {
        System.out.print("Enter Name: ");  
        name = sc.next();
        System.out.println(s:"Enter the address: ");
        address = sc.next();
        System.out.println(s:"Enter mobile No: ");
        mob = sc.next();
        System.out.print("Enter Account No: ");  
        accno = sc.next();  
        System.out.print("Enter Account type: ");  
        acc_type = sc.next();  
        System.out.print("Enter Balance: ");  
        balance = sc.nextFloat();  

    }
    public void deposit() {  
        long amt;  
        System.out.println("Enter the amount you want to deposit: ");  
        amt = sc.nextLong();  
        balance = balance + amt;  
    }  
    public void withdrawal() {  
        long amt;  
        System.out.println("Enter the amount you want to withdraw: ");  
        amt = sc.nextLong();  
        if (balance >= amt) {  
            balance = balance - amt;  
            System.out.println("Balance after withdrawal: " + balance);  
        } else {  
            System.out.println("Your balance is less than " + amt + "\tTransaction failed...!!" );  
        }  
    }  
    
    public void showAccount() {  
        System.out.println("Name of account holder: " + name);  
        System.out.println("Account no.: " + accno);  
        System.out.println("Account type: " + acc_type);  
        System.out.println("Balance: " + balance);  
    }  
    
}