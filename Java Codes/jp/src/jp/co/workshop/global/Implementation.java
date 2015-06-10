package jp.co.workshop.global;

public class Implementation extends ImmutableQueue<Object>{

	public static void main(String[] args) {
		
		ImmutableQueue<Integer> q=new ImmutableQueue<Integer>();
		//System.out.println("size: "+q.size()+"\ntop value: "+q.peek());
		q.enqueue(12);
		q.enqueue(34);
		q.enqueue(2345);
		q.enqueue(23);
		System.out.println("size: "+q.size()+"\ntop value: "+q.peek());
		q.dequeue();
		System.out.println("size: "+q.size()+"\ntop value: "+q.peek());
		q.dequeue();
		System.out.println("size: "+q.size()+"\ntop value: "+q.peek());		
		q.dequeue();
		System.out.println("size: "+q.size()+"\ntop value: "+q.peek());	
		q.dequeue();
		System.out.println("size: "+q.size()+"\ntop value: "+q.peek());		
			
	}
}
