#include <iostream>
#include "sort.h"
using namespace std;


int main() 
{

  time_t t;
  time(&t);
  srand(t);
  int first = 0, last = 100;
  int century = 100; 
  int a[century]; 
  int b[century]; 
  int c[century]; 
  int d[century]; 
  int e[century]; 
  
   
  int n = sizeof(a)/sizeof(a[0]); 
 
  // Random Numbers 
  cout << "array size 100" << endl << "RANDOM NUMBERS-------------------------------------" << endl;
  
  for (int i = 0;i < century;i++)
  {
    a[i] = (rand() % 101);
    b[i] = (rand() % 101);
    c[i] = (rand() % 101);
    d[i] = (rand() % 101);
    e[i] = (rand() % 101);
  }
  
  cout << endl;
  heapSort (a, century); 
  cout << "Heap Sorted array is \n";
   for (int i = 0;i<century;i++)
    {
      cout << a[i] << " "; 
    }
    cout << endl;
  cout  << "comparisons: "<< hcount << endl  << endl;
  int hscore = hcount;
  cout << endl;
   
  mergeSort (b,0, century-1);
  cout << "mergeSort array: " << endl;
  if (mcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    for (int i = 0;i<century;i++)
    {
      cout << b[i] << " "; 
    }
    cout << endl;
    cout  << "comparisons: "<< mcount << endl  << endl;
    
    mcount = 0;
  }
  quickSort ( c, first, last-1);
  if (qcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout << "Quick Sorted array is \n"; 
    for (int i = 0;i<century;i++)
    {
      cout << c[i] << " "; 
    }
    cout << endl;
    cout  << "comparisons: "<< qcount << endl  << endl << endl;
    qcount = 0;
  }

  selectionSort ( d, century);
  if (scount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
   cout << "Selection Sorted array is \n";
    for (int i = 0;i<century;i++)
    {
      cout << d[i] << " "; 
    }
    cout << endl;
    cout  << "comparisons: "<< scount << endl  << endl << endl;
    scount = 0;
  }

  cout << endl;
  insertionSort ( e, century);
   if (icount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
   cout << "Insertion Sorted array is \n";
    for (int i = 0;i<century;i++)
    {
      cout << e[i] << " "; 
    }
    cout << endl;
    cout  << "comparisons: " << icount << endl  << endl << endl;
    icount = 0;
  }

  cout << endl << "90% in Order 10% Random NUMBERS-------------------------------------" << endl;
  for (int i = 0;i < century;i++)
  {
    a[i] = (rand() % 101);
    b[i] = (rand() % 101);
    c[i] = (rand() % 101);
    d[i] = (rand() % 101);
    e[i] = (rand() % 101);
  }
  sort(a, a+90);
  sort(b, b+90);
  sort(c, c+90);
  sort(d, d+90);
  sort(e, e+90);


  cout << endl;
  heapSort (a, century); 
  cout << "Heap Sorted array is \n";
  cout  << "comparisons: "<< hcount << endl  << endl;
  cout << endl;
   
  mergeSort (b,0, century-1);
  cout << "mergeSort array: " << endl;
  if (mcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout  << "comparisons: "<< mcount << endl  << endl;
    mcount = 0;
  }
  quickSort ( c, first, last-1);
  if (qcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout << "Quick Sorted array is \n"; 
    cout  << "comparisons: "<< qcount << endl  << endl << endl;
    qcount = 0;
  }

  selectionSort ( d, century);
  if (scount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout << "Selection Sorted array is \n";
    cout  << "comparisons: "<< scount << endl  << endl << endl;
    scount = 0;
  }

  cout << endl;
  insertionSort ( e, century);
   if (icount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout << "Insertion Sorted array is \n";
    cout  << "comparisons: " << icount << endl  << endl << endl;
    icount = 0;
  }







  
  // PRE-SORTED IN DESCENDING ORDER

    cout << "PRE-SORTED IN DESCENDING ORDER -------------------------------------------" << endl << endl;

    sort(a, a+century, greater<int>());
    sort(b, b+century, greater<int>());
    sort(c, c+century, greater<int>());
    sort(d, d+century, greater<int>());
    sort(e, e+century, greater<int>());



    cout << "HeapSort Descending array" << endl;
    for (int i = 0;i<century;i++)
    {
      cout << a[i] << " "; 
    }
    cout << endl;
     heapSort (a, century); 
     cout << "Heap Sorted array \n"; 
     if (hcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    for (int i = 0;i<century;i++)
    {
      cout << a[i] << " "; 
    }
    cout << endl;
    cout  << "comparisons: "<< hcount << endl  << endl;
    hcount = 0;
  }

  
    cout << "MergeSort Descending array" << endl;
    for (int i = 0;i<century;i++)
    {
      cout << b[i] << " "; 
    }
    cout << endl;
     mergeSort (b,0,century-1); 
     cout << "Merge Sorted array \n"; 
     if (mcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    for (int i = 0;i<century;i++)
    {
      cout << b[i] << " "; 
    }
    cout << endl;
    cout  << "comparisons: "<< mcount << endl  << endl;
    mcount = 0;
  }

  
    cout << "QuickSort Descending array" << endl;
    for (int i = 0;i<century;i++)
    {
      cout << c[i] << " "; 
    }
    cout << endl;
     quickSort (c,first, last-1); 
     cout << "Quick Sorted array \n"; 
     if (qcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    for (int i = 0;i<century;i++)
    {
      cout << c[i] << " "; 
    }
    cout << endl;
    cout  << "comparisons: "<< qcount << endl  << endl;
    qcount = 0;
  }

  
    cout << "selectionSort Descending array" << endl;
    for (int i = 0;i<century;i++)
    {
      cout << d[i] << " "; 
    }
    cout << endl;
     selectionSort (d,century); 
     cout << "selection Sorted array \n"; 
     if (scount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    for (int i = 0;i<century;i++)
    {
      cout << d[i] << " "; 
    }
    cout << endl;
    cout  << "comparisons: "<< scount << endl  << endl;
    scount = 0;
  }

  
    cout << "InsertionSort Descending array" << endl;
    for (int i = 0;i<century;i++)
    {
      cout << e[i] << " "; 
    }
    cout << endl;
     insertionSort (e,century);
     cout << "Insertion Sorted array \n"; 
     if (icount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    for (int i = 0;i<century;i++)
    {
      cout << e[i] << " "; 
    }
    cout << endl;
    cout  << "comparisons: "<< icount << endl  << endl;
    icount = 0;
  }



















cout << endl<< endl<< endl<< "Array Size 1000" << endl << "RANDOM NUMBERS-------------------------------------" << endl;
  








  int millenium = 1000;
  first = 0;
  last = millenium;
  int A[millenium]; 
  int B[millenium]; 
  int C[millenium]; 
  int D[millenium]; 
  int E[millenium]; 

  for (int i = 0;i < millenium;i++)
  {
    A[i] = (rand() % 101);
    B[i] = (rand() % 101);
    C[i] = (rand() % 101);
    D[i] = (rand() % 101);
    E[i] = (rand() % 101);
  }

cout << endl;
  heapSort (A, millenium); 
  cout << "Heap Sorted array is \n";
  cout  << "comparisons: "<< hcount << endl  << endl;
  cout << endl;
   
  bigMergeSort (B,0, millenium-1);
  cout << "mergeSort array: " << endl;
  if (mcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout  << "comparisons: "<< mcount << endl  << endl;
    mcount = 0;
  }
  quickSort ( C, first, last);
  if (qcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout << "Quick Sorted array is \n"; 
    cout  << "comparisons: "<< qcount << endl  << endl << endl;
    qcount = 0;
  }

  selectionSort ( D, millenium);
  if (scount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
   cout << "Selection Sorted array is \n";
    cout  << "comparisons: "<< scount << endl  << endl << endl;
    scount = 0;
  }

  cout << endl;
  insertionSort ( E, millenium);
   if (icount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
   cout << "Insertion Sorted array is \n";
    cout  << "comparisons: " << icount << endl  << endl << endl;
    icount = 0;
  }

  cout << endl << "90% in Order 10% Random NUMBERS-------------------------------------" << endl;
  for (int i = 0;i < millenium;i++)
  {
    A[i] = (rand() % 101);
    B[i] = (rand() % 101);
    C[i] = (rand() % 101);
    D[i] = (rand() % 101);
    E[i] = (rand() % 101);
  }
  sort(A, A+900);
  sort(B, B+900);
  sort(C, C+900);
  sort(D, D+900);
  sort(E, E+900);


  cout << endl;
  heapSort (A, millenium); 
  cout << "Heap Sorted array is \n";
  cout  << "comparisons: "<< hcount << endl  << endl;
  cout << endl;
   
  bigMergeSort (B,0, millenium-1);
  cout << "mergeSort array: " << endl;
  if (mcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout  << "comparisons: "<< mcount << endl  << endl;
    mcount = 0;
  }
  quickSort ( C, first, last);
  if (qcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout << "Quick Sorted array is \n"; 
    cout  << "comparisons: "<< qcount << endl  << endl << endl;
    qcount = 0;
  }

  selectionSort ( D, millenium);
  if (scount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout << "Selection Sorted array is \n";
    cout  << "comparisons: "<< scount << endl  << endl << endl;
    scount = 0;
  }

  cout << endl;
  insertionSort ( E, millenium);
   if (icount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout << "Insertion Sorted array is \n";
    cout  << "comparisons: " << icount << endl  << endl << endl;
    icount = 0;
  }







  
  // PRE-SORTED IN DESCENDING ORDER

    cout << "PRE-SORTED IN DESCENDING ORDER -------------------------------------------" << endl << endl;

    sort(A, A+millenium, greater<int>());
    sort(B, B+millenium, greater<int>());
    sort(C, C+millenium, greater<int>());
    sort(D, D+millenium, greater<int>());
    sort(E, E+millenium, greater<int>());

    cout << endl;
     heapSort (A, millenium); 
     cout << "Heap Sorted array \n"; 
     if (hcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout  << "comparisons: "<< hcount << endl  << endl;
    hcount = 0;
  }


    cout << endl;
     bigMergeSort (B,0,millenium-1); 
     cout << "Merge Sorted array \n"; 
     if (mcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout  << "comparisons: "<< mcount << endl  << endl;
    mcount = 0;
  }


  
    cout << endl;
     quickSort (C,first, last); 
     cout << "Quick Sorted array \n"; 
     if (qcount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    cout  << "comparisons: "<< qcount << endl  << endl;
    qcount = 0;
  }

  
    
    
     selectionSort (D,millenium); 
     cout << "selection Sorted array \n"; 
     if (scount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    
    cout  << "comparisons: "<< scount << endl  << endl;
    scount = 0;
  }

  
    
    
     insertionSort (E,millenium);
     cout << "Insertion Sorted array \n"; 
     if (icount == 0)
  {cout << "Sort failed" << endl;}
  else 
  {
    
    cout  << "comparisons: "<< icount << endl  << endl;
    icount = 0;
  }


cout  << endl << "In conclusion each sorting algorithm has an advantage when placed in different"  << endl  <<   " senarios, "  <<    "heapsort has less comparisons when sorting random numbers, "  << endl <<"90% sorted, and " <<   "descending order in both 100 and 1000 size arrays"  << endl  << endl  << endl  <<  endl;






  
 
 

  
 
}