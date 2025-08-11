# Volt
*NOTE: This readme.md file is ultimately a draft, and the systems architechture may be subject to change overtime*

An ASCII version of the Battleship video game that runs in the Linux terminal.

Project is split into two:
- Singleplayer version to help develop an understanding of how the game logic will work
- Multiplayer version that will allow players to VS each other. Will work via a client and server model.

## Program Arcitechture 
### Singleplayer Version
- This version is made to help develop an understanding of how the game logic will work, before tackling the multiplayer version that will work via a client and server model. 
- The game board will be a 2D NxN integer Matrix which will be dynamically allocated with `malloc().` The board will be capped at a certain size.
- Players will first take turns placing ships. The number of ships and their sizes will be calculated based on the size of the game board. I might include the option to randomize the locations of the ships to make gameplay interesting!
- Once both players are ready, the game begins. The first person to destory the other players ships wins the game!

### Multiplayer Version
- The server will execute all the game logic, and the client will issue commands.
- Each client will have a view of their game board on their screen.
- The server can have an unlimited amount of rooms (based on thread limit). 2 Players/Clients can join a room at once. Each room will run on a seperate thread.

**TO BE CONTINUED!!!**

