import java.util.Scanner;
class University
	{
		int id;
		String name,address;
		void input()
		{
			Scanner obj=new Scanner(System.in);
			System.out.println("Enter the university id");
			id=obj.nextInt();
			System.out.println("Enter the name of university");
			name=obj.next();
			System.out.println("Enter the Address of university");
			address=obj.next();
		}
		void display()
		{

			System.out.println("YOUR ENTER DETAILS-"+id +" "+name+" "+address);
			System.out.println("-----------------------------------------------------");

		}
	}
class Student extends University
	{
		int s_id,reg;
		String  s_name;
		void input1()
		{
			Scanner obj1=new Scanner(System.in);
			System.out.println("University Details");
			input();
			
			System.out.println("Enter the Student id");
			s_id=obj1.nextInt();
			System.out.println("Enter the name of Student");
			s_name=obj1.next();
			System.out.println("Enter the Registration number");
			reg=obj1.nextInt();
		}
		void display1()	
		{
			display();
			System.out.println("YOUR ENTER DETAILS-"+s_id +" "+s_name+" "+reg);
			System.out.println("-----------------------------------------------------");

		}
	}
public class Details
{
	public static void main(String[] args)d
	{
		Student obj3 =new Student();
		
		System.out.println("Student Details");
		obj3.input1();
		obj3.display1();
	}
}