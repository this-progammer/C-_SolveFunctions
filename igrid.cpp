#include <iostream>

template<int col, int row>
class IGrid {
    int m_col;
    int m_row;
public:
    
    inline IGrid& getGrid() {
        return *this;
    }

    inline int& getCol(){
        return m_col;
    }

    inline int& getRow() {
        return m_row;
    }

    constexpr auto Create()->auto&;
    
};


template<int col, int row> constexpr auto IGrid<col, row>::Create()->auto& {
    auto& grid = this->getGrid();
        for( auto i = 0; i <= 0; i++ ){
            grid.m_col = col; 
            grid.getCol();
            grid.m_row = row; 
            grid.getRow();
        }
    const char* c = "|";
    const char* r = "_";
        for( auto j = grid.m_col; j >= sizeof( col ); j-- ){
            std::cout << c << j << std::endl;
            std::cout << "Grid Power : " << col << "x" << row << std::endl;
        }
        for( auto k = grid.m_row; k >= sizeof( row ); k-- ){
            std::cout << r << k << std::endl;
            std::cout << "Grid Power : " << col << "x" << row << std::endl;
        }
  //  std::cout << "Grid Power : " << col << "x" << row << std::endl;
    return grid;
}

int main(){
     const int g_col = 1024;
     const int g_row = 1024;

    IGrid<g_col, g_row> grid;
    grid.Create();
    
    return 0;
}
