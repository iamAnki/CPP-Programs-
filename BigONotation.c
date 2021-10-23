for(int i=0; i<n; i++)  
{  
  int min = i;  
  for(int j=i; j<n; j++)  
  {  
    if(array[j]<array[min])  
      min=j;  
  }  
  int temp = array[i];  
  array[i] = array[min];  
  array[min] = temp;  
}  
