import java.util.Scanner;

class Temperature {
    public static void main(String args[])
	{
		int survey[][]=new int[30][50];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                survey[i][j]=0;
            }
        }
        int day;
        int temp;
        int flag;

        do
        {
            System.out.println("Enter day");
            day=sc.nextInt();
            System.out.println("Enter temp");
            temp=sc.nextInt();
            survey[day][temp]++;
            System.out.println("continue?");
            flag=sc.nextInt();
        }
        while(flag==1);
        
        
        System.out.println("Day\t Mumbai \tDelhi \tChennai\tKolkata");
        for(int i=0;i<5;i++)
        {
            System.out.print(i);
            for(int j=0;j<5;j++)
            {
                System.out.print("      "+survey[i][j]+"\t");
            }
            System.out.println("");
        }

	}
}