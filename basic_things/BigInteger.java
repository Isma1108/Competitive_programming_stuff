import java.util.*;
import java.math.BigInteger;

class Main {
	public static void main(String[] args) {
		BigInteger fac = BigInteger.ONE;
		for (int i = 2; i <= 42; ++i)
			fac = fac.multiply(BigInteger.valueOf(i));
		System.out.println(fac);
	}
}
