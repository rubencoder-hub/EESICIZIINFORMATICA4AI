#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

class Libro {
public:
    std::string titolo;
    std::string autore;
    int anno;

    Libro(std::string t, std::string a, int an) : titolo(t), autore(a), anno(an) {}

    std::string toCSV() const {
        return titolo + "," + autore + "," + std::to_string(anno);
    }

    static Libro fromCSV(const std::string& csvLine) {
        size_t pos1 = csvLine.find(',');
        size_t pos2 = csvLine.find(',', pos1 + 1);
        std::string titolo = csvLine.substr(0, pos1);
        std::string autore = csvLine.substr(pos1 + 1, pos2 - pos1 - 1);
        int anno = std::stoi(csvLine.substr(pos2 + 1));
        return Libro(titolo, autore, anno);
    }
};

class Libreria {
private:
    std::vector<Libro> libri;
    const std::string filename = "libreria.csv";

public:
    Libreria() {
        caricaLibri();
    }

    ~Libreria() {
        salvaLibri();
    }

    void aggiungiLibro(const Libro& libro) {
        libri.push_back(libro);
    }

    void rimuoviLibro(const std::string& titolo) {
        libri.erase(std::remove_if(libri.begin(), libri.end(),
            [&](const Libro& libro) { return libro.titolo == titolo; }),
            libri.end());
    }

    Libro* trovaLibro(const std::string& titolo) {
        for (auto& libro : libri) {
            if (libro.titolo == titolo) {
                return &libro;
            }
        }
        return nullptr;
    }

    void mostraLibreria() const {
        for (const auto& libro : libri) {
            std::cout << "Titolo: " << libro.titolo << ", Autore: " << libro.autore << ", Anno: " << libro.anno << std::endl;
        }
    }

    void ordinaPerAnnoC() {
        std::sort(libri.begin(), libri.end(), [](const Libro& a, const Libro& b) {
            return a.anno < b.anno;
        });
    }

    void ordinaPerAnnoD() {
        std::sort(libri.begin(), libri.end(), [](const Libro& a, const Libro& b) {
            return a.anno > b.anno;
        });
    }

private:
    void salvaLibri() const {
        std::ofstream file(filename);
        for (const auto& libro : libri) {
            file << libro.toCSV() << std::endl;
        }
    }

    void caricaLibri() {
        std::ifstream file(filename);
        std::string line;
        while (std::getline(file, line)) {
            if (!line.empty()) {
                libri.push_back(Libro::fromCSV(line));
            }
        }
    }
};

int main() {
    Libreria libreria;

    
    libreria.aggiungiLibro(Libro("Il Signore degli Anelli", "J.R.R. Tolkien", 1954));
    libreria.aggiungiLibro(Libro("1984", "George Orwell", 1949));
    libreria.aggiungiLibro(Libro("La Divina Commedia", "Dante Alighieri", 1320));

    
    std::cout << "Libri nella libreria:" << std::endl;
    libreria.mostraLibreria();

    
    libreria.ordinaPerAnnoC();
    std::cout << "\nLibri ordinati per anno crescente:" << std::endl;
    libreria.mostraLibreria();

    
    libreria.ordinaPerAnnoD();
    std::cout << "\nLibri ordinati per anno decrescente:" << std::endl;
    libreria.mostraLibreria();

    
    std::string titoloDaCercare = "1984";
    Libro* libroTrovato = libreria.trovaLibro(titoloDaCercare);
    if (libroTrovato) {
        std::cout << "\nLibro trovato: " << libroTrovato->titolo << ", Autore: " << libroTrovato->autore << ", Anno: " << libroTrovato
