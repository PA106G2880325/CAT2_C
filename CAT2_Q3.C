/*
 Name: Brandon Moses Owino
 Registration no :PA106/G/28803/25
 Description 
 
 */

 # include<stdio.h>
 #include<stdlib.h>
 
 int main(){
	 
 FILE *in, *out;
 int nums[10];
 int sum = 0;
 int i;
 float avg;
 
 in = fopen("input.txt", "w");
 
  if(!in){printf("Error opening input.txt\n");return 1;}
  printf("Enter 10 integers:\n");
  for(i = 0;i < 10;i++){
	  scanf("%d",&nums[i]);
	  fprintf(in, "%d\n",nums[i]);
  }
  
  fclose(in);
  
  in = fopen("input.txt", "r");
  if(!in){printf("Error reading input.txt\n");return 1;}
  	for(i = 0;i < 10;i++){
      fscanf(in, "%d",&nums[i]);
      sum += nums[i];
      
	  }
	  
  fclose(in);
  avg = sum / 10.0;
  
  out = fopen("output.txt", "w");
  if(!out) {printf("Error opening output.txt\n");return 1;}
  	fprintf(out, "sum: %d\nAvarage: %.2f\n",sum,avg);
  fclose(out);
  
  //Display content of both files
  
  char ch;
  printf("\nContents of input.txt:\n");
  in = fopen("input.txt", "r");
  while((ch = fgetc(in)) != EOF) putchar(ch);
  fclose(in);

  printf("\nContents of output.txt:\n");    
  out = fopen("output.txt", "r");  
  while((ch = fgetc(out)) != EOF) putchar(ch);
  fclose(out);

return 0;

 }
 
