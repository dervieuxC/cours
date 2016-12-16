#include "Note.h"

// Constructors

Note::Note ( ) {
}

  /**
   * Set the value of note
   * @param new_var the new value of note
   */
  void Note::setNote ( float new_var )   {
      note = new_var;
  }//fin de "setNote"

  /**
   * Get the value of note
   * @return the value of note
   */
  float Note::getNote ( )   {
    return note;
  }//fin de "getNote"

  /**
   * Set the value of proprietaire
   * @param new_var the new value of proprietaire
   */
  void Note::setProprietaire ( Eleve* new_var )   {
      proprietaire = new_var;
  }//fin de "setProprietaire"

  /**
   * Get the value of proprietaire
   * @return the value of proprietaire
   */
  Eleve* Note::getProprietaire ( )   {
    return proprietaire;
  }//fin de "getProprietaire"

void Note::saisieNote(){
float laNote;
cin >> laNote;
setNote(laNote);
}

void Note::affiNote(){
cout << getNote() << endl;
}
