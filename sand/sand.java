import java.util.Scanner;


public class sand {
	public static void Srandrom(){
		int radom[]=new int[1001];//����һ���������
		int count=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("intput:");
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			int temp=(int)(1+Math.random()*1000);//���������
			System.out.print(temp+" ");
			if(radom[temp]==0)
				count++;
			radom[temp]=temp;
		}
		System.out.println("");
		System.out.println(count);
		for(int i=0;i<1001;i++)
		{
			if(radom[i]!=0)
				System.out.print(radom[i]+" ");
			
		}
		
	}
	public static void main(String[]args)
	{
		Srandrom();
	}

}
