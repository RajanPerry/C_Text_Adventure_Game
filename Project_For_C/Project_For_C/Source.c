#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void mysteryRoom();
void mysteryRoom8Ball();
void mysteryRoomLemon();
void mysteryRoomBook();
void mysteryRoomRiddle();
void mysteryRoomMirror();
void mysteryRoomSaw();
void mysteryRoomHole();
char randomChar();

int main() {
	srand(time(NULL));
	mysteryRoom();
	system("pause");
}

void mysteryRoom() {
	printf_s("Welcome to the Mystery Room game!\n");
	printf_s("Type in commands to explore the room and find the exit!\n");
	printf_s("You have two actions you can perform: LOOK and USE.\n");
	printf_s("You type in commands by typing the verb you wish to act, \n");
	printf_s("then using space, and then typing in the noun you wish to act upon.\n");
	printf_s("Example: 'LOOK FISH'.\n");
	printf_s("To practice, since you wish to play this GAME, type 'USE GAME'.\n");
	char response[100];
	int end = 0;
	do {
		printf_s("\nCommand-->");
		gets(response);
		if (strcmp(response, "USE GAME") == 0) {
			printf_s("Good job!\n");
			mysteryRoom8Ball();
			end = 1;
		} else if (strcmp(response, "PLAY GAME") == 0) {
			printf_s("Cheeky.\n");
		} else {
			printf_s("Don't know how to %s.\n", response);
		}
	} while (end != 1);
	
}

void mysteryRoom8Ball() {
	printf_s("\n - - - - - - Start - - - - - - \n");
	printf_s("You are inside a room with no doors that contains only a TABLE, a SHELF, and a SPHINX.\n");
	char response[100];
	int open = 0;
	int end = 0;
	do {
		printf_s("\nCommand-->");
		gets(response);
		if (strcmp(response, "LOOK TABLE") == 0) {
			printf_s("The TABLE is made of wood. You can tell it was once \n");
			printf_s("painted a dark brown by the occasional bits of coloration on \n");
			printf_s("the TABLE but it seems like someone tried to scrap off the \n");
			printf_s("paint. The TABLE surface is very uneven and full of scratches. \n");
			printf_s("On the TABLE there is a lit CANDLE and a BOX with a NOTE on it.\n");
		} else if (strcmp(response, "LOOK SHELF") == 0) {
			printf_s("The SHELF seems to be made out of wood. It is painted red but \n");
			printf_s("the paint is very faded and has been chipped off in a couple \n");
			printf_s("places. There is a single BOOK and an ORB laying on the shelf.\n");
		} else if (strcmp(response, "LOOK CANDLE") == 0) {
			printf_s("The CANDLE is freshly lit. The flame hasn't worn down the wax by much.\n");
		} else if (strcmp(response, "LOOK BOX") == 0) {
			if (open == 1) {
				printf_s("The BOX is open!\n");
			}
			else {
				printf_s("The BOX looks to be made from cardboard. It has been painted \n");
				printf_s("in a stripped pattern using every color of the rainbow. There \n");
				printf_s("is a NOTE taped onto the box.\n");
			}
		} else if (strcmp(response, "LOOK NOTE") == 0) {
			printf_s("The NOTE reads, 'When it has been shaken to my favorite.'\n");
		} else if (strcmp(response, "LOOK BOOK") == 0) {
			printf_s("The BOOK is a hardback with no paper cover. The BOOK's cover \n");
			printf_s("is blue and has no writing on the front, back, or spine. \n");
			printf_s("Opening the BOOK, you discover the pages are also blank. \n");
			printf_s("Unlike the SHELF, the BOOK seems quite new and not aged.\n");
		} else if (strcmp(response, "LOOK ORB") == 0) {
			printf_s("The ORB is black in color, and, on closer inspection, you \n");
			printf_s("discover that the ORB is in fact a MAGIC EIGHT BALL!\n");
		} else if (strcmp(response, "LOOK MAGIC EIGHT BALL") == 0) {
			printf_s("The MAGIC EIGHT BALL is a black ORB that has a little window \n");
			printf_s("in it at one spot, presumably where the message will show up \n");
			printf_s("when you shake it.\n");
		} else if (strcmp(response, "USE TABLE") == 0) {
			printf_s("You move your hands toward the TABLE but, on the last second, \n");
			printf_s("pull your hands back. You decide you'd rather not risk pincushioning \n");
			printf_s("your hands full of splinters.\n");
		} else if (strcmp(response, "USE SHELF") == 0) {
			printf_s("You push and pull at the SHELF with all your might but fail \n");
			printf_s("to make it budge. \n");
		} else if (strcmp(response, "USE CANDLE") == 0) {
			printf_s("You wave the CANDLE around in the air. You don't succeed in \n");
			printf_s("writing your name. \n");
		} else if (strcmp(response, "USE BOX") == 0) {
			if (open == 1) {
				printf_s("You find a jar of LEMON JUICE.\n");
				mysteryRoomLemon();
				end = 1;
			}
			else {
				printf_s("You try to pick up the BOX and receive surprising resistance. \n");
				printf_s("You pull and pull on the BOX but it won't budge an inch. \n");
			}
		} else if (strcmp(response, "USE NOTE") == 0) {
			printf_s("You try to pull the NOTE from the BOX but it won't come off \n");
			printf_s("or tear. \n");
		} else if (strcmp(response, "USE BOOK") == 0) {
			printf_s("You open the BOOK up and wear it as an inpromptu hat. \n");
			printf_s("It brings you slight joy. \n");
		} else if (strcmp(response, "USE ORB") == 0) {
			printf_s("The ORB is black in color, and, on closer inspection, you \n");
			printf_s("discover that the ORB is in fact a MAGIC EIGHT BALL!\n");
		} else if (strcmp(response, "USE MAGIC EIGHT BALL") == 0) {
			printf_s("You shake the MAGIC EIGHT BALL. \n");
			printf_s("It says: \n");
			char shake = randomChar();
			switch (shake) {
			case 'a':
				printf_s("Your road to glory will be rocky but fulfilling.\n");
				break;
			case 'b':
				printf_s("Don't pursue happiness, create it.\n");
				break;
			case 'c':
				printf_s("All things are difficult before they are easy.\n");
				break;
			case 'd':
				printf_s("If you want the rainbow, you have to tolerate the rain.\n");
				open = 1;
				break;
			case 'e':
				printf_s("He who throws mud loses ground.\n");
				break;
			case 'f':
				printf_s("Yes.\n");
				break;
			}
		} else if (strcmp(response, "LOOK SPHINX") == 0) {
			printf_s("It is a stone statue of a SPHINX. The SPHINX's eyes meet your eyes at their level. \n");
			printf_s("It has very intricate eyes. They unnerve you slightly; you feel small in the gaze \n");
			printf_s("of the SPHINX, and it isn't just because it is quite a massive statue. \n");
		} else if (strcmp(response, "USE SPHINX") == 0) {
			char response2[100];
			printf_s("You reach out to touch the SPHINX but then you jump back as its mouth moves. \n");
			printf_s("The SPHINX states, 'Answer my riddle!' \n");
			printf_s("Answer-->");
			gets(response2);
			if (strcmp(response2, "MAN") == 0) {
				printf_s("'You mistake me for someone else.' \n");
			} else if (strcmp(response2, "TON") == 0) {
				printf_s("'You think you are very cute don't you!' \n");
			} else {
				printf_s("The SPHINX sits in silence. \n");
			}
		} 
		else if (strcmp(response, "skip") == 0) {
			mysteryRoomLemon();
			end = 1;
		}
		else {
			printf_s("Don't know how to %s.\n", response);
		}
	}while (end != 1);
}

