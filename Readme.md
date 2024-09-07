# Battle of Hands: Stone, Paper, Scissor!
<hr>
Game Description:<br>
"Battle of Hands" is a classic stone-paper-scissor game where players compete against the computer to win a best-of-five match. The first player to accumulate 3 points wins the match, and the game offers an option to restart after each match, making it a fun and replayable experience.<br>

How It Works:<br>
Game Objective: The goal is to beat the computer by choosing the correct hand symbol (Stone, Paper, or Scissor). The first player to win 3 rounds out of a maximum of 5 wins the match.
<br>
User vs. Computer:<br>

The user competes against the computer, which makes its choices randomly.
The user selects a symbol by entering 's' for Stone, 'p' for Paper, or 'z' for Scissor.
Winning Conditions:<br>

Stone (s): Beats Scissor (z) but loses to Paper (p).<br>
Paper (p): Beats Stone (s) but loses to Scissor (z).<br>
Scissor (z): Beats Paper (p) but loses to Stone (s).<br>
If both the user and the computer choose the same symbol, the round ends in a draw.
Points System:<br>

The match is played over multiple rounds, and each round is won by either the user or the computer.<br>
A scoreboard keeps track of the points. The first player (user or computer) to reach 3 points wins the match.<br>
Game Output:<br>

After each round, the game prints the results, showing the choices made by both the user and the computer.<br>
The current score is displayed after each round to inform the player of the ongoing status of the match.<br>
Match End:
<br>
Once either the user or the computer wins 3 rounds, the match is over, and the winner is announced.<br>
The player can then choose to restart the game and play again or quit by answering y for Yes or n for No.<br>
User Interaction:<br>

After the match result is displayed, the player is given the option to restart or end the game.<br>
A final credits section appears at the end of the game, showcasing the developer's name and GitHub link.<br>
Game Flow:<br>
The game starts with a welcome message and prompts the user to choose between 's', 'p', or 'z'.<br>
The computer makes its random choice, and both choices are compared to determine the winner of the round.<br>
The game continues until either the user or the computer reaches 3 points.
The result of each round is displayed, including the current score.
After a player wins the match, the game asks if the user wants to play again or quit.
If the player chooses to play again, the scores are reset, and a new match starts.
Example of the game interaction:
<br>

Copy code<br>
--- WELCOME TO THE BATTLE OF HANDS: STONE, PAPER, SCISSOR! ---<br>
Enter 's' for STONE, 'p' for PAPER and 'z' for SCISSOR<br>
--------------------------------------------------<br>

You chose: s | Computer chose: z<br>
You won this round!<br>

Current Score -> You: 1 | Computer: 0<br>

You chose: p | Computer chose: z<br>
Computer won this round!

Current Score -> You: 1 | Computer: 1<br>

--- MATCH RESULT ---<br>
Congratulations! You have won the match!<br>
Do you want to play again? (y/n):<br>
This makes "Battle of Hands" a simple yet engaging game that is easy to pick up, and with the restart option, players can enjoy it repeatedly.<br>