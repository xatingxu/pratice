
public class main {
	public static void main(String[] args) {
		/*Array<Integer>arr=new Array<Integer>(20);
		for(int i=0;i<10;i++)
			arr.addLast(i);
		System.out.println(arr);
		arr.add(1, 100);
		System.out.println(arr);
		arr.addFrist(-1);
		System.out.println(arr);
		arr.remove(2);
		System.out.println(arr);
		arr.removeElement(4);
		System.out.println(arr);
		arr.removeFirst();
		System.out.println(arr);*/
		
		ArraryStack<Integer> stack=new ArraryStack<Integer>(20);
		
		for(int i=0;i<5;i++){
			stack.push(i);
			System.out.println(stack);
		}
		
		stack.pop();
		System.out.println(stack);
		
	}

}
