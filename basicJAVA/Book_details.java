package Book;
import java.util.Scanner;
public class Book_details
{
    String name,author;
    float price;
    int year;
    public Book_details()
    {
         Scanner s=new Scanner(System.in);
        System.out.println("Enter Book name");
        name=s.nextLine();
        System.out.println("Enter Author");
        author=s.nextLine();
        System.out.println("Enter Price");
        price=s.nextFloat();
        System.out.println("Enter Year of Publication");
        year=s.nextInt();
        
    }
    public void display()
    {   
        System.out.println(name+" "+author+"  "+price+"  "+year);
    }  
}
