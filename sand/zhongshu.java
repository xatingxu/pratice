import java.util.Scanner;


public class zhongshu {
	public static void Mode(){
		int Mode[]=new int[30001];
		int max=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("intput:");
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			int temp=sc.nextInt();
			if(Mode[temp]==0)
			{
				Mode[temp]=1;
			}
			Mode[temp]+=1;
			
		}
		for(int i=0;i<30001;i++)
		{
			if(Mode[i]>max){
				max=Mode[i];
			}
		}
		for(int i=1;i<30001;i++)
		{
			if(Mode[i]==max)
			{
				System.out.println(max+" "+i);
			}
		}
	}
	
	public static void main(String[] args){
		Mode();
	}

}