void mysteryRoomLemon() {
	printf_s("You now have the ability to use and object on another object.\n");
	printf_s("This can be done by using the format: USE *NOUN* ON *NOUN*.\n");
	printf_s("There are only certain nouns you can use on another noun.\n");
	printf_s("Why don't you try using the LEMON JUICE on other nouns.\n");
	char response[100];
	int end = 0;
	do {
		printf_s("\nCommand-->");
		gets(response);
		if (strcmp(response, "LOOK TABLE") == 0) {
			printf_s("The TABLE is made of wood. You can tell it was once \n");
			printf_s("painted a dark brown by the occasional bits of coloration on \n");
			printf_s("the TABLE but it seems like someone tried to scrap off the \n");
			printf_s("paint. The TABLE surface is very uneven and full of scratches. \n");
			printf_s("On the TABLE there is a lit CANDLE and a BOX with a NOTE on it.\n");
		} else if (strcmp(response, "LOOK SHELF") == 0) {
			printf_s("The SHELF seems to be made out of wood. It is painted red but \n");
			printf_s("the paint is very faded and has been chipped off in a couple \n");
			printf_s("places. There is a single BOOK and a MAGIC EIGHT BALL laying \n");
			printf_s("on the shelf.\n");
		} else if (strcmp(response, "LOOK CANDLE") == 0) {
			printf_s("The CANDLE is lit. The flame still hasn't worn down the wax by much.\n");
		} else if (strcmp(response, "LOOK BOX") == 0) {
			printf_s("The BOX is open!\n");
			printf_s("The BOX looks to be made from cardboard. It has been painted \n");
			printf_s("in a stripped pattern using every color of the rainbow. There \n");
			printf_s("is a NOTE taped onto the box.\n");
		} else if (strcmp(response, "LOOK NOTE") == 0) {
			printf_s("The NOTE reads, 'When it has been shaken to my favorite.'\n");
		} else if (strcmp(response, "LOOK BOOK") == 0) {
			printf_s("The BOOK is a hardback with no paper cover. The BOOK's cover \n");
			printf_s("is blue and has no writing on the front, back, or spine. \n");
			printf_s("Opening the BOOK, you discover the pages are also blank. \n");
			printf_s("Unlike the SHELF, the BOOK seems quite new and not aged.\n");
		} else if (strcmp(response, "LOOK MAGIC EIGHT BALL") == 0) {
			printf_s("The MAGIC EIGHT BALL is a black ORB that has a little window \n");
			printf_s("in it at one spot, presumably where the message will show up \n");
			printf_s("when you shake it.\n");
		} else if (strcmp(response, "USE TABLE") == 0) {
			printf_s("You move your hands toward the TABLE but, on the last second, \n");
			printf_s("pull your hands back. You decide you'd rather not risk pincushioning \n");
			printf_s("your hands full of splinters.\n");
		} else if (strcmp(response, "USE SHELF") == 0) {
			printf_s("You push and pull at the SHELF with all your might but fail \n");
			printf_s("to make it budge. \n");
		} else if (strcmp(response, "USE CANDLE") == 0) {
			printf_s("You wave the CANDLE around in the air. You don't succeed in \n");
			printf_s("writing your name. \n");
		} else if (strcmp(response, "USE BOX") == 0) {
			printf_s("The BOX is empty.\n");
			printf_s("You still can't move it.\n");
		} else if (strcmp(response, "USE NOTE") == 0) {
			printf_s("You try to pull the NOTE from the BOX but it won't come off \n");
			printf_s("or tear. \n");
		} else if (strcmp(response, "USE BOOK") == 0) {
			printf_s("You open the BOOK up and wear it as an inpromptu hat. \n");
			printf_s("It brings you slight joy. \n");
		}
		else if (strcmp(response, "USE MAGIC EIGHT BALL") == 0) {
			printf_s("You shake the MAGIC EIGHT BALL. \n");
			printf_s("It says: \n");
			char shake = randomChar();
			switch (shake) {
			case 'a':
				printf_s("Your road to glory will be rocky but fulfilling.\n");
				break;
			case 'b':
				printf_s("Don't pursue happiness, create it.\n");
				break;
			case 'c':
				printf_s("All things are difficult before they are easy.\n");
				break;
			case 'd':
				printf_s("If you want the rainbow, you have to tolerate the rain.\n");
				break;
			case 'e':
				printf_s("He who throws mud loses ground.\n");
				break;
			case 'f':
				printf_s("Yes.\n");
				break;
			}
		} else if (strcmp(response, "LOOK LEMON JUICE") == 0) {
			printf_s("It is a glass jar of LEMON JUICE. The jar has ornate designs \n");
			printf_s("decorating it. As you look carefully, the designs look like eyes.\n");
		} else if (strcmp(response, "USE LEMON JUICE") == 0) {
			printf_s("You open the jar and pour some LEMON JUICE on the floor. \n");
			printf_s("You are confused as to why you did that. \n");
		} else if (strcmp(response, "USE LEMON JUICE ON TABLE") == 0) {
			printf_s("You pour some LEMON JUICE on the table. Some juice gets caught \n");
			printf_s("in the cuts in the table but most spills onto the floor. \n");
		} else if (strcmp(response, "USE LEMON JUICE ON SHELF") == 0) {
			printf_s("You pour some LEMON JUICE on a shelf in the SHELF. The juice \n");
			printf_s("spills over from the shelf onto the ground. \n");
		} else if (strcmp(response, "USE LEMON JUICE ON CANDLE") == 0) {
			printf_s("You pour LEMON JUICE on the CANDLE, peculiarly, the CANDLE \n");
			printf_s("is still burning. \n");
		} else if (strcmp(response, "USE LEMON JUICE ON BOX") == 0) {
			printf_s("You pour LEMON JUICE into the BOX. It disappears into the \n");
			printf_s("depths of the box.\n");
		} else if (strcmp(response, "USE LEMON JUICE ON NOTE") == 0) {
			printf_s("You pour LEMON JUICE on the NOTE; the NOTE is wet. \n");
			printf_s("You pull at the note, and it still doesn't tear. \n");
		} else if (strcmp(response, "USE LEMON JUICE ON LEMON JUICE") == 0) {
			printf_s("No.\n");
		} else if (strcmp(response, "USE LEMON JUICE ON MAGIC EIGHT BALL") == 0) {
			printf_s("You pour LEMON JUICE on the MAGIC EIGHT BALL; it spills \n");
			printf_s("off and the MAGIC EIGHT BALL is a little wet. \n");
		} else if (strcmp(response, "USE LEMON JUICE ON BOOK") == 0) {
			printf_s("You make sure that every page in the BOOK is coated in \n");
			printf_s("LEMON JUICE. By the time you are done the jar of LEMON \n");
			printf_s("JUICE is empty.\n");
			mysteryRoomBook();
			end = 1;
		} else if (strcmp(response, "USE LEMON JUICE ON SPHINX") == 0) {
			printf_s("You walk toward the SPHINX with intent but catch its eyes. \n");
			printf_s("You decide against pouring LEMON JUICE on the SPHINX. \n");
		} else if (strcmp(response, "LOOK SPHINX") == 0) {
			printf_s("It is a stone statue of a SPHINX. The SPHINX's eyes meet your eyes at their level. \n");
			printf_s("It has very intricate eyes. They unnerve you slightly; you feel small in the gaze \n");
			printf_s("of the SPHINX, and it isn't just because it is quite a massive statue. \n");
		} else if (strcmp(response, "USE SPHINX") == 0) {
			char response2[100];
			printf_s("You reach out to touch the SPHINX but then you jump back as its mouth moves. \n");
			printf_s("The SPHINX states, 'Answer my riddle!' \n");
			printf_s("Answer-->");
			gets(response2);
			if (strcmp(response2, "MAN") == 0) {
				printf_s("'You mistake me for someone else.' \n");
			} else if (strcmp(response2, "TON") == 0) {
				printf_s("'You think you are very cute don't you!' \n");
			}else {
				printf_s("The SPHINX sits in silence. \n");
			}
		}
		else {
			printf_s("Don't know how to %s.\n", response);
		}
	}while (end != 1);
}

