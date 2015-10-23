#include <QtTest>
#include <string>
#include <vector>

#include <SelectionSort.h>

using std::string;
using std::vector;

class SelectionSort_test : public QObject
{
    Q_OBJECT

public:
    SelectionSort_test();

private Q_SLOTS:

    void swap_test_data();
    void swap_test();

    void sort_test_data();
    void sort_test();
};

void SelectionSort_test::swap_test()
{
    QFETCH(vector<int>, inputVector);
    QFETCH(int, idA);
    QFETCH(int, idB);
    QFETCH(vector<int>, result);

    SELS::swap(inputVector,idA,idB);
    QCOMPARE(inputVector, result);
}

void SelectionSort_test::swap_test_data()
{
    QTest::addColumn<vector<int>>("inputVector");
    QTest::addColumn<int>("idA");
    QTest::addColumn<int>("idB");
    QTest::addColumn<vector<int>>("result");

    QTest::newRow("small array")
            << vector<int>({1,2,3,4}) << 0 << 1
            << vector<int>({2,1,3,4});

    QTest::newRow("elements equal")
            << std::vector<int>({1,1,3,4}) << 0 << 1
            << std::vector<int>({1,1,3,4});

    QTest::newRow("big distance")
            << std::vector<int>({1,2,3,4,5,6,7,8,9,10}) << 0 << 9
            << std::vector<int>({10,2,3,4,5,6,7,8,9,1});
}

void SelectionSort_test::sort_test()
{
    QFETCH(vector<int>, inputVector);
    QFETCH(vector<int>, result);

    SELS::sort(inputVector);
    QCOMPARE(inputVector, result);
}

void SelectionSort_test::sort_test_data()
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
}

SelectionSort_test::SelectionSort_test()
{
}


QTEST_APPLESS_MAIN(SelectionSort_test)

#include "test_selectionsort.moc"
