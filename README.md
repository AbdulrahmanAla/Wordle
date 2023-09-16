# Wordle
 a simple game of Wordle. The first word provided is the secret word that the player is trying to guess. Note that all words provided will be 5 letters long. After each guess, the program displays the letters that were in the correct position. If the lesser was present in the word but not in the right place, replace that letter with a ?, else put a period if the letter isn’t present in the secret word at all.


Display the win or loss condition at the end of the game. Note that the game can end early if the player provides the correct word, or if the player doesn’t provide at least 6 guess (by suppling the EOF with Control-d).

Expected input:
HOUSE
MOUSE
GUESS
TRIAL
DOUBT
CRAFT
HOTTE


Expected output:
Give me a secret word: 
Give me a guess: 
.OUSE
Give me a guess: 
.??S?
Give me a guess: 
.....
Give me a guess: 
.OU..
Give me a guess: 
.....
Give me a guess: 
HO..E
You Lose.



Detailed explanation: “HOUSE” is the secret word. The first guess is "MOUSE". Because “HOUSE” doesn’t have an 'M’, it is replaced with a '.’. The rest of the letters match. When the try is "GUESS", The ‘U’ and the ‘E’ are in the wrong position, so they become '?’. The first ‘S’ is in the right position, and is shown, but the second ‘S’ is not in the right position, but it is present in the secret, so it becomes a '?’