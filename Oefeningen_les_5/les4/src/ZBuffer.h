#include <vector>

class ZBuffer
{
public:
    void Initialize(int breedte, int hoogte, int diepte)
    {
        _zValues.clear();
        _breedte = breedte;
        _hoogte = hoogte;
        for (int i = 0; i < _breedte * _hoogte; ++i)
        {
            _zValues.push_back(diepte);
        }
    }

    void Clear(int diepte)
    {
        for (int i = 0; i < _breedte * _hoogte; ++i)
        {
            _zValues[i] = diepte;
        }
    }

    int GetValue(int x, int y)
    {
        int new_x = (_breedte / 2) + x;
        int new_y = (_hoogte / 2) + y;
        return _zValues[(new_x * _breedte) + new_y];
    }

    void SetValue(int x, int y, int value)
    {
        int new_x = (_breedte / 2) + x;
        int new_y = (_hoogte / 2) + y;
        _zValues[(new_x * _breedte) + new_y] = value;
    }

private:
    int _hoogte;
    int _breedte;
    std::vector<int> _zValues;
};