import java.math.BigDecimal;
import java.math.RoundingMode;

public class HalfEvenRoundingExample {
    public static void main(String[] args) {
        BigDecimal number1 = new BigDecimal("2.5");
        BigDecimal number2 = new BigDecimal("3.5");

        BigDecimal rounded1 = number1.setScale(0, RoundingMode.HALF_EVEN);
        BigDecimal rounded2 = number2.setScale(0, RoundingMode.HALF_EVEN);

        System.out.println("Rounded 2.5 (HALF_EVEN): " + rounded1); // Output: 2
        System.out.println("Rounded 3.5 (HALF_EVEN): " + rounded2); // Output: 4
    }
}
