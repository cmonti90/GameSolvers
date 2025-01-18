#ifndef TANGO_BOARD_H
#define TANGO_BOARD_H


namespace Tango
{

class TangoBoard
{
public:
    static constexpr unsigned int DEFAULT_BOARD_SIZE = 4;

    TangoBoard();
    TangoBoard( const unsigned int boardSize );
    
    ~TangoBoard();

    void setBoardSize( const unsigned int boardSize ) { boardSize_ = boardSize; }

private:

    unsigned int boardSize_;
    bool board_[DEFAULT_BOARD_SIZE * DEFAULT_BOARD_SIZE];


}; // struct TangoBoard

} // namespace Tango



#endif // TANGO_BOARD_H