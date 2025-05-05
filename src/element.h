#ifndef ELEMENT_H
#define ELEMENT_H

#include <tuple>

/// Ein Element eines binären Suchbaumes.
struct Element
{

    /// das Element in einem Baum
    std::tuple<int, bool> element;

    /// left child
    Element *left;

    /// right child
    Element *right;

    /// Default-Konstruktor
    Element();

    /// Konstruktor
    Element(int const &key, bool const &value);

    /// Überprüft, ob der Baum leer ist
    bool empty() const;
};

#endif