void mysteryRoomBook() {
	char response[100];
	int end = 0;
	do {
		printf_s("\nCommand-->");
		gets(response);
		if (strcmp(response, "LOOK TABLE") == 0) {
			printf_s("The TABLE is made of wood. You can tell it was once \n");
			printf_s("painted a dark brown by the occasional bits of coloration on \n");
			printf_s("the TABLE but it seems like someone tried to scrap off the \n");
			printf_s("paint. The TABLE surface is very uneven and full of scratches. \n");
			printf_s("On the TABLE there is a lit CANDLE and a BOX with a NOTE on it.\n");
		}
		else if (strcmp(response, "LOOK SHELF") == 0) {
			printf_s("The SHELF seems to be made out of wood. It is painted red but \n");
			printf_s("the paint is very faded and has been chipped off in a couple \n");
			printf_s("places. There is a single BOOK and a MAGIC EIGHT BALL laying \n");
			printf_s("on the shelf.\n");
		}
		else if (strcmp(response, "LOOK CANDLE") == 0) {
			printf_s("The CANDLE is lit. The flame still hasn't worn down the wax by much.\n");
		}
		else if (strcmp(response, "LOOK BOX") == 0) {
			printf_s("The BOX is open!\n");
			printf_s("The BOX looks to be made from cardboard. It has been painted \n");
			printf_s("in a stripped pattern using every color of the rainbow. There \n");
			printf_s("is a NOTE taped onto the box.\n");
		}
		else if (strcmp(response, "LOOK NOTE") == 0) {
			printf_s("The NOTE reads, 'When it has been shaken to my favorite.'\n");
		}
		else if (strcmp(response, "LOOK BOOK") == 0) {
			printf_s("The BOOK's pages are wet with LEMON JUICE. \n");
		}
		else if (strcmp(response, "LOOK MAGIC EIGHT BALL") == 0) {
			printf_s("The MAGIC EIGHT BALL is a black ORB that has a little window \n");
			printf_s("in it at one spot, presumably where the message will show up \n");
			printf_s("when you shake it.\n");
		}
		else if (strcmp(response, "USE TABLE") == 0) {
			printf_s("You move your hands toward the TABLE but, on the last second, \n");
			printf_s("pull your hands back. You decide you'd rather not risk pincushioning \n");
			printf_s("your hands full of splinters.\n");
		}
		else if (strcmp(response, "USE SHELF") == 0) {
			printf_s("You push and pull at the SHELF with all your might but fail \n");
			printf_s("to make it budge. \n");
		}
		else if (strcmp(response, "USE CANDLE") == 0) {
			printf_s("You wave the CANDLE around in the air. You don't succeed in \n");
			printf_s("writing your name. \n");
		}
		else if (strcmp(response, "USE BOX") == 0) {
			printf_s("The BOX is empty.\n");
			printf_s("You still can't move it.\n");
		}
		else if (strcmp(response, "USE NOTE") == 0) {
			printf_s("You try to pull the NOTE from the BOX but it won't come off \n");
			printf_s("or tear. \n");
		}
		else if (strcmp(response, "USE BOOK") == 0) {
			printf_s("You decide against wearing the BOOK as a hat. \n");
		}
		else if (strcmp(response, "USE MAGIC EIGHT BALL") == 0) {
			printf_s("You shake the MAGIC EIGHT BALL. \n");
			printf_s("It says: \n");
			char shake = randomChar();
			switch (shake) {
			case 'a':
				printf_s("Your road to glory will be rocky but fulfilling.\n");
				break;
			case 'b':
				printf_s("Don't pursue happiness, create it.\n");
				break;
			case 'c':
				printf_s("All things are difficult before they are easy.\n");
				break;
			case 'd':
				printf_s("If you want the rainbow, you have to tolerate the rain.\n");
				break;
			case 'e':
				printf_s("He who throws mud loses ground.\n");
				break;
			case 'f':
				printf_s("Yes.\n");
				break;
			}
		}
		else if (strcmp(response, "LOOK LEMON JUICE") == 0) {
			printf_s("The jar of LEMON JUICE is now empty. \n");
		}
		else if (strcmp(response, "USE LEMON JUICE") == 0) {
			printf_s("There is no LEMON JUICE to use. \n");
		}
		else if (strcmp(response, "USE CANDLE ON BOOK") == 0) {
			printf_s("You wave the candle around pages in the book trying to discover a \n");
			printf_s("secret message. Eighty-one pages in, you discover something: \n");
			printf_s("'Forwards, I am heavy. Backwards, I am not. What am I?'\n");
			mysteryRoomRiddle();
			end = 1;
		}
		else if (strcmp(response, "LOOK SPHINX") == 0) {
			printf_s("It is a stone statue of a SPHINX. The SPHINX's eyes meet your eyes at their level. \n");
			printf_s("It has very intricate eyes. They unnerve you slightly; you feel small in the gaze \n");
			printf_s("of the SPHINX, and it isn't just because it is quite a massive statue. \n");
		} else if (strcmp(response, "USE SPHINX") == 0) {
			char response2[100];
			printf_s("You reach out to touch the SPHINX but then you jump back as its mouth moves. \n");
			printf_s("The SPHINX states, 'Answer my riddle!' \n");
			printf_s("Answer-->");
			gets(response2);
			if (strcmp(response2, "MAN") == 0) {
				printf_s("'You mistake me for someone else.' \n");
			} else if (strcmp(response2, "TON") == 0) {
				printf_s("'You think you are very cute don't you!' \n");
			} else {
				printf_s("The SPHINX sits in silence. \n");
			}
		}
		else {
			printf_s("Don't know how to %s.\n", response);
		}
	} while (end != 1);
}

