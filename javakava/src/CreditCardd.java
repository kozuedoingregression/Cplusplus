import java.util.Scanner;

abstract class CreditCard {
    String cardNumber;
    int length;

    public CreditCard(String cardNumber, int length) {
        this.cardNumber = cardNumber;
        this.length = length;

    }

    abstract boolean isValid();

    public static CreditCard createCreditCard(String cardNumber) {
        if (cardNumber.matches("^5[1-5]\\d{14}$")) {
            return new MasterCard(cardNumber);

        } else if (cardNumber.matches("^4\\d{12}$|^4\\d{15}$")) {
            return new Visa(cardNumber);
        } else if (cardNumber.matches("^34\\d{13}$|^37\\d{13}$")) {
            return new AmericanExpress(cardNumber);
        } else {
            throw new IllegalArgumentException("Invalid credit card number");

        }
    }
}

class MasterCard extends CreditCard {
    public MasterCard(String cardNumber) {
        super(cardNumber, 16);

    }

    @Override
    boolean isValid() {
        return true; // validation logic for MasterCard

    }
}

class Visa extends CreditCard {
    public Visa(String cardNumber) {
        super(cardNumber, 13);

    }

    @Override
    boolean isValid() {
        return true;

    }
}

class AmericanExpress extends CreditCard {
    public AmericanExpress(String cardNumber) {
        super(cardNumber, 15);

    }

    @Override
    boolean isValid() {
        return true;

    }
}

public class CreditCardd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter credit card number : ");
        String number = sc.next();
        CreditCard card = CreditCard.createCreditCard(number);
        if (card.isValid()) {
            System.out.println("Valid MasterCard");
        } else if (card.isValid()) {
            System.out.println("Valid Visa");
        } else if (card.isValid()) {
            System.out.println("Valid American Express");
        } else {
            System.out.println("Invalid Credit Card");

        }
        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
