package jp.co.workshop.global;

public class Implement extends ImmutableQueue<Object> {

	public static void main(String[] args) {
		ImmutableQueue<Integer> q=new ImmutableQueue<Integer>();
		q.enqueue(23);
	
		q.enqueue(254);
		System.out.println(q.size()+" "+q.peek());
		//q.dequeue();
		System.out.println(q.size()+" "+q.peek());
		//q.dequeue();
		System.out.println(q.size()+" "+q.peek());
		
	}

}