void mysteryRoomRiddle() {
	char response[100];
	int end = 0;
	do {
		printf_s("\nCommand-->");
		gets(response);
		if (strcmp(response, "LOOK TABLE") == 0) {
			printf_s("The TABLE is made of wood. You can tell it was once \n");
			printf_s("painted a dark brown by the occasional bits of coloration on \n");
			printf_s("the TABLE but it seems like someone tried to scrap off the \n");
			printf_s("paint. The TABLE surface is very uneven and full of scratches. \n");
			printf_s("On the TABLE there is a lit CANDLE and a BOX with a NOTE on it.\n");
		}
		else if (strcmp(response, "LOOK SHELF") == 0) {
			printf_s("The SHELF seems to be made out of wood. It is painted red but \n");
			printf_s("the paint is very faded and has been chipped off in a couple \n");
			printf_s("places. There is a single BOOK and a MAGIC EIGHT BALL laying \n");
			printf_s("on the shelf.\n");
		}
		else if (strcmp(response, "LOOK CANDLE") == 0) {
			printf_s("The CANDLE is lit. The flame still hasn't worn down the wax by much.\n");
		}
		else if (strcmp(response, "LOOK BOX") == 0) {
			printf_s("The BOX is open!\n");
			printf_s("The BOX looks to be made from cardboard. It has been painted \n");
			printf_s("in a stripped pattern using every color of the rainbow. There \n");
			printf_s("is a NOTE taped onto the box.\n");
		}
		else if (strcmp(response, "LOOK NOTE") == 0) {
			printf_s("The NOTE reads, 'When it has been shaken to my favorite.'\n");
		}
		else if (strcmp(response, "LOOK BOOK") == 0) {
			printf_s("'Forwards, I am heavy. Backwards, I am not. What am I?' \n");
		}
		else if (strcmp(response, "LOOK MAGIC EIGHT BALL") == 0) {
			printf_s("The MAGIC EIGHT BALL is a black ORB that has a little window \n");
			printf_s("in it at one spot, presumably where the message will show up \n");
			printf_s("when you shake it.\n");
		}
		else if (strcmp(response, "USE TABLE") == 0) {
			printf_s("You move your hands toward the TABLE but, on the last second, \n");
			printf_s("pull your hands back. You decide you'd rather not risk pincushioning \n");
			printf_s("your hands full of splinters.\n");
		}
		else if (strcmp(response, "USE SHELF") == 0) {
			printf_s("You push and pull at the SHELF with all your might but fail \n");
			printf_s("to make it budge. \n");
		}
		else if (strcmp(response, "USE CANDLE") == 0) {
			printf_s("You wave the CANDLE around in the air. You don't succeed in \n");
			printf_s("writing your name. \n");
		}
		else if (strcmp(response, "USE BOX") == 0) {
			printf_s("The BOX is empty.\n");
			printf_s("You still can't move it.\n");
		}
		else if (strcmp(response, "USE NOTE") == 0) {
			printf_s("You try to pull the NOTE from the BOX but it won't come off \n");
			printf_s("or tear. \n");
		}
		else if (strcmp(response, "USE BOOK") == 0) {
			printf_s("You wear it as a hat. \n");
		}
		else if (strcmp(response, "USE MAGIC EIGHT BALL") == 0) {
			printf_s("You shake the MAGIC EIGHT BALL. \n");
			printf_s("It says: \n");
			char shake = randomChar();
			switch (shake) {
			case 'a':
				printf_s("Your road to glory will be rocky but fulfilling.\n");
				break;
			case 'b':
				printf_s("Don't pursue happiness, create it.\n");
				break;
			case 'c':
				printf_s("All things are difficult before they are easy.\n");
				break;
			case 'd':
				printf_s("If you want the rainbow, you have to tolerate the rain.\n");
				break;
			case 'e':
				printf_s("He who throws mud loses ground.\n");
				break;
			case 'f':
				printf_s("Yes.\n");
				break;
			}
		}
		else if (strcmp(response, "LOOK LEMON JUICE") == 0) {
			printf_s("The jar of LEMON JUICE is now empty. \n");
		}
		else if (strcmp(response, "USE LEMON JUICE") == 0) {
			printf_s("There is no LEMON JUICE to use. \n");
		}
		else if (strcmp(response, "USE CANDLE ON BOOK") == 0) {
			printf_s("There doesn't seem to be any other messages in the book. \n");
		}
		else if (strcmp(response, "LOOK SPHINX") == 0) {
			printf_s("It is a stone statue of a SPHINX. The SPHINX's eyes meet your eyes at their level. \n");
			printf_s("It has very intricate eyes. They unnerve you slightly; you feel small in the gaze \n");
			printf_s("of the SPHINX, and it isn't just because it is quite a massive statue. \n");
		}
		else if (strcmp(response, "USE SPHINX") == 0) {
			char response2[100];
			printf_s("You reach out to touch the SPHINX but then you jump back as its mouth moves. \n");
			printf_s("The SPHINX states, 'Answer my riddle!' \n");
			printf_s("Answer-->");
			gets(response2);
			if (strcmp(response2, "MAN") == 0) {
				printf_s("'You mistake me for someone else.' \n");
			}
			else if (strcmp(response2, "TON") == 0) {
				printf_s("The SPHINX spits out a MIRROR. \n");
				mysteryRoomMirror();
				end = 1;
			}
			else {
				printf_s("The SPHINX sits in silence. \n");
			}
		}
		else {
			printf_s("Don't know how to %s.\n", response);
		}
	} while (end != 1);
}

