int foo(int n, int k) 
{ 
    return (n | (1 << (k - 1))); 
} 
  
int bar(int n, int k) 
{ 
    return (n & (~(1 << (k - 1)))); 
} 
  
int baz(int n, int k) 
{ 
    return (n ^ (1 << (k - 1))); 
} 
