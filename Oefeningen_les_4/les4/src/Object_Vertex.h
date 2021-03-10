#pragma once

class Object_Vertex
{

public:
    Object_Vertex(int id, double x, double y, double z)  : m_id(id), m_x(x), m_y(y), m_z(z) {}
    void setId(int id) { m_id = id; }
    void setX(double x) { m_x = x; }
    void setY(double y) { m_y = y; }
    void setZ(double z) { m_z = z; }

    int getId() { return m_id; }
    double getX() { return m_x; }
    double getY() { return m_y; }
    double getZ() { return m_z; }

private:
    int m_id;
    double m_x;
    double m_y;
    double m_z;

};