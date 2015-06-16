#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
 
 int key;
 
 do{
 	if(argc != 2){
 		printf("encryption key not found");
 		return 1;
 	}else{
 		key = atoi(argv[1]);
 	}
 	
 }while(argc != 2);
 
  char message[100];
  int message_length;
  
 printf("Enter your message: ");
 fgets(message, 100, stdin);
 message_length = strlen(message);
 int i;
 for(i=0;i<message_length;i++)
 {
 	if(isalpha(message[i])){
 		 // Work with lower case characters
            if(islower(message[i]))
            {
                printf("%c", ((((message[i] - 97)+key)%26)+97));
            }
            // Work with upper case characters
            else
            {
                printf("%c", ((((message[i] - 65)+key)%26)+65));
            }
 	}else{
 		printf("%c", message[i]);
 	}
 	
 }

return 0;
}
