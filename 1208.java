class Solution {
    public int equalSubstring(String s, String t, int maxCost) {
        int result = 0;
        int diff = 0;
        int start = 0;
        int end = 0;

        while(end < s.length()){
            diff += Math.abs((int)s.charAt(end) - (int)t.charAt(end));
            while(diff > maxCost){
                diff -= Math.abs((int)s.charAt(start) - (int)t.charAt(start));
                start++;
            }
            result = Math.max( (end - start + 1), result);
            end++;
        }
        return result;
    }
}