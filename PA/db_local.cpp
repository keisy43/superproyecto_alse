#include "db_local.h"
#include"regu.h"
#include <iostream>
#include <sstream>
#include "QDebug"

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
        char *zErrMsg = 0;
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

    bool db_local::cargarusuario(string namenew, string lastnamenew,string fnnew,string docinew,string usernuevo,string contranew)
    {

        char *zErrMsg = 0;
        int rc;

        std::stringstream sql;
        /* Create SQL statement */


     sql <<"INSERT INTO DATOSU ( NOMBRE ,_APELLIDO , _FECHAN,_DOCIDENT,_USUARIO, _CONTRA ) VALUES (' ";

     sql << namenew<<"','" << lastnamenew<<"','"<<fnnew<<"','";
     sql <<docinew<<"','"<<usernuevo<<"','"<<contranew<<"');";
        std::cout << sql.str() << std::endl;

        /* Execute SQL statement */
        rc = sqlite3_exec(db, sql.str().c_str(),0,0, &zErrMsg);
cout<<rc<<endl;
        if( rc != 0 ){
           fprintf(stderr, "SQL error: %s\n", zErrMsg);
           sqlite3_free(zErrMsg);
            return false;
        }
           fprintf(stdout, "Records created successfully\n");

        return true;
        }
    bool db_local::cerrarDB(){
            sqlite3_close( db );
       }
//    bool db_local::login (usuario &a){

//        char *zErrMsg = 0;
//        int rc;

//        std::stringstream sql;
//          sql << "SELECT * FROM DATOSU WHERE ( _USUARIO = " << a.getUser()<< " );";
//        sql << "SELECT * FROM DATOSU WHERE ( _CONTRA = " << a.getContra() << " );";

//        rc = sqlite3_exec(db, sql.str().c_str(),agregarusuario , (void*)&a, &zErrMsg);

//        if( rc != SQLITE_OK ) {
//           fprintf(stderr, "SQL error: %s\n", zErrMsg);
//           sqlite3_free(zErrMsg);
//        } else {
//           fprintf(stdout, "Operation done successfully\n");
//        }

//        return 0;

//    }
//   int db_local::agregarusuario(void *data, int argc, char **argv, char **azColName){

//        usuario * a = (usuario*) data ;
//      a->setUser(argv[4]);
//   a->setContra(argv[5]);


//       return 0;
//    }


   bool db_local::cargarpaciente(string np,string appc,float Doc,float fecha,string genero,string raza,string direccion,string nin){
       char *zErrMsg = 0;
       int rc;

       std::stringstream sql;
       /* Create SQL statement */


    sql <<"INSERT INTO _DATOSDP ( _NOMBRE ,_APELLIDO , _DOCIDENT,_FECHAN,_GENERO, _RAZA,_DIRECCION,_NINGRESOS ) VALUES (' ";

    sql << np<<"','" << appc<<"','"<< Doc<<"','";
    sql <<fecha<<"','"<<genero<<"','"<<raza<<"','"<<direccion<<"','"<<nin<<"');";
       std::cout << sql.str() << std::endl;

       /* Execute SQL statement */
       rc = sqlite3_exec(db, sql.str().c_str(),0,0, &zErrMsg);
cout<<rc<<endl;
       if( rc != 0 ){
          fprintf(stderr, "SQL error: %s\n", zErrMsg);
          sqlite3_free(zErrMsg);
           return false;
       }
          fprintf(stdout, "Records created successfully\n");

       return true;
   }



















































