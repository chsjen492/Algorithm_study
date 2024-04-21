import java.util.*;

class Solution {
    public int[] solution(int[] arr) {
        int min=Integer.MAX_VALUE;
        if(arr.length==1){
            int[] answer = {-1};
            return answer;
        }
        int[] answer = new int[arr.length-1];
        for(int i=0;i<arr.length;i++){
            min=Math.min(min, arr[i]);
        }
        int index=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]!=min){
                answer[index]=arr[i];
                index++;
            }
        }
        return answer;
    }
}