#ifndef DB_LOCAL_H
#define DB_LOCAL_H

#include <string>
#include <sqlite3.h>
#include"datosu.h"
#include "regpc.h"
using namespace std;
/**
 * @brief The DB_Local class
 * Esta clase maneja la conexión con la bases de datos en
 * SQLite3 para almacenar permanentemente los datos en un archivo.
 *
 * @details
 */

class db_local{

        private:
            sqlite3 *db;

            static int agregarusuario(void *data, int argc, char **argv, char **azColName);
            static int agregarpaciente(void *data, int argc, char **argv, char **azColName);

        public:
            db_local();
            bool abrirDB( string path );
            bool cargarusuario( datosu &a);
            bool cargarpaciente(regpc &a);

            bool cerrarDB();
        };

        #endif // DB_LOCAL_H
