public class StringSort1 {
    public static void main(String[] args) {
        String[] str = { "5-1-9", "5-2-5", "5-2-4", "5-3-1", "8-1-5" };
        sort(str);
        System.out.println("最后结果为：");
        for (int i = 0; i < str.length; i++) {
            System.out.println(str[i]);
        }
    }

    public static String[] sort(String[] str) {
        int count = 0;
        // 冒泡算法：2个for循环
        for (int i = 0; i < str.length; i++) 
        {
            for (int j = 0; j < str.length - i - 1; j++) 
            {
                count++;
                // 解析相邻两个数并比较大小
                String[] s = str[j].split("-");
                int[] first = new int[3];
                first[0] = Integer.parseInt(s[0]);
                first[1] = Integer.parseInt(s[1]);
                first[2] = Integer.parseInt(s[2]);
                String[] s2 = str[j + 1].split("-");
                int[] second = new int[3];
                second[0] = Integer.parseInt(s2[0]);
                second[1] = Integer.parseInt(s2[1]);
                second[2] = Integer.parseInt(s2[2]); // 比较3种情况进行交换:
                String temp;
    if (first[0] < second[0] || (first[0] == second[0] && first[1] < second[1])|| (first[0] == second[0] && first[1] == second[1] && first[2] < second[2]))
                
                {
                    temp = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = temp;
                }
            }
        }
        System.out.println("遍历了" + count + "次");
        return str;
    }
}




