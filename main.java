import java.util.Random;
public class main extends Morse 
{
	public static void main(String[] args)
	{
		Random r = new Random();
		for(int i = 0; i < 100; i++)
		{
			to_Morse(r.nextInt(100));
			to_Morse('c');
			to_Morse("fackjljvWO;IA;JIWI");
		}
	}
}
