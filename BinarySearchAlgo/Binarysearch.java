import java.util.Scanner;

public class Binarysearch {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        int low=0,high=n-1,s;
        s=sc.nextInt();
        
        while(low<=high){
            int mid = (low+high)/2;

            if(arr[mid]==s){
                System.out.println(s+" Found at Index "+mid);
                return;
            }
            else if(s>arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        System.out.println("Not Found");
    }
}