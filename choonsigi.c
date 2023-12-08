////자~드개재~
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
int main(void)
// void choonsik()
{
    FILE *file;
    char line[100];
    int wasd;
    int count;
    char behave;
    
    int map[25][25] = 
        {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
        };
    int life=3;
    int turn=0;
    while(life>0)
    {
        turn=0;
        double kg=10;
        int temp,ill=1,love=0;
        srand(time(NULL));
        while(turn<10000)
        {
            
            char size;
            if(kg<=30)
            {
                size='S';   
            }
            else if(kg<=60)
            {    
                size='M';
            }
            else if(kg>=61)
                size='L';
            printf("\n");
            for (int i = 0; i < 25; i++)
            {
                for (int j = 0; j < 25; j++)
                {
                    if (map[i][j] == 9)
                    {
                        printf(" 🐷");
                    }
                    
                    else if(map[i][j]==0)
                    {
                        printf(" 🟫");
                    }
                    else if(map[i][j]==1)
                    {
                        printf(" ⬛");
                    }
                }
                printf("\n");
            }
            int x,y;
            for (int i = 0; i < 25; i++)
            {
                for (int j = 0; j < 25; j++)
                {
                    if(map[i][j]==9)
                    {
                        x=i;
                        y=j;
                    }
                }
            }
            wasd=rand()%4+1;
            switch(wasd)
            {
                case 1:
                {
                    for(;map[x-1][y]==0;)
                    {
                        temp=map[x-1][y];
                        map[x-1][y]=map[x][y];
                        map[x][y]=temp;
                        wasd=0;
                        break;
                    }
                }
                case 2:
                {
                    for(;map[x][y-1]==0;)
                    {
                        temp=map[x][y-1];
                        map[x][y-1]=map[x][y];
                        map[x][y]=temp;
                        wasd=0;
                        break;
                    }
                }
                case 3:
                {
                    for(;map[x+1][y]==0;)
                    {
                        
                        temp=map[x+1][y];
                        map[x+1][y]=map[x][y];
                        map[x][y]=temp;
                        wasd=0;
                        break;
                    }
                }
                case 4:
                {
                    for(;map[x][y+1]==0;)
                    {
                        temp=map[x][y+1];
                        map[x][y+1]=map[x][y];
                        map[x][y]=temp;
                        wasd=0;
                        break;
                    }
                }
            }
            printf("%dturn\n",turn+1);
            srand(time(NULL));
            int poop=rand()%2;
            if(ill==0)
                {
                printf("춘식이가 병에 걸렸다\n");
                printf("몸무게%.2fkg 크기%c 애정도%d 목숨:%d\n",kg,size,love,life);
                file = fopen("아픈춘시기", "r");
                while (fgets(line, sizeof(line), file) != NULL) 
                {
                    printf("%s", line);
                }
                fclose(file);
                }
            else
                {
                printf("몸무게%.2fkg 크기%c 애정도%d 목숨:%d\n",kg,size,love,life);
                file = fopen("돌아댕기는춘시기", "r");
                while (fgets(line, sizeof(line), file) != NULL) 
                {
                    printf("%s", line);
                }
                fclose(file);
                }
            usleep(150000);
            turn++;
            love+=5;
            if(ill > 0)
            {
                kg+=0.3;
                int lifepl=rand()%100+1;
                if(lifepl<2)
                    life++;
                if(poop==1)
                    kg-=0.2;
                ill=rand()%10;
            }
            else 
            {   
                kg-=0.1;
                double love2=rand()%love*0.1;
                if(love2>10)
                {
                    ill=1;
                    system("clear");
                    continue;
                }
                if(rand()%100+1<10)
                    kg=0;
                
            }   
            system("clear");
        
            if(kg>=100)
            {
                life=0;
                count++;
                break;
            }
            if(kg<=0)
            {
                printf("%dturn\n",turn);
                printf("춘식이 주거따\n");
                printf("GameOver\n");
                file = fopen("아무것도하기시른춘시기", "r");
                while (fgets(line, sizeof(line), file) != NULL) {
                    printf("%s", line);
                }
                fclose(file);
                life--;
                usleep(1000000);
                system("clear");
                break;
            }
        }
    }
    if(count==1)
    {
        printf("%dturn\n",turn);
                printf("춘식이 다컸다\n");
                file = fopen("이긴춘시기", "r");
                while (fgets(line, sizeof(line), file) != NULL) {
                    printf("%s", line);
                }
                fclose(file);
    }
   else
   {
     printf("GameOver\n");
        file = fopen("져버린춘시기", "r");
        while (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        }
        fclose(file);
   }
    return 0;
}
    