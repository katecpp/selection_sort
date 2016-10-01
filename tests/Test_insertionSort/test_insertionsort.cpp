#include <QtTest>
#include <string>
#include <vector>

#include <InsertionSort.h>
#include <data/CFoo.h>

using std::string;
using std::vector;

class InsertionSort_test : public QObject
{
    Q_OBJECT

public:
    InsertionSort_test();

private Q_SLOTS:

    void sort_test_data();
    void sort_test();

    void sort_foo_data();
    void sort_foo();
};

void InsertionSort_test::sort_test()
{
    QFETCH(vector<int>, inputVector);
    QFETCH(vector<int>, result);

    INSS::sort(inputVector);
    QCOMPARE(inputVector, result);
}

void InsertionSort_test::sort_test_data()
{
    QTest::addColumn<vector<int>>("inputVector");
    QTest::addColumn<vector<int>>("result");

    QTest::newRow("already sorted")
            << vector<int>({1,2,3,4,5,6,7,8,9,10})
            << vector<int>({1,2,3,4,5,6,7,8,9,10});

    QTest::newRow("elements equal")
            << std::vector<int>({1,1,1,1,1,1,1,1,1,1})
            << std::vector<int>({1,1,1,1,1,1,1,1,1,1});

    QTest::newRow("ten elements sort")
            << std::vector<int>({5,6,2,3,5,7,9,8,4,1})
            << std::vector<int>({1,2,3,4,5,5,6,7,8,9});

    QTest::newRow("reversed")
            << std::vector<int>({10,9,8,7,6,5,4,3,2,1})
            << std::vector<int>({1,2,3,4,5,6,7,8,9,10});
}

void InsertionSort_test::sort_foo_data()
{
    QTest::addColumn<vector<F::CFoo>>("inputVector");
    QTest::addColumn<vector<F::CFoo>>("result");

    QTest::newRow("short foo")
            << std::vector<F::CFoo>({F::CFoo(2,"b"), F::CFoo(3,"c"), F::CFoo(1,"a")})
            << std::vector<F::CFoo>({F::CFoo(1,"a"), F::CFoo(2,"b"), F::CFoo(3,"c")});
}

void InsertionSort_test::sort_foo()
{
    QFETCH(vector<F::CFoo>, inputVector);
    QFETCH(vector<F::CFoo>, result);

    INSS::sort(inputVector);
    QCOMPARE(inputVector, result);
}

InsertionSort_test::InsertionSort_test()
{
}


QTEST_APPLESS_MAIN(InsertionSort_test)

#include "test_insertionsort.moc"
