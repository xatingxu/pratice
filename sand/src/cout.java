import java.util.Arrays;
import java.util.Scanner;


public class cout {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		
		while(sc.hasNext()){
			int n=sc.nextInt();
			int[] arr=new int[n];
		    for(int i=0;i<n;i++)
		    {
		    	arr[i]=sc.nextInt();
		    }
		    Arrays.sort(arr);
		    for(int i=0;i<n;i++){
		    	if(i==0||arr[i]!=arr[i-1])
		    		System.out.println(arr[i]);
		    }
		}
	}

}
