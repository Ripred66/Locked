#include <stdio.h>
#include "mygetch.h"



struct rooms{
  
  int wall[3];	
	
};

void roomcheck(int *r, int *x, int *y);

int main(void){

  char m;
  char q = 'n';
  
  int d = 0;
  int r;
  int x = 0;
  int y = 0;
  
  printf("Controls:\n\nW to move forward.\nA to turn left.\nD to turn right.\nS to search.\n\n");
  
  do{
	
	roomcheck(&r, &x, &y);
	
	m = mygetch();
	
	switch(m){
		
	  case 'w':
	  
	    printf("You move forward.\n");
	    
	    switch(d){
		
		  case 0:
		  
		  y = y+1;
		  break;
		  
		  case 1:
		  
		  x = x+1;
		  break;
		  
		  case 2:
		  
		  y = y-1;
		  break;
		  
		  case 3:
		  
		  x = x-1;
		  break;
		  
		  default:
		  break;	
			
		}
        break;
        
      case 'a':
      
        printf("You turn left.\n");
        
        if(d == 0){
			
		  d = 3;
		}else if(d > 0){
			
		  d = d-1;
		}
	  break;
	  
	  case 'd':
	  
	    printf("You turn right.\n");
	    
	    if(d == 3){
	    
	      d = 0;
	    }else if(d < 3){
			
		  d = d+1;
	    }
	    
	    
		
		
	}
	printf("Your location is: %d,%d\n\n", x,y);
	  
	  
	  

  }while(q != y);
	
	
	
	

return 0;
}

void roomcheck{

}
