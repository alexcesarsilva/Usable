import java.util.Scanner;

public class Print {
	public static void main(String[] args) {
		Scanner choose = new Scanner(System.in);

		System.out.print("Type first page: ");
		int firstPage = choose.nextInt();

		System.out.print("Type last page: ");
		int lastPage = choose.nextInt();

		int i = 0;
		for (i = firstPage; i < lastPage; i+= 2)
		{
			System.out.print(i + ", ");
		}
		 if (i == lastPage)
		 {
		 	System.out.println(i);
		 }
		choose.close();
	}
}