#include <SFML/Graphics.hpp>

int main()
{
    // â ����
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Example");

    // �� ����� ���� ����
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    // ���� ����
    while (window.isOpen())
    {
        // �̺�Ʈ ó��
        sf::Event event;
        while (window.pollEvent(event))
        {
            // â�� ������ �̺�Ʈ ó��
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // â �����
        window.clear();

        // ���� �׸���
        window.draw(shape);

        // ȭ�� ������Ʈ
        window.display();
    }

    return 0;
}