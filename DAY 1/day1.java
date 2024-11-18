import java.util.*;
public class day1{
    public static void doubleTheInput(String word){
        System.out.println(word +' ' +word);
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Word : ");
        String word = sc.next();
        doubleTheInput(word);

    }
}