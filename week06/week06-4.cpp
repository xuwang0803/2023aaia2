int maxFrequencyElements(int* nums, int numsSize) {
    int a[101]={}; //�C�Ӱ}�C��l�̡A
    int best =0;
    for(int i=0;i<numsSize;i++){
        int now =nums[i];
        a[now] ++;//�{�b�Ʀrnow�έp�X�{�̦h���ƬOnow
        if(a[now]>best) best= a[now];
    }
    int ans = 0;
    for(int i=1;i<=100;i++){
        if(a[i]==best)ans+=a[i];
    }
    return ans;
