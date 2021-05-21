
# 1
Vraag 1:    "Compileer dit programma en geef de executable de naam : opg1a".
Actie:      gcc opg1a.c -o opg1a
Output:     opg1a.exe

# 2.1
Vraag:      "Run het gemaakte programma opg1a".     ("Geef het gebruikte commando.)
Actie:      ./opg1a
Output:     hello world!

# 2.2
Vraag:      "Bepaal de return waarde van dit programma".    ("Geef het gebruikte commando.)
Actie:      echo $?
Output:     1

# 3.1
Vraag:      "Onderzoek met het file commando het type bestand van opg1a.c".
Actie:      Het commando "file opg1a.c" uitgevoerd op Linux.
Output:     opg1a.c: C source, ASCII text, with CRLF line terminators

# 3.2
Vraag:      "Onderzoek met het file commando het type bestand van opg1a".
Actie:      Het commando "file opg1a" uitgevoerd op Linux.
Output:     ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 3.2.0, BuildID[sha1]=dbcc6dcc4fa2080f0a637f02205c9ec2a7769ce2, not stripped

# 4
Vraag:      "Controleer / onderzoek of de onderstaande bewering juist is:
            het file commando gebruikt de extensie om te bepalen of opg1a.c een c-source code bestand is."
Actie:      Bij het hernoemen van de bestandsextensie naar .txt en geeft het unix command file "C Source" aan.
            Bij mijn test file "test.txt" met willekeurige characters geeft het unix command file "ASCII text" aan.
Conclusie:  Het commando file in unix kijkt naar de inhoud van een bestand.

# 5
Vraag:      "Analyseer het programma opg1a m.b.v. het strings commando.
            zijn de namen van de nieuwe de definities, glob. variabele msg en functie toon, terug
            te vinden in de strings output ? Geef een duidelijke verklaring waarom dit zo is"
Actie:      strings opg1a
Output:     De variabele"toon" is terug te vinden want dit is een methode. 
            Echter is dit niet het geval voor de global variable "msg", omdat dit niet meer te lezen is na het compilen.


            

