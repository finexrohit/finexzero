public class datatypes {
    public static void main (String[] args){

        // There are two types Datatypes in Java Below You Will There
        // 1.) Primitive
        // 2.) Non-Primitive/Reference

        // Primitive Types OR Example

        // 1.) byte - Takes 1 Byte Memory and Store From[-128 to 127]
        // 2.) short - 2  
        // 3.) int - 4  [1,2,3]
        // 4.) long - 8 
        // 5.) float - 4 [3.14]
        // 6.) double - 8
        // 7.) char - 2 [Rohit,Robin,Roni]
        // 8.) boolean - 1 [True/False]

        byte age = 20;
        int phone1 = 1234567890;
        long phone2 = 12345678910L;
        float pi = 3.14F;
        char Letter = 'R';
        boolean New = true;

        System.out.println(age);
        System.out.println(phone1);
        System.out.println(phone2);
        System.out.println(pi);
        System.out.println(Letter);
        System.out.println(New);

        //Non-Primitive Types OR Reference

        // Below are some difference of Primitive and Non-Primitive/Reference

        // 1.) In Non-Primitive type it have there own function or Method.
        // 2.) We can store infinite Character in this type until you're storage is not fill.
        // 3.) Here we have to name always new string.  


        String name = new String("Rohit");
        System.out.println(name.length());



    }
    
}
