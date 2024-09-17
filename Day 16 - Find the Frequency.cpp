int findFrequency(vector<int> a, int X){
    int cnt=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==X)
        {
            cnt++;
        }
    }
    return cnt;
}
