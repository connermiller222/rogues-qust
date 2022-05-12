#include <stdio.h>
int hp = 100; 
int lev = 0;
int xp = 0;
int str = 5;
int dam;
int com;
int ehp = 100;
int in = 5;
int ac = 0;
int gold = 0;
int room = 0;
int eplace = 0;
int item = 0;
int place = 0;
int chapter = 0;
int weather = 0;
int bkr = 0;
int password;
int main () {
printf ("The rouge's quest\n");
printf ("By Conner Miller\n");
printf ("Press 9 to play\n");
scanf ("%d", &com);
if (com == 9) {
chapter += 1;
printf ("Chapter one: The temple of Polaris\n");
printf ("One day you gotten a quest from the king and it says that\n");
printf ("there is a black knight in the abandon temple near the river and I need you to slay him.\n");
printf ("You gladly accepted the quest and went off to the temple. When you gotten to the temple\n");
printf ("you heard loud foot steps walking around inside the walls so you decided to enter in the side\n");
printf ("passages and hope there is less guards than in the main hallways. please press 1 to begin the quest\n");
scanf ("%d", &com);
if (com == 1){
room += 1;
printf ("Your in a empty room with one cell in it and in the cell you see is a key.\n");
printf ("The room has a table and on the table is a stick. Your commands are:\n");
printf ("------------------------------------------------------------------------------------------\n");
printf ("1. To smash threw the door with brute force and hope for the best\n");
printf ("2. Use the stick to pick up the key and use it to unlock the door\n");
scanf ("%d", &com); 
if (com == 1){
printf ("You manage to open the door but sadly the guard was there.\n");
printf ("The guard founded you and kill you.\n");
printf ("Your body will become fish food an couple minutes later.\n");
printf ("game over.\n");
return 0;
} else if (com == 2){
room +=2;
printf ("You manage to get the keys and unlocked the door.\n");
printf ("You saw a lone guard sitting there threw the small peep hole but you notice that the light.\n");
printf ("is too dim for the guard to see you when you enter so you begin to slowly open it so that\n");
printf ("the door don't make any noise and you walked in to the room and yet the guard didn't notice\n");
printf ("anything as he is facing the small view port to the main hall. You notice that the door is unlocked\n");
printf ("but its in the visible in the light so your commands are:\n");
printf ("------------------------------------------------------------------------------------------\n");
printf ("1. Knock the guard out and walk to the door\n");
printf ("2. Knock the guard out and sneak to the door in the dark\n");
printf ("3. Wait until 12:00 AM so that the guard can close the view port and leave.\n");
scanf ("%d", &com);
if (com == 1) {
printf ("You manage to knock him out but after that you walked to the door and arrow trap fired.\n");
printf ("the arrow hitted your chest leaving an hole where your heart use to be. you would soon die from blood lost.\n");
printf ("Arrow traps are guards behind the walls waiting to fire if they see anything in the light.\n");
printf ("game over\n");
return 0;
} else if (com == 2){
printf ("You manage to knock him out but when you sneek the darkness grows thin closer to the door\n");
printf ("You would be exposed to the arrow trap and get shot to death\n"); 
printf ("The viewport is where the arrow trap is at so the best way is to wait\n");
printf ("game over\n");
return 0;
}else if (com == 3){
room += 3;
printf ("You wait and as the time came the guard said to the guard in the arrow trap that the shift is\n");
printf ("over and that they can leave. He will close the view port and take his book with him and begin to walk\n");
printf ("home. You left right away while remaining in the dark but than you notice that this enters to the main hall.\n");
printf ("You notice that the main hall has tiled flooring and you see the room where the black knight is staying at.\n");
printf ("Your commands are:\n");
printf ("------------------------------------------------------------------------------------------\n");
printf ("1Walk on the white tiles\n");
printf ("2.Walk on the black tiles\n");
scanf ("%d", &com);
if (com == 1){
printf ("you press on the white tiles and it made an loud noise and it begins to shake. \n");
printf ("You begin to fall on the pile of rusted spikes and as you looked up you see the knight\n");
printf ("laughing at you in your failed attempt to kill him. You would die from the spikes\n");
printf ("game over.");
return 0;
}else if (com == 2){
room +=4;
printf ("You press your foot on the black tile and it didn't fall or made an nosie so you begin to walk\n");
printf ("on the black tiles only and soon you reach the black knight's room and as you open the door \n");
printf ("you found out that he was waiting for you and has been preparing for your arrival. You pulled out \n");
printf ("your dagger and gotten ready for the fight. your commands are:");
printf ("------------------------------------------------------------------------------------------\n");
printf ("1. Attack the knight\n");
scanf ("%d", &com);
if (com == 1){
printf ("the knight has attacked first and missed. You have attacked and pushed the knight off the\n");
printf ("window. He fell on to the sea and as while he sinks you begin wounder what could you use to prove that you've killed him\n");
printf ("You found an piece of his armor next to the window and you grab it. Later you came back in the castle and given the king \n");
printf ("the piece of the armor and said that you finished your quest and so the king has given you an thousand coins and then you\n");
printf ("leave the castle to the nearest bar where you spent all of it on beer and hookers\n");
printf ("You have played the demo for this so exepct things like boss fights more chapters and etc in the final release.\n");
return 0;
}
}
}
}
}
}
}

