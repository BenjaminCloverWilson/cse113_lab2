/**
 * @file rock-spock.c
 * @author Benjamin Wilson
 * @date 9/8/2021
 * @brief Play Rock-paper-scissors-lizard-Spock against the machine
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define COMPUTER 8088
#define PLAYER 1000

#define CHOICES 5

#define ROCK 'R'
#define PAPER 'P'
#define SCISSORS 'S'
#define LIZARD 'L'
#define SPOCK 'V'

void move(int who, int move);
int winner(int computer, int player);
void print_winner(int winner, int comp_move, int player_move);
int nrand(int range);
void seed();


int main(void)
{
	int new_game = 1;
	int computer;
	int player;
        int tmp;
	int win;

	/* set up the seed value for the random number generator */
	/* call only once */
	seed();

        /* a while loop to keep playing */
	while(new_game >= 1){
		printf("\nWelcome! This is game number: %d\n", new_game);
        printf("Enter a move:\n");
	printf("R for ROCK\n");
	printf("P for PAPER\n");
	printf("S for SCISSORS\n");
	printf("L for LIZARD\n");
	printf("V for SPOCK\n");
	printf("Q to have SPOCK eat a ROCK while chasing a LIZARD and quit\n");
	printf("Move: ");
	while ((tmp = getchar()) != '\n')
                player = tmp;

        /* error check input */
	while (player != 'R' && player != 'P' && player != 'S' && player != 'L' && player != 'V' && player != 'Q'){
		printf("Invalid move! Please try again: ");
		while ((tmp = getchar()) != '\n')
			player = tmp;
	}

	/* exit from program when player selects 5 */
	if(player == 'Q'){
		printf("Thanks for playing, but Spock died eating a ROCK. Goodbye :)\n\n");
		return 0;
	}

        /* debug -- you don't need move() to play game  */
	move(PLAYER, player);

        /* generate random number for computers play */
        switch(nrand(CHOICES)) {
        case 0:
                computer = ROCK;
                break;
        case 1:
                computer = PAPER;
                break;
        case 2:
                computer = SCISSORS;
                break;
        case 3:
                computer = LIZARD;
                break;
        case 4:
                computer = SPOCK;
                break;
        }

	/*debug -- you don't need this to play the game */
	move(COMPUTER, computer);


        /* implement function winner() */
        /* implement function print_winner() */
	win = winner(computer, player);
	print_winner(win, computer, player);

	new_game++;
	}

	return 0;
}


/** prints the player's or computer's  move to stdin
 * used in debugging
 * @param who is it the computer or the player's move?
 * @param move what move did they make
 * @return void
 */
void move(int who, int move)
{
	if (who == COMPUTER)
		printf("Computer's play is ");
	else
		printf("Player's play is ");


	switch(move) {
	case ROCK:
		printf("ROCK\n");
		break;
	case PAPER:
		printf("PAPER\n");
		break;
	case SCISSORS:
		printf("SCISSORS\n");
		break;
	case SPOCK:
		printf("SPOCK\n");
		break;
	case LIZARD:
		printf("LIZARD\n");
		break;
    	}
}


/**
 * determines the winner either COMPUTER or PLAYER
 * @param computer the computer's move
 * @param player the player's move
 * @return the winner of the game; 1 = computer, 2 = player, 3 = tie
 */
int winner(int computer, int player)
{
	/* determine the winner; use switch statements */ 

	/* any flow through is intentional! */
	switch(computer){
		case 'R':
			switch(player){
			case 'R':
				return 3;
				break;
			case 'P':
			case 'V':
				return 2;
				break;
			case 'S':
			case 'L':
				return 1;
				break;
			}
		case 'P':
			switch(player){
			case 'P':
				return 3;
				break;
			case 'S':
			case 'L':
				return 2;
				break;
			case 'V':
			case 'R':
				return 1;
				break;
			}
		case 'S':
			switch(player){
			case 'S':
				return 3;
				break;
			case 'V':
			case 'R':
				return 2;
				break;
			case 'P':
			case 'L':
				return 1;
				break;
			}
		case 'L':
			switch(player){
			case 'L':
				return 3;
				break;
			case 'S':
			case 'R':
				return 2;
				break;
			case 'V':
			case 'P':
				return 1;
				break;
			}
		case 'V':
			switch(player){
			case 'V':
				return 3;
				break;
			case 'L':
			case 'P':
				return 2;
				break;
			case 'S':
			case 'R':
				return 1;
				break;
			}
	}

	return COMPUTER;
}

