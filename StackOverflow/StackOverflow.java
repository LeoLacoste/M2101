public class StackOverflow{
	public int fonction(int n){
		int res;
		if(n<=0){
			res=0;
		}
		else{
			if(n>=1){
				res=1+fonction(n-1);
			}
		}
		return res;
	}
	public static void main(String[] args){
		print(fonction(3));
	}
}
			
