
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    // Dichiarazione delle variabili
    int server_socket, client_socket;
    struct sockaddr_in server_address, client_address;
    socklen_t client_address_len = sizeof(client_address);

    // Creazione del socket del server
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) {
        perror("Errore nella creazione del socket");
        exit(EXIT_FAILURE);
    }

    // Configurazione dell'indirizzo del server
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(12345); // Scegliere una porta libera
    server_address.sin_addr.s_addr = INADDR_ANY;

    // Collegamento del socket del server all'indirizzo e alla porta
    if (bind(server_socket, (struct sockaddr*)&server_address, sizeof(server_address)) == -1) {
        perror("Errore nel binding dell'indirizzo");
        exit(EXIT_FAILURE);
    }

    // Inizio dell'ascolto delle connessioni in arrivo
    if (listen(server_socket, 5) == -1) {
        perror("Errore nell'ascolto delle connessioni");
        exit(EXIT_FAILURE);
    }

    printf("Server in ascolto sulla porta 12345...\n");

    while (1) {
        // Accettazione di una connessione in arrivo
        client_socket = accept(server_socket, (struct sockaddr*)&client_address, &client_address_len);
        if (client_socket == -1) {
            perror("Errore nell'accettare la connessione");
            exit(EXIT_FAILURE);
        }

        printf("Connessione accettata da %s:%d\n", inet_ntoa(client_address.sin_addr), ntohs(client_address.sin_port));

        // Invio di un messaggio di benvenuto al client
        char welcome_message[] = "Benvenuto al server TCP!";
        send(client_socket, welcome_message, sizeof(welcome_message), 0);

        // Ricezione e visualizzazione dei dati inviati dal client
        char buffer[1024];
        int bytes_received = recv(client_socket, buffer, sizeof(buffer), 0);
        if (bytes_received == -1) {
            perror("Errore nella ricezione dei dati");
            exit(EXIT_FAILURE);
        }

        buffer[bytes_received] = '\0';
        printf("Dati ricevuti dal client: %s\n", buffer);

        // Chiusura della connessione con il client
        close(client_socket);
    }

    // Chiusura del socket del server
    close(server_socket);

    return 0;
}
