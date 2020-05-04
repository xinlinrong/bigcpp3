#ifndef  _rectangle_hpp_
#define _rectangle_hpp_ 1

#include <vector>

using namespace std;

namespace bigcpp {
    namespace chapter1 {
        // class Block
        class Block {
        private:
            int row = 0;
            int column = 0;
            int color = 0;

        public:
            Block(int row, int column, int color): row{row}, column{column}, color{color}{}
            const int BLOCK_COLOR_BLACK = 2;
            const int BLOCK_COLOR_WHITE = 1;
            const int BLOCK_COLOR_NONE = 0;
            inline void set_color(int color) {this->color = color;};
            inline int get_color(int color) {return this->color;};
            inline bool is_match(int row, int column) {return (this->row == row && this->column == column);}
        };

        // R1_20_Rectangle
        class R1_20_Rectangle {
        private:
            int rows = 0;
            int columns = 0;
            int dist = 0;
            vector<Block> blocks;
            inline int get_index(int row, int column) {return 0;};
            
        public:
            explicit R1_20_Rectangle(int rows, int columns): rows(rows), columns(columns){}
            int validate_checkin();
            inline int get_rows() {return this->rows;}
            inline int get_columns() {return this->columns;}
            void draw();
        };
    } // namespace
} // namespace

#endif