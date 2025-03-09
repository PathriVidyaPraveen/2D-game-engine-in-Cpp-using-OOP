Disclaimer :
Currently under development.



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



Simple DirectMedia Layer is a cross-platform development library designed to provide low level access to audio, keyboard, mouse, joystick, and graphics hardware via OpenGL/Direct3D/Metal/Vulkan. It is used by video playback software, emulators, and popular games including Valve's award winning catalog and many Humble Bundle games.

SDL officially supports Windows, macOS, Linux, iOS, and Android. Support for other platforms may be found in the source code.

SDL is written in C, works natively with C++, and there are bindings available for several other languages, including C# and Python.

SDL 2.0 is distributed under the zlib license. This license allows you to use SDL freely in any software.

This is the SDL wiki; SDL's main website is libsdl.org.

This wiki is your portal to documentation and other resources for SDL 2.0.



For more details regarding the documentation of SDL2 , please refer to the following .
https://wiki.libsdl.org/SDL2/FrontPage


📝 Detailed Problem Statement for the 2D Game Engine in C++ (SDL2)
This will be broken into step-by-step milestones, each with a detailed problem statement so that you can work on them one by one.

📌 Step 1: SDL2 Setup and Basic Window Rendering
🎯 Goal:
Set up SDL2 and create a window where graphics will be drawn.

🔹 Problem Statement:
Install and set up SDL2 on your system.
Initialize SDL2 and create a window (800x600 resolution).
Create an SDL_Renderer to draw objects.
Set up a game loop that continuously updates the screen.
Implement event handling so that the window closes when you press ESC or click the close button.
🔹 Expected Output:
A black SDL2 window that stays open until you press ESC or click "X".
📌 Step 2: Create a Basic Game Object (OOP)
🎯 Goal:
Define a base GameObject class using encapsulation.

🔹 Problem Statement:
Create a class GameObject with attributes:
x, y (position).
dx, dy (velocity).
texture (for storing images).
Implement methods:
void Update() → Moves the object based on velocity.
void Render(SDL_Renderer*) → Draws the object.
Load an image as a texture and apply it to the GameObject.
🔹 Expected Output:
A simple square or sprite appearing in the window.
📌 Step 3: Player Movement (Keyboard Input)
🎯 Goal:
Control a player object using keyboard input.

🔹 Problem Statement:
Create a Player class that inherits from GameObject.
Add keyboard controls:
W → Move up.
S → Move down.
A → Move left.
D → Move right.
Implement void HandleInput(SDL_Event&) to update velocity based on key presses.
Render the player on the screen and move it based on key inputs.
🔹 Expected Output:
Pressing WASD moves the player smoothly in 2D space.
📌 Step 4: Adding Enemy Objects (AI Movement)
🎯 Goal:
Create Enemy objects that move automatically.

🔹 Problem Statement:
Create an Enemy class that inherits from GameObject.
Implement an AI movement pattern:
Move left and right automatically.
Spawn multiple enemies at random positions.
Enemies should bounce when they hit the screen edges.
🔹 Expected Output:
Enemies move left-right continuously and bounce at edges.
📌 Step 5: Collision Detection
🎯 Goal:
Detect when the player collides with an enemy.

🔹 Problem Statement:
Implement bool CheckCollision(GameObject*, GameObject*).
If the player touches an enemy, print "Game Over" and stop movement.
Draw a boundary box around objects to visualize collisions.
🔹 Expected Output:
The game prints "Game Over" when the player collides with an enemy.
📌 Step 6: Adding a Win Condition (Goal Object)
🎯 Goal:
The player wins when reaching a goal object.

🔹 Problem Statement:
Create a Goal class (inherits from GameObject).
Spawn a Goal object at a random position.
If the player touches the goal, print "You Win!" and stop the game.
🔹 Expected Output:
If the player reaches the goal, the game prints "You Win!".
📌 Step 7: Improving Physics (Gravity & Friction)
🎯 Goal:
Add basic gravity and friction to movement.

🔹 Problem Statement:
Implement gravity (increase dy over time).
Implement friction (reduce dx gradually).
The player should fall unless on a platform.
🔹 Expected Output:
The player falls due to gravity and slows down due to friction.
📌 Step 8: Organizing Code & Final Touches
🎯 Goal:
Refactor code to follow best practices.

🔹 Problem Statement:
Organize classes in separate files (Player.h, Enemy.h, etc.).
Implement a GameManager class to control the game state.
Add comments and improve performance.
🔹 Expected Output:
A clean, well-structured game engine that works smoothly.
🚀 Final Outcome
A fully working 2D game engine in C++ (SDL2).
You will have learned OOP, game loops, physics, input handling, and rendering.
You will have written 1000+ lines of code in a structured way.



Installing SDL2 on your machine :

Follow these steps to install SDL2 and run windows on your Linux/Ubuntu terminal by opening the terminal and entering the following commands.
sudo apt update
sudo apt install libsdl2-dev

Compile and run checkInstallSDL.cpp to check whether SDL2 is properly installed on your machine.


