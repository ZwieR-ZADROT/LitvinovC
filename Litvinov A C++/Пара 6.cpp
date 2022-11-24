
/*
int main()
{
    double x = 3.3;
    double y = 0;
    double y1 = 0, y2 = 0;

    y1 = pow(x, 2) + 2 * x - 3 + ((x + 1) * sqrt(pow(x, 2) - 9 ));
    y2 = pow(x, 2) - 2 * x - 3 + ((x - 1) * sqrt(pow(x, 2) - 9));
    cout << "Y = " << y1/y2 << endl;

    return 0;
}
*/
sqrt - квадрат
pow - корень
int main()
{
    setlocale(LC_ALL, "rus");
    double m = 0;
    double n = 0;
    double z1 = 0, z2 = 0;
    double z3 = 0, z4 = 0;
    double z5 = 0;
    cout << "Введите числа m и n" << endl;
    cin >> m;
    cin >> n;


    //1 часть
    z1 = pow((sqrt(m) + sqrt(n)), 2) + pow((sqrt(m) + sqrt(n)), 3);
    z2 = 2 * (m - n);

    //2 часть
    z3 = 1;
    z4 = sqrt(pow(m, 3)) - sqrt(pow(n, 3));
    if (z2 == 0 || z4 == 0)
    {
        cout << "На 0 делить нельзя";
    }
    else
    {
    //3 часть
        z5 = 3 * sqrt(m * n);
        cout << ((z1 / z2) / (z3 / z4)) - z5 << endl;
    }

    return 0;

}