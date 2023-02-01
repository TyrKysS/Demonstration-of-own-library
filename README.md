# Ukázka implementace vlastní knihovny
**example_LED_library.ino** je hlavní program, který se kompiluje do Arduino. Pro správnou funkčnost tohoto programu se vyžaduje importovat složku **LEDLibrary** do složky _Dokumenty/Arduino/libraries_
# Popis programu
Ukázka **example_LED_library.ino** prezentuje vytvoření dvou instancí v rámci jedné knihovny, kdy každá instance má nastaven svůj pin a ke své činnosti vyžívá zvolené metody.
- rgbstrip - LED pásek o 144 diodách
- LED - integrovaná dioda v Arduino
