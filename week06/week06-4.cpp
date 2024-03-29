int maxFrequencyElements(int* nums, int numsSize) {
    int a[101]={}; //每個陣列格子裡，
    int best =0;
    for(int i=0;i<numsSize;i++){
        int now =nums[i];
        a[now] ++;//現在數字now統計出現最多次數是now
        if(a[now]>best) best= a[now];
    }
    int ans = 0;
    for(int i=1;i<=100;i++){
        if(a[i]==best)ans+=a[i];
    }
    return ans;
