package jp.co.workshop.global;

/* @param <E>
 * */

import java.util.NoSuchElementException;
 
public class ImmutableQueue<E> {
 private Object[] elements;
 
 public ImmutableQueue() {
 }
 
 private ImmutableQueue(int queueSize) {
  elements = new Object[queueSize];
 }
 
 public ImmutableQueue<E> enqueue(E e) {
  if (null == e) {
   throw new IllegalArgumentException();
  }
  ImmutableQueue<E> queue = new ImmutableQueue<E>(size() + 1);
  if (size() > 0) {
   for (int i = 0; i < size(); i++) {
    queue.elements[i] = elements[i];
   }
  }
  queue.elements[size()] = e;
  return queue;
 }
 
 public ImmutableQueue<E> dequeue() {
  checkForEmptyQueue();
  ImmutableQueue<E> queue = new ImmutableQueue<E>(size() - 1);
  for (int i = 1; i < size(); i++) {
   queue.elements[i - 1] = elements[i];
  }
  return queue;
 }
 
 public E peek() {
  checkForEmptyQueue();
  return (E) elements[0];
 }
 
 public int size() {
  return (null != elements ? elements.length : 0);
 }
 
 private void checkForEmptyQueue() {
  if (size() == 0) {
   throw new NoSuchElementException();
  }
}
}
 