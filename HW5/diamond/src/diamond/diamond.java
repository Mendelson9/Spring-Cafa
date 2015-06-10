package diamond;

public class diamond {
	static String top(int w) {
		String result = "";
		for (int k = 1; k < (w*2); k++) {
			for (int i = 0; i < (w*2) - k; i++) {
				result += " ";
			}
			for (int i = 0; i < 0 + k; i++) {
				result += "*";
			}
			for (int i = 0; i < 0 + k; i++) {
				result += "*";
			}
			for (int i = 0; i <= 0 + k; i++) {
				result += " ";
			}
			result += "\n";
		}
		return result;
	}
	
	
	static String bottom(int w) {
		String result = "";
		for (int k = w+2; k > 0; k--) {
			for (int i = 0; i < (w*2) - k; i++) {
				result += " ";
			}
			for (int i = 0; i < 0 + k; i++) {
				result += "*";
			}
			for (int i = 0; i < 0 + k; i++) {
				result += "*";
			}
			for (int i = 0; i <= 0 + k; i++) {
				result += " ";
			}
			result += "\n";
		}
		return result;
	}

public static void main(String[] args) {
	int size = 3;
	System.out.print(top(size));
	System.out.println(" ");
	System.out.print(bottom(size));
}

}
