// Headers

// Function Defintions

// Main function
    // Initialize a map of 3 studios with 3 types of releases
    // Open an external file to populate maps with initial releases and how they were recieved (A or B)
        // If file does not open, print an error and exit
    // Read data from file and populate map
        // Close the file
// Accumulate score based on type of release (New, Sequel, DLC) and if it was like for disliked
// display score

// Begin first simulation
    // For 20 time intervals
    // Iterate through each studio in the map
    // For each studio, simulate what kind of relase they will do next
    // Random choice if a studio will release a new game, a serial or DLC (each with it's own value)
        // New games will add or remove 12 points (50/50 chance)
        // Sequels will add or remove 6 points (65/35)
        // DLC will add or remove 3 points (70/30)
        // Add the release to the map
    // Accumulate and print the performance score of each studio after the 20 intevals

// Begin a second simulation
    // Simulate a stuio's next releases based on their performance
      // sum the studio's perforamce and determine how they wll perform next based on that
    // For 20 time intervals
    // For each studio, simulate what kind of relase they will do next
        // performance > 200 new games chance will be changed to 33% for each type of release (same rates of increase or decrease)
        // performance < 200 new games chance will be changed to 50% or a new game, 25% for sequel, 25% for DLC
        // Add the release to the map
    // Accumulate and print the performance score of each studio after the 20 intevals

// Begin third simulation
    // Simulate a rise in demand for new games, bonus point added or removed for new games
    // For 20 time intervals
    // For each studio, simulate what kind of relase they will do next based on makret demand
            // each stuio's chance of release is 60% new game, 30% sequel, 10% DLC
            // New games will add or remove 15 points (55/45 chance)
            // Sequels can add or remove 4 points (40/60 chance)
            // DLC can add or remove 1 point (40/60 chance)
        // Add the release to the map
    // Accumulate and print the performance score of each studio after the 20 intevals
