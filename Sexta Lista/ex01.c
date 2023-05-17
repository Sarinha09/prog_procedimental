struct horario {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct compromisso {
    int data;
    int horario;
    char texto[100];
};