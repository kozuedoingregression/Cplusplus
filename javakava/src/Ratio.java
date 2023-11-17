class Ratio
{
    public static void main(String [] args)
    {
        System.out.println("Post Processing");
        int n=30;
        int temp1=60;

        for(int i=1;i<=n;i++)
        {
            System.out.print((temp1+=5)+" ");
            System.out.println(100-temp1);
        }
    }
}