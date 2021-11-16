import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			int n=sc.nextInt();
			double b=sc.nextDouble();
			double totalCost=0;
			for(int i=1;i<=n;i++){
				double cost=sc.nextDouble();
				totalCost+=cost;
			}		
			if(totalCost>1000){
			    totalCost=totalCost-totalCost*0.1;
			}
			if(totalCost<=b){
			    System.out.println("YES");
			}
			else{
			    System.out.println("NO");
			}
		}
	}
}