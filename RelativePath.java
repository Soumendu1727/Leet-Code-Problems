public class Main {
    public static String relative_path(String string_1, String string_2) {
        String[] parts1 = string_1.split("/");
        String[] parts2 = string_2.split("/");

        int i = 1;
        while (i < parts1.length && i < parts2.length && parts1[i].equals(parts2[i])) {
            i++;
        }

        StringBuilder relativePath = new StringBuilder();

        for (int j = i; j < parts1.length; j++) {
            relativePath.append("../");
        }

        for (int k = i; k < parts2.length; k++) {
            relativePath.append(parts2[k]);
            if (k < parts2.length - 1) {
                relativePath.append("/");
            }
        }

        return relativePath.toString();
    }

    public static void main(String[] args) {
        String string_1 = "/home/ubuntu/finplus/cards/order";
        String string_2 = "/home/ubuntu/motor/bank/gateway";
        System.out.println(relative_path(string_1, string_2));

        string_1 = "/home/ubuntu/finplus/cards/order";
        string_2 = "/home/ubuntu/finplus/expenses/records";
        System.out.println(relative_path(string_1, string_2));
    }
}