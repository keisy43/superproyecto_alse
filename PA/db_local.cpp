#include "db_local.h"
#include"regu.h"
#include <iostream>
#include <sstream>

using namespace std;

    /**
     * @brief db_local::abrirDB
     * @param path  Es la ubicación absoluta o relativa de la DB.
     * @return Un valor boleano que describe si pudo abrir la DB o no.
     */
db_local::db_local()
{
}
    bool db_local::abrirDB( string path ){
        int rc;

        /* Open database */
        rc = sqlite3_open( path.c_str() , &db);

        if( rc ) {
           fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
           return false;
        }else
            fprintf(stderr, "Opened database successfully\n");

        return true;


}

    bool db_local::cargarusuario( datosu &a ){
        /* TABLE `DATOSU` (
    `ID_USUARIO`	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE,
    `NOMBRE`	TEXT NOT NULL,
    `_APELLIDO`	TEXT NOT NULL,
    `_FECHAN`	TEXT NOT NULL,
    `_DOCIDENT`	TEXT NOT NULL,
    `_USUARIO`	TEXT NOT NULL,
    `_CONTRA`	TEXT NOT NULL
);*/

        char *zErrMsg = 0;
        int rc;

        std::stringstream sql;
        /* Create SQL statement */


     sql <<"  INSERT INTO `DATOSU`(NOMBRE,_APELLIDO,_FECHAN,_DOCIDENT,_USUARIO,_CONTRA)"
              "VALUES (";
      sql << a.getnombre() <<"  , "<< a.getapellido() << ", " <<a.getFechan() << ", " ;


      sql << a.getDocident()<< ", " << a.getUser() << ", "<< a.getContra() <<  ");" ;

        std::cout << sql.str() << std::endl;

        /* Execute SQL statement */
        rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);

        if( rc != SQLITE_OK ){
           fprintf(stderr, "SQL error: %s\n", zErrMsg);
           sqlite3_free(zErrMsg);
           return false;
        } else {
           //fprintf(stdout, "Records created successfully\n");
        }
        return true;
        }
    bool db_local::cerrarDB(){
            sqlite3_close( db );
        }
   int db_local::agregarusuario(void *data, int argc, char **argv, char **azColName){
            datosu* a = (datosu *) data;
            a->setNombre(argv[1]);
            a->setApellido(argv[2]);
            a->setFechan(argv[3] );
            a->setDocident(argv[4]);
            a->setUser(argv[5]);
            a->setContra(argv[6]);
            return 0;
        }



















































