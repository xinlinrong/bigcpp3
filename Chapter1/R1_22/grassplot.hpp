#ifndef _grassplot_hpp_
#define _grassplot_hpp_ 1

#include <vector>

using namespace std;

namespace bigcpp {
    namespace  chapter1 {

        class GrassPlotObject
        {
        private:
            int row = 0;
            int column = 0;
            int rows = 0;
            int columns = 0;
            int can_pass = 1;
        public:
            GrassPlotObject(int row, int column, int rows, int columns, int can_pass):row{row}, column{column}, rows{rows}, columns{columns}, can_pass{can_pass}{}
            inline int get_row() {return this->row;};
            inline int get_column() {return this->column;};
            inline int get_index() {return this->row * this->columns + column;};
            inline bool if_can_pass() {return (this->can_pass==1);};
        };
        
        class Grass: public GrassPlotObject
        {
        public:
            Grass(int row, int column, int rows, int columns): GrassPlotObject(row, column, rows, columns, 1){};
        };

        class Barrier: public GrassPlotObject
        {
        public:
            Barrier(int row, int column, int rows, int columns): GrassPlotObject(row, column, rows, columns, 0){};
        };

        class Wall: public GrassPlotObject
        {
            Wall(int row, int column, int rows, int columns): GrassPlotObject(row, column, rows, columns, 0){};
        };
        
        class Window: public GrassPlotObject
        {
            Window(int row, int column, int rows, int columns): GrassPlotObject(row, column, rows, columns, 0){};
        };
        
        class GrassPlot
        {
        private:
            int rows = 0;
            int columns = 0;
            vector<GrassPlotObject> vgpos{};
        public:
            GrassPlot(int rows, int columns): rows{rows}, columns{columns} {}
            inline int get_rows(){ return this->rows;};
            inline int get_columns() {return this->columns;}
            inline int get_index(int row, int column) {return row * this->columns + column;};
            bool if_can_pass(int row, int column);
            void initialize();
        };
    } // namespace
} // namespace

#endif