public class Morse 
{
	private static final int[] endings = {2,4,8,14,32};
	private static boolean spaces = true;
	private static final char[][] alphabet =
	{
	{'e','t'},
	{'i','a','n','m'},
	{'s','u','r','w','d','k','g','o'},
	{'h','v','f',' ','l',' ','p','j','b','x','c','y','z','q'},
	{'5','4',' ','3',' ',' ',' ','2',' ',' ',' ',' ',' ',' ',' ','1','6',' ',' ',' ',' ',' ',' ',' ','7',' ',' ',' ','8',' ','9','0'}		
	};
	private static int numCount(int x)
	{
		int count = 0;
		while(x > 1)
		{
			x /= 10;
			count ++;
		}
		return count;
	}
	private static String construct(int total, int in)
	{
		StringBuilder mine = new StringBuilder();
		for(int i = total - 1; i >= 0; i--)
		{
			mine.insert(0,(char)(in % 10 + (int)'0'));
			in /= 10;
		}
		return mine.toString();
	}
	static String to_Morse(int par)
	{
		if(par <= 9  && par >= 0)
		{
			return to_Morse((char)(par + (int)('0')));
		}
		else
		{
			return to_Morse(construct(numCount(par), par));
		}
	}
    static String to_Morse(char par)
    {
    	if(par == ' ')
    	{
    		return " ";
    	}
    	else
    	{
    		String awnser = "";
    		if(Character.isUpperCase(par));
    		{
    			par = Character.toLowerCase(par);
    		}
    		for(int down = 0; down < 5; down++)
    		{
    			for(int side = 0; side < endings[down]; side++)
    			{
    				if(par == alphabet[down][side])
    				{
    					int x = side;
    					for(int i = down; i >= 0; i--)
    					{
    						if(x % 2 == 0)
    						{
    							awnser += '.';
    							x /= 2;
    						}
    						else if(x % 2 == 1)
    						{
    							awnser += '-';
    							x /= 2;
    						}
    					}
    				}
    			}
    		}
    		return awnser;
    	}
    }
    static String to_Morse(String par)
    {
		StringBuilder max = new StringBuilder();
		for(int i = 0; i < par.length(); i++)
		{
			if(par.charAt(i) != ' ')
			{
				max.insert(i, to_Morse(par.charAt(i)));
			}
			if(spaces)
			{
				max.insert(i, ' ');
			}
		}
		return max.toString();
    }
    static void setSpaces(boolean tf)
    {
    	spaces = tf;
    }
}