/**
 * prints the winner of the game to stdin
 * @param winner who won the computer or player
 * @param comp_move what move did the computer make
 * @param play_move what move did the player make
 * @return void
 */
void print_winner(int winner, int comp_move, int player_move)
{
    /* todo - use a switch statement

    print Computer Wins! or Player Wins!

    And how they won. Use the phrases below

    Scissors cuts paper
    Paper covers rock
    Rock crushes lizard
    Lizard poisons Spock
    Spock smashes scissors
    Scissors decapitates lizard
    Lizard eats paper
    Paper disproves Spock
    Spock vaporizes rock
    Rock crushes scissors
*/
	switch(winner){
		case 3:
			printf("It's a tie!\n");
			break;
		
		case 2:
			printf("Player Wins!\n");
			switch(comp_move){
			case 'R':
				switch(player_move){
				case 'P':
					printf("Paper covers rock\n");
					break;
				case 'V':
					printf("Spock vaporizes rock\n");
					break;
				}
				break;
			case 'P':
				switch(player_move){
				case 'S':
					printf("Scissors cuts paper\n");
					break;
				case 'L':
					printf("Lizard eats paper\n");
					break;
				}
				break;
			case 'S':
				switch(player_move){
				case 'V':
					printf("Spock smashes scissors\n");
					break;
				case 'R':
					printf("Rock crushes scissors\n");
					break;
				}
				break;
			case 'L':
				switch(player_move){
				case 'S':
					printf("Scissors decapitates lizard\n");
					break;
				case 'R':
					printf("Rock crushes lizard\n");
					break;
			}
				break;
			case 'V':
				switch(player_move){
				case 'L':
					printf("Lizard poisons Spock\n");
					break;
				case 'P':
					printf("Paper disproves Spock\n");
					break;
				}
				break;
			}
			
			break;
		
		case 1:
			printf("Computer Wins!\n");
			switch(player_move){
			case 'R':
				switch(comp_move){
				case 'P':
					printf("Paper covers rock\n");
					break;
				case 'V':
					printf("Spock vaporizes rock\n");
					break;
				}
				break;
			case 'P':
				switch(comp_move){
				case 'S':
					printf("Scissors cuts paper\n");
					break;
				case 'L':
					printf("Lizard eats paper\n");
					break;
				}
				break;
			case 'S':
				switch(comp_move){
				case 'V':
					printf("Spock smashes scissors\n");
					break;
				case 'R':
					printf("Rock crushes scissors\n");
					break;
				}
				break;
			case 'L':
				switch(comp_move){
				case 'S':
					printf("Scissors decapitates lizard\n");
					break;
				case 'R':
					printf("Rock crushes lizard\n");
					break;
				}
				break;
			case 'V':
				switch(comp_move){
				case 'L':
					printf("Lizard poisons Spock\n");
					break;
				case 'P':
					printf("Paper disproves Spock\n");
					break;
				}
				break;
			}
			break;
	}

}

/**
 * returns a uniform random integer n, between 0 <= n < range
 * @param range defines the range of the random number [0,range)
 * @return the generated random number
 */
int nrand(int range)
{
	return rand() % range;
}

/**
 * call this to seed the random number generator rand()
 * uses a simple seed -- the number of seconds since the epoch
 * call once before using nrand and similar functions that call rand()
 */
void seed(void)
{
  	srand((unsigned int)time(NULL));
}