void mysteryRoomMirror() {
	char response[100];
	int end = 0;
	do {
		printf_s("\nCommand-->");
		gets(response);
		if (strcmp(response, "LOOK TABLE") == 0) {
			printf_s("The TABLE is made of wood. You can tell it was once \n");
			printf_s("painted a dark brown by the occasional bits of coloration on \n");
			printf_s("the TABLE but it seems like someone tried to scrap off the \n");
			printf_s("paint. The TABLE surface is very uneven and full of scratches. \n");
			printf_s("On the TABLE there is a lit CANDLE and a BOX with a NOTE on it.\n");
		}
		else if (strcmp(response, "LOOK SHELF") == 0) {
			printf_s("The SHELF seems to be made out of wood. It is painted red but \n");
			printf_s("the paint is very faded and has been chipped off in a couple \n");
			printf_s("places. There is a single BOOK and a MAGIC EIGHT BALL laying \n");
			printf_s("on the shelf.\n");
		}
		else if (strcmp(response, "LOOK CANDLE") == 0) {
			printf_s("The CANDLE is lit. The flame still hasn't worn down the wax by much.\n");
		}
		else if (strcmp(response, "LOOK BOX") == 0) {
			printf_s("The BOX is open!\n");
			printf_s("The BOX looks to be made from cardboard. It has been painted \n");
			printf_s("in a stripped pattern using every color of the rainbow. There \n");
			printf_s("is a NOTE taped onto the box.\n");
		}
		else if (strcmp(response, "LOOK NOTE") == 0) {
			printf_s("The NOTE reads, 'When it has been shaken to my favorite.'\n");
		}
		else if (strcmp(response, "LOOK BOOK") == 0) {
			printf_s("'Forwards, I am heavy. Backwards, I am not. What am I?' \n");
		}
		else if (strcmp(response, "LOOK MAGIC EIGHT BALL") == 0) {
			printf_s("The MAGIC EIGHT BALL is a black ORB that has a little window \n");
			printf_s("in it at one spot, presumably where the message will show up \n");
			printf_s("when you shake it.\n");
		}
		else if (strcmp(response, "USE TABLE") == 0) {
			printf_s("You move your hands toward the TABLE but, on the last second, \n");
			printf_s("pull your hands back. You decide you'd rather not risk pincushioning \n");
			printf_s("your hands full of splinters.\n");
		}
		else if (strcmp(response, "USE SHELF") == 0) {
			printf_s("You push and pull at the SHELF with all your might but fail \n");
			printf_s("to make it budge. \n");
		}
		else if (strcmp(response, "USE CANDLE") == 0) {
			printf_s("You wave the CANDLE around in the air. You don't succeed in \n");
			printf_s("writing your name. \n");
		}
		else if (strcmp(response, "USE BOX") == 0) {
			printf_s("The BOX is empty.\n");
			printf_s("You still can't move it.\n");
		}
		else if (strcmp(response, "USE NOTE") == 0) {
			printf_s("You try to pull the NOTE from the BOX but it won't come off \n");
			printf_s("or tear. \n");
		}
		else if (strcmp(response, "USE BOOK") == 0) {
			printf_s("You wear it as a hat. \n");
		}
		else if (strcmp(response, "USE MAGIC EIGHT BALL") == 0) {
			printf_s("You shake the MAGIC EIGHT BALL. \n");
			printf_s("It says: \n");
			char shake = randomChar();
			switch (shake) {
			case 'a':
				printf_s("Your road to glory will be rocky but fulfilling.\n");
				break;
			case 'b':
				printf_s("Don't pursue happiness, create it.\n");
				break;
			case 'c':
				printf_s("All things are difficult before they are easy.\n");
				break;
			case 'd':
				printf_s("If you want the rainbow, you have to tolerate the rain.\n");
				break;
			case 'e':
				printf_s("He who throws mud loses ground.\n");
				break;
			case 'f':
				printf_s("Yes.\n");
				break;
			}
		}
		else if (strcmp(response, "LOOK LEMON JUICE") == 0) {
			printf_s("The jar of LEMON JUICE is now empty. \n");
		}
		else if (strcmp(response, "USE LEMON JUICE") == 0) {
			printf_s("There is no LEMON JUICE to use. \n");
		}
		else if (strcmp(response, "USE CANDLE ON BOOK") == 0) {
			printf_s("There doesn't seem to be any other messages in the book. \n");
		}
		else if (strcmp(response, "LOOK SPHINX") == 0) {
			printf_s("It is a stone statue of a SPHINX. The SPHINX's eyes meet your eyes at their level. \n");
			printf_s("It has very intricate eyes. They unnerve you slightly; you feel small in the gaze \n");
			printf_s("of the SPHINX, and it isn't just because it is quite a massive statue. \n");
		}
		else if (strcmp(response, "USE SPHINX") == 0) {
			printf_s("The SPHINX sits in silence. \n");
		}
		else if (strcmp(response, "LOOK MIRROR") == 0) {
			printf_s("The MIRROR is hand mirror. It is made out of from a polished, dark wood. \n");
			printf_s("A lot nicer in quality than the SHELF or DESK. \n");
		}
		else if (strcmp(response, "USE MIRROR") == 0) {
			printf_s("You look in the mirror and see what you saw. You take the SAW. \n");
			printf_s("You now have a SAW. \n");
			mysteryRoomSaw();
			end = 1;
		}
		else {
			printf_s("Don't know how to %s.\n", response);
		}
	} while (end != 1);
}

