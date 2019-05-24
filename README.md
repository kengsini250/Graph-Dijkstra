# Graph-Dijkstra


node size : 12

     name : A----> Next
--- weight : 4  ---  B 
--- weight : 3  ---  C 
--- weight : 5  ---  D 

     name : B----> Next
--- weight : 2  ---  C 
--- weight : 3  ---  E 

     name : C----> Next
--- weight : 1  ---  E 
--- weight : 7  ---  F 
--- weight : 3  ---  G 

     name : D----> Next
--- weight : 2  ---  C 

     name : E----> Next
--- weight : 4  ---  F 

     name : F----> Next
--- weight : 2  ---  H 
--- weight : 3  ---  I 
--- weight : 5  ---  J 
--- weight : 6  ---  K 

     name : G----> Next
--- weight : 3  ---  F 
--- weight : 5  ---  H 

     name : H----> Next
--- weight : 4  ---  K 

     name : I----> Next
--- weight : 2  ---  J 
--- weight : 5  ---  L 

     name : J----> Next
--- weight : 5  ---  K 
--- weight : 4  ---  L 

     name : K----> Next
--- weight : 1  ---  L 

     name : L----> Next



Dijkstra

WEIGHT : 
99 4  3  5  99 99 99 99 99 99 99 99 
99 99 2  99 3  99 99 99 99 99 99 99 
99 99 99 99 1  7  3  99 99 99 99 99 
99 99 2  99 99 99 99 99 99 99 99 99 
99 99 99 99 99 4  99 99 99 99 99 99 
99 99 99 99 99 99 99 2  3  5  6  99 
99 99 99 99 99 3  99 5  99 99 99 99 
99 99 99 99 99 99 99 99 99 99 4  99 
99 99 99 99 99 99 99 99 99 2  99 5  
99 99 99 99 99 99 99 99 99 99 5  4  
99 99 99 99 99 99 99 99 99 99 99 1  
99 99 99 99 99 99 99 99 99 99 99 99 


==============DEBUG=====================

Node  : A    B    C    D    E    F    G    H    I    J    K    L    
Cost  : 0    4    3    5    99   99   99   99   99   99   99   99   
Found : 1    0    0    0    0    0    0    0    0    0    0    0    
From  : -    A    A    A    -    -    -    -    -    -    -    -    

==============DEBUG=====================



==============DEBUG=====================

Node  : A    B    C    D    E    F    G    H    I    J    K    L    
Cost  : 0    4    3    5    1    7    3    99   99   99   99   99   
Found : 1    0    1    0    0    0    0    0    0    0    0    0    
From  : -    A    A    A    C    C    C    -    -    -    -    -    

==============DEBUG=====================



==============DEBUG=====================

Node  : A    B    C    D    E    F    G    H    I    J    K    L    
Cost  : 0    4    3    5    1    4    3    99   99   99   99   99   
Found : 1    0    1    0    1    0    0    0    0    0    0    0    
From  : -    A    A    A    C    E    C    -    -    -    -    -    

==============DEBUG=====================



==============DEBUG=====================

Node  : A    B    C    D    E    F    G    H    I    J    K    L    
Cost  : 0    4    3    5    1    4    3    2    3    5    6    99   
Found : 1    0    1    0    1    1    0    0    0    0    0    0    
From  : -    A    A    A    C    E    C    F    F    F    F    -    

==============DEBUG=====================



==============DEBUG=====================

Node  : A    B    C    D    E    F    G    H    I    J    K    L    
Cost  : 0    4    3    5    1    4    3    2    3    5    4    99   
Found : 1    0    1    0    1    1    0    1    0    0    0    0    
From  : -    A    A    A    C    E    C    F    F    F    H    -    

==============DEBUG=====================



==============DEBUG=====================

Node  : A    B    C    D    E    F    G    H    I    J    K    L    
Cost  : 0    4    3    5    1    4    3    2    3    5    4    1    
Found : 1    0    1    0    1    1    0    1    0    0    1    0    
From  : -    A    A    A    C    E    C    F    F    F    H    K    

==============DEBUG=====================



==============DEBUG=====================

Node  : A    B    C    D    E    F    G    H    I    J    K    L    
Cost  : 0    4    3    5    1    4    3    2    3    5    4    1    
Found : 1    0    1    0    1    1    0    1    0    0    1    1    
From  : -    A    A    A    C    E    C    F    F    F    H    K    

==============DEBUG=====================


