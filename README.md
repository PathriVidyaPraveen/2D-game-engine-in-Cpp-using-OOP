This repo is created for a project of developing a 2D Game Engine in C++ using SDL2.
The main idea of this project is to develop a basic 2D Game Engine in C++ using SDL2, applying OOP principles like Encapsulation, Inheritance, and Design Patterns. The engine should allow users to create a simple game with:

Moving objects (Player, Enemies).
Collision detection between objects.
Keyboard and mouse input handling.
A basic physics system (gravity, friction).
A game loop that manages updates and rendering.


Functional Requirements :


  1️) Game Engine Core
    Implement a GameObject base class with:
    Position (x, y), Velocity (dx, dy)
    Update() and Render() methods (to be overridden).
    Implement a Game Loop that:
    Updates objects (movement, collisions).
    Handles input events (keyboard/mouse).
    Renders objects to the screen.

    
  2️)  Object-Oriented Design
    GameObject Class (Encapsulation):
    Base class for all objects in the game.
    Stores position, velocity, and texture.
    Player & Enemy Classes (Inheritance):
    Player moves using keyboard input.
    Enemy moves autonomously.
    Event System (Observer Pattern):
    Allows objects to respond to events (e.g., collisions, key presses).

    
  3) Rendering System
    Use SDL2 to load and render images (sprites).
    Implement a SpriteManager to handle textures.


  4️) Physics & Collision Handling
    Implement basic physics (gravity, friction).
    Implement collision detection between objects.

    
  5️) Input Handling
    Handle keyboard input for movement (WASD or arrow keys).
    Handle mouse input (e.g., clicking on objects).

    
  6️) Gameplay & Win/Loss Conditions
    If the player touches an enemy → game over.
    If the player reaches a goal → win.
