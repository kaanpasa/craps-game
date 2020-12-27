#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int dicef(n);
int main(){
	srand(time(NULL));
	int lastsum, sum;
	printf("-Welcome to the Craps Game-\n");
	lastsum=dicef(rand());
	if(lastsum==7 || lastsum==11){
		printf("Congrats! You win in the first round.\n");
		return 0;
	}else if(lastsum==2 || lastsum==3 || lastsum==12){
		printf("Craps!\n");
		return 0;
	}else{
		while(lastsum!=13){
			sum=dicef(rand());
			if(sum==7){
				printf("You lose.\n");
				return 0;
			}else if(lastsum==sum){
				printf("%d\nYou Win.", sum);
				return 0;
			}else{
				lastsum=sum;
			}
		}
	}
}

int dicef(n){
	int sum=0, dice1, dice2;
		srand(n);
		dice1=1+rand()%6;
		dice2=1+rand()%6;
		sum=dice1+dice2;
		printf("%d\n", sum);
	return sum;
}
