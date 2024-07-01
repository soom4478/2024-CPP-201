#include <SFML/Graphics.hpp>
#include <vector>

// Ball Ŭ���� ����
class Ball {
public:
    sf::CircleShape shape; // ���� ����
    sf::Vector2f velocity; // ���� �ӵ�

    Ball(float mX, float mY) {                  // Ball ������
        shape.setPosition(mX, mY);              // �ʱ� ��ġ
        shape.setRadius(10.f);           // ������ 
        shape.setFillColor(sf::Color::Magenta); // ��
        shape.setOrigin(10.f, 10.f);
        velocity = { -8.f, -8.f };              // �ӵ�
    }

    void update() {
        // ���� �����̰� ��
        shape.move(velocity);

        if (left() < 0)
            velocity.x = 8.f;
        else if (right() > 800)
            velocity.x = -8.f;

        if (top() < 0)
            velocity.y = 8.f;
        else if (bottom() > 600)
            velocity.y = -8.f;
    }

    float left() { return shape.getPosition().x - shape.getRadius(); }
    float right() { return shape.getPosition().x + shape.getRadius(); }
    float top() { return shape.getPosition().y - shape.getRadius(); }
    float bottom() { return shape.getPosition().y + shape.getRadius(); }
};

// Paddle Ŭ���� ����
class Paddle {
public:
    sf::RectangleShape shape;
    const float paddleWidth = 100.f;
    const float paddleHeight = 20.f;
    const float paddleVelocity = 10.f;

    Paddle(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ paddleWidth, paddleHeight });
        shape.setFillColor(sf::Color::Blue);
        shape.setOrigin(paddleWidth / 2.f, paddleHeight / 2.f); // �������� �߽�����
    }

    void update() {
        // ���� ȭ��ǥ Ű�� ������ && ���� ���� ���� ���� ��
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) && left() > 0) {
            shape.move(-paddleVelocity, 0.f);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) && right() < 800) {
            shape.move(paddleVelocity, 0.f);
        }
    }

    float left() { return shape.getPosition().x - shape.getSize().x / 2.f; }
    float right() { return shape.getPosition().x + shape.getSize().x / 2.f; }
    float top() { return shape.getPosition().y - shape.getSize().y / 2.f; }
    float bottom() { return shape.getPosition().y + shape.getSize().y / 2.f; }
};

// Brick Ŭ���� ����
class Brick {
public:
    sf::RectangleShape shape;
    bool destroyed = false;

    Brick() {
        shape.setSize({ 60.f, 20.f });
        shape.setFillColor(sf::Color::Yellow);
        shape.setOrigin(30.f, 10.f);
    }

    Brick(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ 60.f, 20.f });
        shape.setFillColor(sf::Color::Yellow);
        shape.setOrigin(30.f, 10.f);
    }

    void setPosition(float mX, float mY) {
        shape.setPosition(mX, mY);
    }
};

const int windowWidth = 800;
const int windowHeight = 600;
const int brickRows = 5;
const int brickColumns = 10;
const float brickWidth = 60.f;
const float brickHeight = 20.f;

int main() {
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Brick");
    window.setFramerateLimit(60); // 1�ʿ� 60���������� ����

    Ball ball(windowWidth / 2, windowHeight / 2);
    Paddle paddle(windowWidth / 2, windowHeight - 50);

    Brick bricks[brickRows][brickColumns];
    for (int i = 0; i < brickRows; ++i) {
        for (int j = 0; j < brickColumns; ++j) {
            bricks[i][j].setPosition((j + 1) * (brickWidth + 10), (i + 1) * (brickHeight + 10));
        }
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // update
        ball.update();
        paddle.update();

        // ���� �е��� �浹ó��
        if (ball.shape.getGlobalBounds().intersects(paddle.shape.getGlobalBounds())) {
            ball.velocity.y = -ball.velocity.y;
        }

        for (int i = 0; i < brickRows; i++) {
            for (int j = 0; j < brickColumns; j++) {
                if (bricks[i][j].destroyed) continue;
                if (ball.shape.getGlobalBounds().intersects(bricks[i][j].shape.getGlobalBounds())) {
                    ball.velocity.y = -ball.velocity.y;
                    bricks[i][j].destroyed = true;
            }
            }
        }

        // draw
        window.clear();
        window.draw(ball.shape);
        window.draw(paddle.shape);
        for (int i = 0; i < brickRows; i++) {
            for (int j = 0; j < brickColumns; j++) {
                if (!bricks[i][j].destroyed)
                    window.draw(bricks[i][j].shape);
            }
        }
        window.display();
    }

    return 0;
}
