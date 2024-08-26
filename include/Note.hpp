#ifndef NOTE_HPP
#define NOTE_HPP

#include <string>  // Include the string library to use the std::string type

/**
 * @brief A class representing a musical note.
 * 
 * The Note class encapsulates the concept of a musical note with properties 
 * for pitch and duration. It provides methods to set and get these properties.
 */
class Note {
private:
    std::string pitch;  // The pitch of the note (e.g., "C4", "D#4")
    int duration;       // The duration of the note, represented as an integer (e.g., 1 for a quarter note)

public:
    /**
     * @brief Default constructor for the Note class.
     * 
     * Initializes a Note with default values ("C4" for pitch and 1 for duration).
     */
    Note();

    /**
     * @brief Parameterized constructor for the Note class.
     * 
     * @param pitch The pitch of the note (e.g., "C4").
     * @param duration The duration of the note (e.g., 1 for a quarter note).
     */
    Note(const std::string& pitch, int duration);

    /**
     * @brief Sets the pitch of the note.
     * 
     * @param pitch The new pitch of the note (e.g., "D#4").
     */
    void setPitch(const std::string& pitch);

    /**
     * @brief Gets the pitch of the note.
     * 
     * @return The pitch of the note as a string.
     */
    std::string getPitch() const;

    /**
     * @brief Sets the duration of the note.
     * 
     * @param duration The new duration of the note (e.g., 1 for a quarter note).
     */
    void setDuration(int duration);

    /**
     * @brief Gets the duration of the note.
     * 
     * @return The duration of the note as an integer.
     */
    int getDuration() const;
};

#endif // NOTE_HPP
