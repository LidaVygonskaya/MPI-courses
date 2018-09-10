#include <stdio.h>
#include <mpi.h>

int main(int argc, char* argv[]) {

    int numtasks, rank;
    MPI_Init(&argc, &argv); //Инициализация MPI
    MPI_Comm_size(MPI_COMM_WORLD, &numtasks); //ЧИсло потоков
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);//Номер текущего потока
    printf( "Hello world from process %d of %d\n", rank, numtasks);
    MPI_Finalize(); //Завершение работы MPI
    return 0;
}