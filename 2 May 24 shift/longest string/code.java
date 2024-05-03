import java.util.Scanner;

public class Main {
    public static String getLongestString(String s) {
        String[] words = s.split("\\s+");
        String ans = "";
        int maxi = 0;
        for (String word : words) {
            if (word.length() > maxi) {
                ans = word;
                maxi = word.length();
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        System.out.println("The longest string is: " + getLongestString(s));
    }
}