void mysteryRoomSaw() {
	char response[100];
	int end = 0;
	do {
		printf_s("\nCommand-->");
		gets(response);
		if (strcmp(response, "LOOK TABLE") == 0) {
			printf_s("The TABLE is made of wood. You can tell it was once \n");
			printf_s("painted a dark brown by the occasional bits of coloration on \n");
			printf_s("the TABLE but it seems like someone tried to scrap off the \n");
			printf_s("paint. The TABLE surface is very uneven and full of scratches. \n");
			printf_s("On the TABLE there is a lit CANDLE and a BOX with a NOTE on it.\n");
		}
		else if (strcmp(response, "LOOK SHELF") == 0) {
			printf_s("The SHELF seems to be made out of wood. It is painted red but \n");
			printf_s("the paint is very faded and has been chipped off in a couple \n");
			printf_s("places. There is a single BOOK and a MAGIC EIGHT BALL laying \n");
			printf_s("on the shelf.\n");
		}
		else if (strcmp(response, "LOOK CANDLE") == 0) {
			printf_s("The CANDLE is lit. The flame still hasn't worn down the wax by much.\n");
		}
		else if (strcmp(response, "LOOK BOX") == 0) {
			printf_s("The BOX is open!\n");
			printf_s("The BOX looks to be made from cardboard. It has been painted \n");
			printf_s("in a stripped pattern using every color of the rainbow. There \n");
			printf_s("is a NOTE taped onto the box.\n");
		}
		else if (strcmp(response, "LOOK NOTE") == 0) {
			printf_s("The NOTE reads, 'When it has been shaken to my favorite.'\n");
		}
		else if (strcmp(response, "LOOK BOOK") == 0) {
			printf_s("'Forwards, I am heavy. Backwards, I am not. What am I?' \n");
		}
		else if (strcmp(response, "LOOK MAGIC EIGHT BALL") == 0) {
			printf_s("The MAGIC EIGHT BALL is a black ORB that has a little window \n");
			printf_s("in it at one spot, presumably where the message will show up \n");
			printf_s("when you shake it.\n");
		}
		else if (strcmp(response, "USE TABLE") == 0) {
			printf_s("You move your hands toward the TABLE but, on the last second, \n");
			printf_s("pull your hands back. You decide you'd rather not risk pincushioning \n");
			printf_s("your hands full of splinters.\n");
		}
		else if (strcmp(response, "USE SHELF") == 0) {
			printf_s("You push and pull at the SHELF with all your might but fail \n");
			printf_s("to make it budge. \n");
		}
		else if (strcmp(response, "USE CANDLE") == 0) {
			printf_s("You wave the CANDLE around in the air. You don't succeed in \n");
			printf_s("writing your name. \n");
		}
		else if (strcmp(response, "USE BOX") == 0) {
			printf_s("The BOX is empty.\n");
			printf_s("You still can't move it.\n");
		}
		else if (strcmp(response, "USE NOTE") == 0) {
			printf_s("You try to pull the NOTE from the BOX but it won't come off \n");
			printf_s("or tear. \n");
		}
		else if (strcmp(response, "USE BOOK") == 0) {
			printf_s("You wear it as a hat. \n");
		}
		else if (strcmp(response, "USE MAGIC EIGHT BALL") == 0) {
			printf_s("You shake the MAGIC EIGHT BALL. \n");
			printf_s("It says: \n");
			char shake = randomChar();
			switch (shake) {
			case 'a':
				printf_s("Your road to glory will be rocky but fulfilling.\n");
				break;
			case 'b':
				printf_s("Don't pursue happiness, create it.\n");
				break;
			case 'c':
				printf_s("All things are difficult before they are easy.\n");
				break;
			case 'd':
				printf_s("If you want the rainbow, you have to tolerate the rain.\n");
				break;
			case 'e':
				printf_s("He who throws mud loses ground.\n");
				break;
			case 'f':
				printf_s("Yes.\n");
				break;
			}
		}
		else if (strcmp(response, "LOOK LEMON JUICE") == 0) {
			printf_s("The jar of LEMON JUICE is now empty. \n");
		}
		else if (strcmp(response, "USE LEMON JUICE") == 0) {
			printf_s("There is no LEMON JUICE to use. \n");
		}
		else if (strcmp(response, "USE CANDLE ON BOOK") == 0) {
			printf_s("There doesn't seem to be any other messages in the book. \n");
		}
		else if (strcmp(response, "LOOK SPHINX") == 0) {
			printf_s("It is a stone statue of a SPHINX. The SPHINX's eyes meet your eyes at their level. \n");
			printf_s("It has very intricate eyes. They unnerve you slightly; you feel small in the gaze \n");
			printf_s("of the SPHINX, and it isn't just because it is quite a massive statue. \n");
		}
		else if (strcmp(response, "USE SPHINX") == 0) {
			printf_s("The SPHINX sits in silence. \n");
		}
		else if (strcmp(response, "LOOK MIRROR") == 0) {
			printf_s("The MIRROR is hand mirror. It is made out of from a polished, dark wood. \n");
			printf_s("A lot nicer in quality than the SHELF or TABLE. \n");
		}
		else if (strcmp(response, "USE MIRROR") == 0) {
			printf_s("You look in the mirror and see what you saw. You take the SAW. \n");
		}
		else if (strcmp(response, "LOOK SAW") == 0) {
			printf_s("The SAW is a backsaw. The blade is rectangular in shape. And the \n");
			printf_s("teeth look quite sharp. You wonder if it has ever been used before. \n");
		}
		else if (strcmp(response, "USE SAW") == 0) {
			printf_s("You wave the SAW around in the air like you just don't care. \n");
		}
		else if (strcmp(response, "USE SAW ON SHELF") == 0) {
			printf_s("You try to use the SAW on the SHELF. You can make some marks into \n");
			printf_s("the wood but once you get an inch in, you meet a resistance that \n");
			printf_s("won't let you go any deeper.\n");
		}
		else if (strcmp(response, "USE SAW ON MAGIC EIGHT BALL") == 0) {
			printf_s("You try to saw in to the MAGIC EIGHT BALL but the SAW keeps glancing \n");
			printf_s("off of it; it can't get a grip. \n");
		}
		else if (strcmp(response, "USE SAW ON BOOK") == 0) {
			printf_s("You can't bring yourself to do any more harm to the BOOK even though \n");
			printf_s("it doesn't have much written in it. \n");
		}
		else if (strcmp(response, "USE SAW ON BOX") == 0) {
			printf_s("You try to saw into the BOX but you can bring no harm to it. Even when \n");
			printf_s("you try to put all of your weight into the blade, nothing happens to the BOX.\n");
		}
		else if (strcmp(response, "USE SAW ON TABLE") == 0) {
			printf_s("You saw the TABLE in half. Two halves make a HOLE.\n");
			mysteryRoomHole();
			end = 1;
		}
		else if (strcmp(response, "USE SAW ON SPHINX") == 0) {
			printf_s("You walk toward the SPHINX with intent but catch its eyes. \n");
			printf_s("You decide against using the SAW on the SPHINX. \n");
		}
		else {
			printf_s("Don't know how to %s.\n", response);
		}
	} while (end != 1);
}

