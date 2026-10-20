


 #Libraries
 GLM (for vectors)



 Ideas:
 	-Space Catan but like 8 bit and cool

 			Structure:

 			TurnManager
			  for each player
			    order = player.chooseOrder(game)   // human click or AI
			    order.execute(game)                 // rules live here
			    game.emit(what just changed)        // UI, sound, log, AI memory
			    if game.winner(): stop
 		
	Hold unordered map of integers and pointers to spaceports which touch them?

	Classes:
 		Player
 		Tile
 		Board