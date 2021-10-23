class Solution{
    public:
   
    int countSetBits(int n)
    {
   

 if(n==0)return 0;
int x=(log2(n));
return((pow(2,x-1)*x)+(n-pow(2,x)+1)+countSetBits(n-pow(2,x)));

}

    
};



int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;
	  }
	  return 0;
}
  
