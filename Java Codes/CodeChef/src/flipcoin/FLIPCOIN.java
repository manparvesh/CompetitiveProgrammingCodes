package flipcoin;

import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
class FLIPCOIN
{
	InputStream in = System.in;
	PrintWriter out= new PrintWriter(System.out);
	int readInt() {
		int no = 0;
		boolean minus = false;
		try {
			int a = in.read();
			while (a == 32 || a == 10)
				a = in.read();
			if (a == '-') {
				minus = true;
				a = in.read();
			}
			while (a != 10 && a != 32 && a != -1) {
				no = no * 10 + (a - '0');
				a = in.read();
			}
		}catch (IOException e) {
			e.printStackTrace();
		}
		return minus ? -no: no;
	}
	String read() {
		StringBuilder str = new StringBuilder();
		try {
			int a = in.read();
			while (a == 32)
				a = in.read();
			while (a != 10 && a != 32 && a != -1) {
				str.append((char)a);
				a = in.read();
			}
		} catch(Exception e) {
			e.printStackTrace();
		}
		return str.toString();
	}
	public static void main (String[] args)	{
		new FLIPCOIN().solve();
	}
	Node[] tree;
	class Node {
		int heads, updated;
	}
	void solve() {
		int N = readInt();
		int Q = readInt();
		tree = new Node[3*N];
		for (int i = 0; i < 3*N; i++)
			tree[i] = new Node();
		while(Q-- > 0) {
			int C = readInt();
			int A = readInt();
			int B = readInt();
			if (C == 0) update(1, 0, N-1, A, B);
			else out.println(query(1, 0, N-1, A, B));
		}
		out.flush();
	}
	void update(int node, int a, int b, int i, int j) {
		int mid = (a+b) >> 1; // middle of the array
		int left = node << 1; //left node
		int right = left + 1; //right node
		lazyUpdate(node, a, b); // update node if updation required
		if (a > b || a > j || b < i)
			return; //array range is completely outside [i, j]
		if (a == b)
			tree[node].heads = 1 - tree[node].heads; // flipping single coin
		else if (i <= a && b <= j) { //current array range is completely inside the updation range [i, j]
			tree[node].heads = b+1 - a - tree[node].heads; // flipping heads in [a, b]
			tree[left].updated = mid+1 - a - tree[left].updated; // flipping the - to be updated with value
			tree[right].updated = b - mid - tree[right].updated;
		}
		else {
			update(left, a, mid, i, j); //update left sub tree
			update(right, mid+1, b, i, j); //update right sub tree
			tree[node].heads = tree[left].heads + tree[right].heads;
		}
	}
	int query(int node, int a, int b, int i, int j) {
		int mid = (a+b) >> 1;
		int left = node << 1;
		int right = left + 1;
		lazyUpdate(node, a, b);
		if (a > b || a > j || b < i)
			return 0;
		if (i <= a && b <= j)
			return tree[node].heads;
		return query(left, a, mid, i, j) + query(right, mid+1, b, i, j);
	}
	void lazyUpdate(int node, int a, int b) {
		int mid = (a+b) >> 1;
		int left = node << 1;
		int right = left + 1;
		if (tree[node].updated != 0) { //updation required
			tree[node].heads = tree[node].updated - tree[node].heads;
			if (a != b) { //not leaf nodes
				tree[left].updated = mid+1 - a - tree[left].updated;
				tree[right].updated = b - mid - tree[right].updated;
			}
			tree[node].updated = 0;
		}
	}
}