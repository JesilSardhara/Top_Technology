#include <stdio.h>

int main()
{
    int choise;
    int i;
    char newteam[10][100] = {
	"Chennai Super Kings",
    "Royal Challengers Bengaluru",
    "Mumbai Indians"
	};
	int count = 3;
    
    
    while(1){
    	printf("--IPL manu--\n");
    	printf("1.IPL Teams\n");
    	printf("2.Add a IPL Team\n");
    	printf("3. Exit\n");
    	
    	printf("enter a choise:");
    	scanf("%d",&choise);
    switch(choise){
    	case 1:
    		printf("---IPL Teams---\n");
    		
    			for( i = 0; i < count; i++){
  				  printf("%d. %s\n", i + 1, newteam[i]);
				}
           	break;
           	
        case 2:
        	if(count >= 10){
                    printf("\nError: Team List is full! Cannot add more teams.\n");
                } else {
                    printf("Enter a New IPL Team: ");
                    scanf(" %[^\n]", newteam[count]);
                    printf("\n'%s' Team added Successfully!\n", newteam[count]);
                    count++;
                }
            break;
        	
        case 3:
        	printf("end the program\n");
        	return 0;
        	
        default:
        	printf("invalid choise:%d\n\n",choise);
        
		}	
	}

    return 0;
}
