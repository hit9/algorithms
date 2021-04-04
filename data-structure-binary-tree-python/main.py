from tree import *


def test_bfs():
    root = bt_from_array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
    a = bt_bfs(root)
    assert a == [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]


def test_bt_preorder():
    root = bt_from_array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
    a = bt_preorder(root)
    assert a == [0, 1, 3, 7, 8, 4, 9, 2, 5, 6]


def test_bt_inorder():
    root = bt_from_array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
    a = bt_inorder(root)
    assert a == [7, 3, 8, 1, 9, 4, 0, 5, 2, 6]


def test_bt_postorder():
    root = bt_from_array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
    a = bt_postorder(root)
    assert a == [7, 8, 3, 9, 4, 1, 5, 6, 2, 0]


def test_from_to_array():
    a1 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    r1 = bt_from_array(a1)
    b1 = bt_to_array(r1)
    r11 = bt_from_array(b1)
    assert b1 == a1
    assert bt_compare(r1, r11)

    a2 = [2, 3, -1, 4, -1, 5, -1, 6]
    r2 = bt_from_array(a2)
    b2 = bt_to_array(r2)
    r21 = bt_from_array(b2)
    assert b2 == a2
    assert bt_compare(r2, r21)

    a3 = [2, -1, 3, -1, 4, -1, 5, -1, 7]
    r3 = bt_from_array(a3)
    b3 = bt_to_array(r3)
    r31 = bt_from_array(b3)
    assert b3 == a3
    assert bt_compare(r3, r31)


def main():
    test_bfs()
    test_bt_preorder()
    test_bt_inorder()
    test_bt_postorder()
    test_from_to_array()


if __name__ == "__main__":
    main()
