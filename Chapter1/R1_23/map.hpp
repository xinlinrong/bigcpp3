#ifndef _map_hpp_
#define _map_hpp_ 1

#include <vector>

using namespace std;

namespace bigcpp {
    namespace chapter1 {

        /**
         * class: Map_item_type
         * desc: map item type
         */
        enum class Map_item_type {BASE, WINDOW, WALL, PASS};
        
        /**
         * class : Map_item_base
         * desc: map base item, other class inherit from it
         */
        class Map_item_base {
        private:
            int row = 0;

            int column = 0;

            int item_id = 0;

            int item_union_id = 0;

            Map_item_type item_type;

        public:
            Map_item_base(
                int row,
                int column,
                int item_id,
                int item_union_id,
                Map_item_type item_type
            ): row{row}, column{column}, item_id{item_id}, item_union_id{item_union_id}, item_type{item_type} {}

            inline int get_row() {return this->row;}

            inline int get_column() {return this->column;}
            
            inline int get_item_id() {return item_id;}

            inline int get_union_id() {return this->item_union_id;}

            inline Map_item_type get_item_type() {return this->item_type;}
        };

        /**
         * class : Map_item_window
         * desc: map base window, class which inherit from Map_item_base
         */
        class Map_item_window: public Map_item_base {
        public:
            Map_item_window(
                int row,
                int column,
                int item_id,
                int item_union_id,
                Map_item_type item_type = Map_item_type::WINDOW
            ): Map_item_base(row, column, item_id, item_union_id, item_type){}
        };

        /**
         * class : Map_item_wall
         * desc: map base wall, class which inherit from Map_item_base
         */
        class Map_item_wall: public Map_item_base {
        public:
            Map_item_wall(
                int row,
                int column,
                int item_id,
                int item_union_id,
                Map_item_type item_type = Map_item_type::WALL
            ): Map_item_base(row, column, item_id, item_union_id, item_type){}
        };

        /**
         * class : Map_item_pass
         * desc: map base pass, class which inherit from Map_item_base
         */
        class Map_item_pass: public Map_item_base {
        public:
            Map_item_pass(
                int row,
                int column,
                int item_id,
                int item_union_id,
                Map_item_type item_type = Map_item_type::PASS
            ): Map_item_base(row, column, item_id, item_union_id, item_type){}
        };
        
        /**
         * class : Map_item_pass
         * desc: map base pass, class which inherit from Map_item_base
         */
        class Map {
        private:
            int rows = 0;

            int columns = 0;

            vector<Map_item_base> mibs{};

            bool check_in_range(int row, int column);
        public:
            Map(
                int rows, 
                int columns, 
                vector<Map_item_base> mibs
            ): rows{rows}, columns{columns}, mibs{mibs} {}
            
            inline int get_rows();

            inline int get_columns();

            bool is_pass(int row, int column);

            bool is_window(int row, int column);

            bool is_wall(int row, int column);
        };

        /**
         * class : Map_item_config
         * desc: map item config
         */
        struct  Map_item_config {
        public:
                int row;
                int column;
                int item_id;
                int item_union_id;
                Map_item_type item_type;
                Map_item_config(
                    int row,
                    int column,
                    int item_id,
                    int item_union_id,
                    Map_item_type item_type
                ): row{row}, column{column}, item_id{item_id}, item_union_id{item_union_id}, item_type{item_type} {}
        };
        
        /**
         * class: Map_generator
         * desc: parttern of map builder
         */
        class Map_generator {
        public:
            static Map create(int rows, int columns, const vector<Map_item_config> &vmic);
        };

    } // namespace
} // namespace

#endif