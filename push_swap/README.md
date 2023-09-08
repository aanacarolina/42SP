 GENERAL LOGIC
 
 1- Check if there are 3 elements in A
 
(also condition to stop checking cheapest turk)<br>
 1.1 - if TRUE:<br>
 1.1.1 - do not push anything to B<br>
 1.1.2 - call SORT_3 logic in A<br>
 1.1.3 - end the program<br>

 2 - ELSE -
 create stack B<br>
 push first 2 itens of A to B (PB 2x)<br>
 execute Mechanical Turk Algorithm<br>
 until 3 elements left in A<br>
 3 - call SORT_3 logic in A<br>
 4 - Push B to A until B empty<br>
 5 - Make FINAL ARRANGEMENT in A<br>

 TODOs:
 
 create CHEAPER ops (many)<br>
 create A smaller than min of B<br>
 create A bigger than max of B<br>
 create biggest_b_on_top<br>
 create current_max_a<br>
 create already sorted<br>

 Mechanical Turk Algorithm
 
 Our aim is to move itens from A to B, in a way that B will always be "circularly ordered". <br>
 This is achieved by using the CHEAPEST movement calculations <br>

 CHEAPEST
 
 1 - Find MAX e MIN of B<br>
 1.1 - Loop over stack A to check IF there is a number either:<br>
 1.1.1 - smaller than min of B<br>
 1.1.2 - bigger than max of B<br>


 If any TRUE, do: <br>
 Place biggest of B on top (if not already)<br>
 Then push "CURRENT A MAX" (not the biggest of A<br>
 but the next bigger in relation to max of B)<br>


 ELSE 
 (means we can't send a number from A to top of B immediatelly, because it will mess with the circular order)<br>
 1 - CALCULATIONS to check qty of moves <br>
 1.2 - CURRENT_MAX_A <br>
 1.2.1 - Loop over stack A to find the next number to send <br>
 by making this caclulation: <br>
 1.2.2 - When current_a-- == MAX B --> return <br>

 FINAL SORT
 
 Find MIN_A and get its index <br>
 Calculate CEIL(stack_size / 2 )<br>
 if result > node_index (means it's on top half)<br>
 RRA until MIN_A on top<br>
 else RA until MIN_A on top<br>
