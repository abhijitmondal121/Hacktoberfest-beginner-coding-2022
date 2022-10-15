package treeBinary;



public class noOfNodes {
		public static class Node{
			int data;
			Node left;
			Node right;
			Node(int data)
			{
				this.data=data;
				this.left=null;
				this.right=null;
			}
		}
		
		public static class binaryTree
		{
			static int idx=-1;
			public static Node builtree(int nodes[])
			{
			idx++;
			if(nodes[idx]==-1)
			{
				return null;
			}
			Node newNode=new Node(nodes[idx]);
			newNode.left=builtree(nodes);
			newNode.right=builtree(nodes);
			return newNode;
			}
		}
		
		public static int count(Node root)
		{
			if(root==null)
			{
				return 0;
			}
			int left=count(root.left);
			int right=count(root.right);
			
			return left+right+1;
			
		}
		
		public static void main(String args[])
		{
		int nodes[]= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
		binaryTree tree=new binaryTree();
		Node root=tree.builtree(nodes);
		System.out.println("No of Nodes is:"+ count(root));

			
		}
	

}
