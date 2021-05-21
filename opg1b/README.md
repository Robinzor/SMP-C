# 1
Vraag 1:    "Compileer dit programma en geef de executable de naam : opg1a".
Actie:      gcc opg1b.c -o opg1b
Output:     opg1b

# 2.1
Vraag:      "Run het gemaakte programma opg1a".     ("Geef het gebruikte commando.)
Actie:      ./opg1a
Output:     schakelaar staat op FALSE !!

# 2.2
Vraag:      "Bepaal de return waarde van dit programma".    ("Geef het gebruikte commando.)
Actie:      echo $?
Output:     0 (False)

# 3 (hex-editor)
Vraag:      "Gebruik een hexeditor en wijzig de byte op positie 0x646 van de waarde 0x74 naar 0x75".  
Actie: sudo apt-get install hexedit
Actie: hexedit opg1b
Actie: aanpassing hierna CTRL+S
Conclusie: de waarde 0x74 is niet aanwezig.

# 4 
Vraag: Bepaal de betekenis (in assembly opcode) van de originele en gewijzigde byte op positie 0x646.
Actie: gdb -batch -ex 'file opg1b' -ex 'disassemble/rs main'
Conclusie: geen wijzigingen



