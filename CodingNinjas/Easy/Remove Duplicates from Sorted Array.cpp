int removeDuplicates(vector<int> &arr, int n) {
	int slow = 0, fast = 1, cnt=1;
    while(fast < n) {
        if(arr[fast] != arr[slow]) {
            cnt++;
            slow=fast;
        }
        fast++;
    }
    return cnt;
}