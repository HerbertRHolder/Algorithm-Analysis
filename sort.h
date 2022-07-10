#include <iostream>
using namespace std;
#include <algorithm>
using namespace std;

int hswap = 0;
int mswap = 0;
int qswap = 0;
int sswap = 0;
int iswap = 0;

int hcount = 0;
// To heapify a subtree rooted with node i which is 
// an index in arr[]. n is size of heap 
void heapify(int arr[], int n, int i) 
{ 
    
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        {largest = l; hcount++;}
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        {largest = r; hcount++;} 
        
    // If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 

        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 
  
// main function to do heap sort 
void heapSort(int arr[], int n) 
{ 
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--) 
        {
          heapify(arr, n, i);
          hcount++; 
        }
  
    // One by one extract an element from heap 
    for (int i=n-1; i>0; i--) 
    { 
      hcount++;
        // Move current root to end 
        swap(arr[0], arr[i]); 
  
        // call max heapify on the reduced heap 
        heapify(arr, i, 0); 
    } 
} 


int mcount = 0;
void merge (int a[], int lf, int ll, int rf, int rl)
{
  int temp[100];
  int j = lf;
  int save = lf;
   
  while ( (lf <= ll) && (rf <= rl))
  {
    mcount++;
    if (a[lf] < a[rf])
    {
      temp[j++] = a[lf++];
      mcount++;
    }
    else 
          temp [j++] = a[rf++];     
  }

  while (lf <= ll )
    {
      temp[j++] = a[lf++];
      mcount++;
    }

  while ( rf <= rl )
    {
      temp[j++] = a[rf++];
      mcount++;
    }

  for ( j = save; j<= rl; j++)
      {
        a[j] = temp[j];
        mcount++;
      }      
}

void mergeSort (int a[], int first, int last)
{
   if ( first < last )
   {
     mcount++;
      int middle = (first+last) / 2;                                               
      mergeSort (a,first,middle);
      mergeSort (a,middle+1,last);
      merge (a,first,middle,middle+1,last); 
   }
}

int qcount = 0;

void swap ( int &x, int &y)
{
   int temp = x;
   x = y;
   y = temp; 
}

void partition ( int a[], int first, int last, int &p)
{
    int pivot = a[first];
    int j;

    p = first;

    for ( j = first+1; j <= last; j++)
    {
      qcount++;
         if ( a[j] < pivot )
         {
           qcount++;
             p++;
             swap (a[p], a[j]);
         }
    }
   
    swap (a[first], a[p]);
}


void quickSort ( int a[], int first, int last)
{
   if ( first < last ) 
   {
      qcount++;
      int point;
      partition (a,first,last,point);
      quickSort (a,first,point-1 );
      quickSort (a, point+1, last);
   }
}
int scount = 0;
void selectionSort ( int a[], int n )
{  
	int i,j, min;

	for ( i = 0; i < n-1; i++)
	{
    scount++;
		min = i;
		for ( j = i+1; j < n; j++ ) 
    {
      scount++;
			if ( a[j] < a[min] )
      {
        scount++;
				min = j;
                                 
      }
                               
    }
    swap (a[i], a[min]); 
    
	}

}
int icount = 0;
void insertionSort ( int a[], int n )
{  
	int i,j;
	bool order;

	for ( i = 1; i < n ; i++ )
	{
    icount++;
      order = false;
	    j = i;
	    while ( j != 0 && !order)
	    {
        icount++;
        if ( a[j] < a[j-1] )
		    {
          icount++;
          swap (a[j], a[j-1]);
		      j--;
		     }
	      else order = true;
	    }
  }
}

void bigMerge (int a[], int lf, int ll, int rf, int rl)
{
  int temp[1000];
  int j = lf;
  int save = lf;
   
  while ( (lf <= ll) && (rf <= rl))
  {
    mcount++;
    if (a[lf] < a[rf])
    {
      temp[j++] = a[lf++];
      mcount++;
    }
    else 
          temp [j++] = a[rf++];     
  }

  while (lf <= ll )
    {
      temp[j++] = a[lf++];
      mcount++;
    }

  while ( rf <= rl )
    {
      temp[j++] = a[rf++];
      mcount++;
    }

  for ( j = save; j<= rl; j++)
      {
        a[j] = temp[j];
        mcount++;
      }      
}

void bigMergeSort (int a[], int first, int last)
{
   if ( first < last )
   {
     mcount++;
      int middle = (first+last) / 2;                                               
      bigMergeSort (a,first,middle);
      bigMergeSort (a,middle+1,last);
      bigMerge (a,first,middle,middle+1,last); 
   }
}


