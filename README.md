The game of not being caught by the monster is played on a 15X15 playground. The game has four difficulty levels, easy (e / E) , hard (h / H), death wish (d/D) and one down(o/O). A random number of monsters, ranging from 3 to 7 in easy level, 16 to 32 in hard level , 32 to 64 in death wish level and 64 to 128 in one down level, are placed on the playing field in a random manner. On the track, the value zero (0) represents empty places and one (1) represents places with monsters.
*********************************************************************************************************************
Write the C program, which first takes game difficulty level from the user and after that takes the column numbers from the user, which the player can pass straight from the north to the south of the track without encountering any monster,  and writes it on the screen in accordance with the example study below.
*********************************************************************************************************************
CASE STUDY 1:
Enter the game difficulty level.\nEASY(3-7 monsters) for (E/e)... : M
Wrong level code entered

Enter the game difficulty level.\nEASY(3-7 monsters) for (E/e).... : H

Enter a column value between 1-16: 17
Wrong value. Try again.

Enter a column value between 1-16 : 15
.
.
.

           NORTH
1 0 1 0 0 0 0 1 1 1 0 1 1 0 0
1 1 0 1 1 0 0 1 0 0 1 0 0 1 1
1 1 1 0 1 0 0 1 1 1 1 1 0 1 1
1 0 1 1 1 1 0 1 0 1 0 0 1 1 1
1 0 1 0 1 0 1 1 0 0 1 1 1 1 0
1 0 1 0 0 0 1 0 0 1 1 0 1 0 1
1 0 0 0 1 1 1 0 1 1 1 1 0 1 0
1 0 1 0 0 0 1 1 0 0 1 0 0 1 1
1 1 0 1 1 1 1 1 1 1 0 0 0 0 0
1 0 1 1 1 1 1 1 0 1 0 1 0 1 0
0 1 0 1 1 1 1 0 0 1 0 0 1 0 1
1 1 1 1 0 1 0 1 0 1 1 0 1 1 0
1 0 1 0 0 1 0 0 0 1 0 1 1 0 1
0 1 0 1 1 1 1 0 0 0 0 1 0 0 0
1 0 1 1 0 0 1 0 0 0 1 0 1 1 1
           SOUTH
