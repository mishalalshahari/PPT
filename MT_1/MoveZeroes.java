import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        int k = 0;
        int countZero = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[k++] = arr[i];
            } else {
                countZero++;
            }
        }
        
        for (int i = 0; i < countZero; i++) {
            arr[k++] = 0;
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
