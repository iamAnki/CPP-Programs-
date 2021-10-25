# include <iostream>
using namespace std;
class SETS
{   private :
    int a[10],b[10];
    int n, m;
    public:
    void input()
    {
        cout<<"No of elements in the 1st set ";
        cin>>n;
        cout<<"Enter the elements of the  1st set"<<endl;
        for(int i=0; i<n; i++)
        cin>>a[i];
        cout<<"No of elements in the 2nd set ";
        cin>>m;
        cout<<"Enter the elements of the  2nd set"<<endl;
        for(int i=0; i<m; i++)
        cin>>b[i];
    }
    void display()
    {
        cout<<"first set "<<endl;
        for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
        cout<<endl;
        cout<<"second set"<<endl;
        for(int i=0; i<m; i++)
        cout<<b[i]<<" ";
        cout<<endl;
    }
    void union1 ()
    { int t=m+n;
        int u[t];
        int i=0,j=0,k=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                u[k]=a[i];
                i++;
                k++;
            }
            else if(b[j]<a[i])
            {
               u[k]=b[j];
               j++;
               k++;
            }
            else if(a[i]==b[j])
            {
             u[k]=a[i];
                i++;
                j++;
                k++;
            }

        }
        while(i<n)
        {
            u[k]=a[i];
            i++;
            k++;
        }
        while(j<m)
        {
            u[k]=b[j];
            j++;
            k++;
        }
        cout<<"Union of the 1st and 2nd set is "<<endl;
        for(int s=0; s<k; s++)
        cout<<u[s]<<" ";
        cout<<endl;

    }
    void Intersection()
    {    int c[n];
        int  k=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i]==b[j])
               {
                   c[k]=a[i];
                   k++;
               }
            }
        }

        cout<<"Intersection of two 1st and 2nd "<<endl;
        for(int s=0; s<k; s++)
        {
            cout<<c[s]<<" ";
        }
        cout<<endl;
    }
    void symmetric_difference()
    {
       int t=m+n;
        int u[t];
        int i=0,j=0,k=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                u[k]=a[i];
                i++;
                k++;
            }
            else if(b[j]<a[i])
            {
               u[k]=b[j];
               j++;
               k++;
            }
            else if(a[i]==b[j])
            {
              i++;
              j++;
            }

        }
        while(i<n)
        {
            u[k]=a[i];
            i++;
            k++;
        }
        while(j<m)
        {
            u[k]=b[j];
            j++;
            k++;
        }
        cout<<"Symmetric Difference of the 1st and 2nd set is "<<endl;
        for(int s=0; s<k; s++)
        cout<<u[s]<<" ";
        cout<<endl;
    }
   int check_subset()
   {   int y=1;
   int i=0,j=0;

       for(i=0; i<n; i++)
       {
           for( j=0; j<m; j++)
           {
               if(a[i] == b[j])
                   break;
           }

           if(j==m)
           {
            cout<<"Set A is  not subset of set B"<<endl;
            return 0;
           }
       }
       return 1;
   }
   void Set_Difference()
   {  int c[n];
   int k=0;
   cout<<"Set difference 1st and 2nd set is"<<endl;
      // while(i<n)

      int j;
       for(int i=0; i<n; i++)
       {
           for( j=0; j<m; j++)
            {
                if(a[i]==b[j])
                  break;
          }
          if(j==m)
          cout<<a[i]<<" ";

       }

       cout<<endl;
   }
   void cartesianProduct()
   {
   cout<<"cartesian product of 1st to 2nd is : "<<endl;
       for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<"( "<<a[i]<<","<<b[j]<<" )"<<" ";

            }
            cout<<"  ";
        }
        cout<<endl;
   }
   void set_complement()
   { int u[20];
    int c[20];
    int k=0;
   int s;
   cout<<"Enter the size of universal set";
   cin>>s;
       cout<<" Enter the universal set "<<endl;
       for(int i=0; i<s; i++)
       {
           cin>>u[i];
       }

       for(int i=0; i<s; i++)
       {  for(int j=0; j<n; j++)
           {if(u[i]==a[j])
             i++;}
             c[k]=u[i];
             k++;

       }
       for(int l=0; l<k; l++)
       {
           cout<<c[l]<<" ";
       }
       cout<<endl;

   }

};
int main()
{SETS s;
    int c;
 char ch='y';

 while (ch =='y')
 {
     cout<<"1. Input sets "<<endl;
     cout<<"2. output sets "<<endl;
     cout<<"3. Check if 1st set is subset of 2nd"<<endl;
     cout<<"4. union of 1st and 2nd set "<<endl;
     cout<<"5. Intersection of 1st and 2nd"<<endl;
     cout<<"6. Set difference 1st set - 2nd set "<<endl;
     cout<<"7. Symmetric difference "<<endl;
     cout<<"8. Cartesian Product of 1st set to 2nd set"<<endl;
     cout<<"9. set complement of (univesal set as input)"<<endl;
     cout<<endl;
     cout<<"Enter your choice ";
     cin>>c;
     switch(c)
     {
         case 1 :   s.input();
                    break;
         case 2 :   s.display();
                     break;
         case 3 :   if( s.check_subset())
                    cout<<"1st set is subset of 2nd Set "<<endl;
                    else
                    cout<<"1st Set is not the subset of 2nd Set"<<endl;
                    break;
        case 4 :    s.union1();
                    break;
        case 5 :    s.Intersection();
                    break;
        case 6 :   s.Set_Difference();
                   break;
        case 7 :   s.symmetric_difference();
                   break;
        case 8 :   s.cartesianProduct();
                   break;
        case 9 :   s.set_complement();
                   break;
     }
     cout<<"Do you want to continue";
     cin>>ch;
 }
return 0;

}
