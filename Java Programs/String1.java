public class String1 {
    public static void main (String[] args) {

 // Strings

 // 1.) Concatenate - To join/Add the strings. [+]

 String name = "Rohit";
 String name1 = "Robin";
 String name2 = "Roni";
 String name3 = name + name1 + name2;

 System.out.println(name2);
 System.out.println(name3);
 String name4 = "Ronit";
 System.out.println(name4.charAt(2));

 // 3.) Length - To find length of function.

 System.out.println(name4.length());

 // 4.) Replace - It just replace the word from each other.
// Note - In java we can not change strings data we have to make new strings to make change or to add new elements(Strings are immutable in java).


String name5 = name4.replace("n" , "h");
System.out.println(name5);

// 5.) Substring - To print Particular/Specific part of string.

String name6 = "ROHIT AND SAINI";

System.out.println(name6.substring(10,15));





    }
    
}
