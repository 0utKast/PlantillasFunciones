
template <typename T>
T mayor(T x, T y)
{
    return (x > y) ? x : y;
}














template<typename T>  //esta es la declaraci�n del par�metro de plantilla
T mayor(T x, T y) //no compilar� sin definir "T"
{
    return (x > y) ? x : y;
}
















/*double mayor(double x, double y)
{
    return (x > y) ? x : y;
}


long mayor(long x, long y)
{
    return (x > y) ? x : y;
}

long double mayor(long double x, long double y)
{
    return (x > y) ? x : y;
}

long long mayor(long long x, long long y)
{
    return (x > y) ? x : y;
}*/

