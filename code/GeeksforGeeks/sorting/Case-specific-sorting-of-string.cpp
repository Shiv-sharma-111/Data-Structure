string caseSort(string str, int n){
    
    // your code here
    vector<char> v1,v2;
    //int arr[n];
    for(int i=0;i<n;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            v1.push_back(str[i]);
        }
        else
        {
            v2.push_back(str[i]);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int k1=0,k2=0;
    string F = "";
    for(int i=0;i<n;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
             F.push_back(v1[k1++]);
        }
        else
        {
             F.push_back(v2[k2++]);
        }
    }
    return F;
}
