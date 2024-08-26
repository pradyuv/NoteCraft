#include "include/Note.hpp"

// Default constructor: initializes with default values (aka middle C)
Note::Note() : pitch("C4"), duration(1) {}

// Parameterized constructor: initializes with specified pitch and duration
Note::Note(const std::string& pitch, int duration) : pitch(pitch), duration(duration) {}

//SETTERS AND GETTERS

// Sets the pitch of the note
void Note::setPitch(const std::string& pitch) {
    this->pitch = pitch;
}

// Returns the pitch of the note
std::string Note::getPitch() const {
    return pitch;
}

// Sets the duration of the note
void Note::setDuration(int duration) {
    this->duration = duration;
}

// Returns the duration of the note
int Note::getDuration() const {
    return duration;
}
