int maxFrequencyElements(int* nums, int numsSize) {
    int a[101]={}; //–皚柑
    int best =0;
    for(int i=0;i<numsSize;i++){
        int now =nums[i];
        a[now] ++;//瞷计now参璸瞷程Ω计琌now
        if(a[now]>best) best= a[now];
    }
    int ans = 0;
    for(int i=1;i<=100;i++){
        if(a[i]==best)ans+=a[i];
    }
    return ans;
