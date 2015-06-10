package jp.co.workshop.global;

import java.util.NoSuchElementException;
import java.util.Vector;

/*@param E
 */
public class ImmutableQueue<E> {
	private Vector<E> elem;//elements
	
	//default constructor
	public ImmutableQueue(){}
	
	//another constructor
	public ImmutableQueue(int s){
		elem=new Vector<E>(s);
	}
	
	public void enqueue(E e){
		elem.addElement(e);
	}
	
	private void checkEmp(){
		if(size()==0){
			throw new NoSuchElementException();
		}
	}
	
	public ImmutableQueue<E> dequeue(){
		checkEmp();
		if(size()>0){
			elem.remove(0);
		}
		return null;
	}

	
	public E peek(){
		checkEmp();
		return (E) elem.elementAt(0);
	}
	
	public int size() {
		return (elem!=null?elem.size():0);
	}
}
