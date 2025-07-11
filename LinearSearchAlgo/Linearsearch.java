import java.util.Scanner;

public class Linearsearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int s = sc.nextInt();

        for (int i = 0; i < n; i++) {
            if (arr[i] == s) {
                System.out.println(s + " Found at index " + i);
                return;
            }
        }
        System.out.println("Not Found");
    }
}