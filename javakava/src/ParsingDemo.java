public class ParsingDemo {
    public static void main(String args [])
    {
        String price = "100";
        String rate ="5.91";
        String tax="50.2";

        int x = Integer.parseInt(price);
        float f1 = Float.parseFloat(rate);
        double y= Double.parseDouble(tax);

        System.out.println("\n Printing data type value after parsing");
        System.out.println("int value "+x);
        System.out.println("float value"+f1);
        System.out.println(" value"+y);

        Integer il= new Integer(price);
        Float f2 = new Float(rate);
        Double d1 = new Double(tax);

        int xl = il.intValue();
        float f3 = f2.floatValue();
        double d2 = d1.doubleValue();

        System.out.println("Printing data type values after conversion");
        System.out.println("int value"+xl);
        System.out.println("float value"+f3);
        System.out.println("double value"+d2);
    }
}
