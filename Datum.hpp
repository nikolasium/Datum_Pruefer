#ifndef DATUM_HPP
#define	DATUM_HPP

/**
 * Kapselt alle Algorithmen und Informationen zu einem Datum.
 *
 */
class Datum {
	int tag;
	int monat;
	int jahr;

	void pruefeMonat(int m);
	void pruefeTag(int t);
	void pruefeJahr(int j);

public:
	/**
	 * Initialisiert ein leeres Datum.
	 */
	Datum();

	/**
	 * Initialisiert ein Datum mit den gegebenen Informationen.
	 * @param jahr das neue Jahr
	 * @param monat der neue Monat
	 * @param tag der neue Tag
	 */
	Datum(int jahr, int monat, int tag);

	/**
	 * Gibt das Datum auf der Konsole aus.
	 *
	 */

	void ausgabe() const;

	/**
	 * Erfragt ein Datum vom Endanwender und überprüft auf einfache Plausuiblität.
	 */

	void eingabe();

};

#endif	/* DATUM_HPP */
