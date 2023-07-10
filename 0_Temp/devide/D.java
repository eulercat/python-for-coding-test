import java.math.*;

public class D {
    public static void main(String args[]) {
        double num1 = 2.5;
        double num2 = 3.5;

        long rounded1 = Math.round(num1);
        long rounded2 = Math.round(num2);

        System.out.println(rounded1);// Output: 3.0
        System.out.println(rounded2);// Output: 4.0
    }
}