void mysteryRoomHole() {
	char response[100];
	int end = 0;
	do {
		printf_s("\nCommand-->");
		gets(response);
		if (strcmp(response, "LOOK TABLE") == 0) {
			printf_s("There is no TABLE, there is only a HOLE. \n");
		}
		else if (strcmp(response, "LOOK SHELF") == 0) {
			printf_s("The SHELF seems to be made out of wood. It is painted red but \n");
			printf_s("the paint is very faded and has been chipped off in a couple \n");
			printf_s("places. There is a single BOOK and a MAGIC EIGHT BALL laying \n");
			printf_s("on the shelf.\n");
		}
		else if (strcmp(response, "LOOK CANDLE") == 0) {
			printf_s("The CANDLE is lit. The flame still hasn't worn down the wax by much.\n");
		}
		else if (strcmp(response, "LOOK BOX") == 0) {
			printf_s("The BOX is open!\n");
			printf_s("The BOX looks to be made from cardboard. It has been painted \n");
			printf_s("in a stripped pattern using every color of the rainbow. There \n");
			printf_s("is a NOTE taped onto the box.\n");
		}
		else if (strcmp(response, "LOOK NOTE") == 0) {
			printf_s("The NOTE reads, 'When it has been shaken to my favorite.'\n");
		}
		else if (strcmp(response, "LOOK BOOK") == 0) {
			printf_s("'Forwards, I am heavy. Backwards, I am not. What am I?' \n");
		}
		else if (strcmp(response, "LOOK MAGIC EIGHT BALL") == 0) {
			printf_s("The MAGIC EIGHT BALL is a black ORB that has a little window \n");
			printf_s("in it at one spot, presumably where the message will show up \n");
			printf_s("when you shake it.\n");
		}
		else if (strcmp(response, "USE TABLE") == 0) {
			printf_s("There is no TABLE to use, there is HOLE where the TABLE used to be. \n");
			printf_s("And no one can help that not be true. \n");
		}
		else if (strcmp(response, "USE SHELF") == 0) {
			printf_s("You push and pull at the SHELF with all your might but fail \n");
			printf_s("to make it budge. \n");
		}
		else if (strcmp(response, "USE CANDLE") == 0) {
			printf_s("You wave the CANDLE around in the air. You don't succeed in \n");
			printf_s("writing your name. \n");
		}
		else if (strcmp(response, "USE BOX") == 0) {
			printf_s("The BOX is empty.\n");
			printf_s("You still can't move it.\n");
		}
		else if (strcmp(response, "USE NOTE") == 0) {
			printf_s("You try to pull the NOTE from the BOX but it won't come off \n");
			printf_s("or tear. \n");
		}
		else if (strcmp(response, "USE BOOK") == 0) {
			printf_s("You wear it as a hat. \n");
		}
		else if (strcmp(response, "USE MAGIC EIGHT BALL") == 0) {
			printf_s("You shake the MAGIC EIGHT BALL. \n");
			printf_s("It says: \n");
			char shake = randomChar();
			switch (shake) {
			case 'a':
				printf_s("Your road to glory will be rocky but fulfilling.\n");
				break;
			case 'b':
				printf_s("Don't pursue happiness, create it.\n");
				break;
			case 'c':
				printf_s("All things are difficult before they are easy.\n");
				break;
			case 'd':
				printf_s("If you want the rainbow, you have to tolerate the rain.\n");
				break;
			case 'e':
				printf_s("He who throws mud loses ground.\n");
				break;
			case 'f':
				printf_s("Yes.\n");
				break;
			}
		}
		else if (strcmp(response, "LOOK LEMON JUICE") == 0) {
			printf_s("The jar of LEMON JUICE is now empty. \n");
		}
		else if (strcmp(response, "USE LEMON JUICE") == 0) {
			printf_s("There is no LEMON JUICE to use. \n");
		}
		else if (strcmp(response, "USE CANDLE ON BOOK") == 0) {
			printf_s("There doesn't seem to be any other messages in the book. \n");
		}
		else if (strcmp(response, "LOOK SPHINX") == 0) {
			printf_s("It is a stone statue of a SPHINX. The SPHINX's eyes meet your eyes at their level. \n");
			printf_s("It has very intricate eyes. They unnerve you slightly; you feel small in the gaze \n");
			printf_s("of the SPHINX, and it isn't just because it is quite a massive statue. \n");
		}
		else if (strcmp(response, "USE SPHINX") == 0) {
			printf_s("The SPHINX sits in silence. \n");
		}
		else if (strcmp(response, "LOOK MIRROR") == 0) {
			printf_s("The MIRROR is hand mirror. It is made out of from a polished, dark wood. \n");
			printf_s("A lot nicer in quality than the SHELF or DESK. \n");
		}
		else if (strcmp(response, "USE MIRROR") == 0) {
			printf_s("You look in the mirror and see what you saw. You take the SAW. \n");
		}
		else if (strcmp(response, "LOOK SAW") == 0) {
			printf_s("The SAW is a backsaw. The blade is rectangular in shape. And the \n");
			printf_s("teeth look quite sharp. You wonder if it has ever been used before. \n");
		}
		else if (strcmp(response, "USE SAW") == 0) {
			printf_s("You wave the SAW around in the air like you just don't care. \n");
		}
		else if (strcmp(response, "USE SAW ON SHELF") == 0) {
			printf_s("You try to use the SAW on the SHELF. You can make some marks into \n");
			printf_s("the wood but once you get an inch in, you meet a resistance that \n");
			printf_s("won't let you go any deeper.\n");
		}
		else if (strcmp(response, "USE SAW ON MAGIC EIGHT BALL") == 0) {
			printf_s("You try to saw in to the MAGIC EIGHT BALL but the SAW keeps glancing \n");
			printf_s("off of it; it can't get a grip. \n");
		}
		else if (strcmp(response, "USE SAW ON BOOK") == 0) {
			printf_s("You can't bring yourself to do any more harm to the BOOK even though \n");
			printf_s("it doesn't have much written in it. \n");
		}
		else if (strcmp(response, "USE SAW ON BOX") == 0) {
			printf_s("You try to saw into the BOX but you can bring no harm to it. Even when \n");
			printf_s("you try to put all of your weight into the blade, nothing happens to the BOX.\n");
		}
		else if (strcmp(response, "LOOK HOLE") == 0) {
			printf_s("There is a hole here, it is still here. \n");
		}
		else if (strcmp(response, "USE HOLE") == 0) {
			printf_s("You enter the HOLE. \n");
			printf_s(" - - - - Congratulations - - - - \n");
			printf_s("You have escaped the Mystery Room!\n");
			end = 1;
		}
		else {
			printf_s("Don't know how to %s.\n", response);
		}
	} while (end != 1);
}

char randomChar() {
	int shake = 1 + rand() % 6;
	if (shake == 1) {
		return 'a';
	}
	else if (shake == 2) {
		return 'b';
	}
	else if (shake == 3) {
		return 'c';
	}
	else if (shake == 4) {
		return 'd';
	}
	else if (shake == 5) {
		return 'e';
	}
	else if (shake == 6) {
		return 'f';
	}
}