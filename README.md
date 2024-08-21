# NoteCraft
A simplified C++ console-based music sequencer that allows users to create, edit, and playback musical note sequences. Featuring real-time sound synthesis, tempo control, and file I/O for saving and loading sequences. 


# Core Features

- **Single Track Sequencer:** Users can create a sequence of notes with specified pitches and durations.

- **Note Input and Editing:** Simple console-based interface for adding, removing, and editing notes.

- **Playback Engine:** Basic real-time playback of the sequence using simple sound synthesis.

- **Tempo Control:** Users can adjust the tempo (BPM) of the sequence.

- **File I/O:** Save and load sequences to/from a file for later use.

### **Project Architecture Overview**

The project architecture is designed to be modular and straightforward, aligning with the project's goals of simplicity, educational value, and demonstration of key C++ concepts. The architecture consists of the following main components:

#### **1. `Note` Class**
- **Purpose:** Represents a single musical note with properties like pitch (e.g., C4) and duration (e.g., quarter note).
- **Why:** Encapsulating the concept of a "note" in a class allows for easy manipulation and storage of musical data. It also helps in maintaining the integrity of the note data throughout the project.

   ```cpp
   class Note {
   private:
       std::string pitch;
       int duration; // Duration could be represented as an integer (e.g., 1 for quarter note)
   public:
       // Constructors, setters, and getters
   };
   ```

#### **2. `Track` Class**
- **Purpose:** Manages a sequence of Note objects, effectively acting as a container for the musical sequence.
 - **Why:** By abstracting the sequence of notes into a Track class, we create a clear structure where operations on sequences (like adding, editing, or removing notes) can be handled in one place. This separation of concerns makes the code more maintainable and easier to extend in the future.

```cpp
   class Track {
   private:
     std::vector<Note> notes;
   public:
    // Methods to add, remove, and edit notes
    };

   ```

#### **3. `PlaybackEngine` Class**
- **Purpose:** Handles the playback of the sequence of notes in real-time, using a simple sound synthesis method.
- **Why:** The PlaybackEngine is responsible for converting the abstract note data into audible sound. This separation allows the sound generation logic to be isolated from the note management, making it easier to manage and potentially swap out different sound engines or synthesis methods in the future.

```cpp
   class PlaybackEngine {
public:
    void play(const Track& track); // Play the notes in the given track
};

   ```


#### **4. `Main` Class**
- **Purpose:** Acts as the entry point for the application, coordinating user input, interacting with the Track and PlaybackEngine classes, and managing the overall flow of the program.
- **Why:** Centralizing the control flow in main.cpp keeps the higher-level logic separate from the lower-level implementations, adhering to the principle of separation of concerns (modularity). This structure also makes it easier to extend the program with additional features, as the main logic is not cluttered with implementation details.

```cpp
  int main() {
    // Initialize objects, handle user input, manage the flow of the program
}

   ```

#### **5. File I/O Functions**
- **Purpose:** Implement functionality to save and load the sequence of notes to and from a file.
- **Why:** By handling file I/O separately, the core functionality of the application remains clean and focused. This modular approach also makes it easier to modify or extend how data is stored (e.g., changing file formats) without impacting the rest of the codebase.

```cpp
    void saveToFile(const Track& track, const std::string& filename);
    Track loadFromFile(const std::string& filename);

   ```

## Why This Architecture?

### 1. Modularity
Each class has a single responsibility (e.g., Note handles note data, Track manages sequences, PlaybackEngine handles sound). This makes the code easier to understand, maintain, and extend.

### 2.Separation of Concerns
 By separating different concerns (note management, playback, user interface), the architecture supports easier debugging and future enhancements. For example, the playback system could be upgraded to support more complex sound synthesis without needing to alter the Track or Note classes.

### 3. Scalability
Although the project is relatively simple, the architecture is designed to be scalable. I could easily add new features like multiple tracks, different instruments, or a graphical interface without needing to overhaul the existing structure.