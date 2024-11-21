#include <sil/sil.hpp>
#include "random.hpp"
#include <iostream>
#include <math.h>
#include <cmath>
#include <complex>
#include <algorithm>
#include <vector>
#include <glm/gtx/matrix_transform_2d.hpp>

sil::Image image{"images/logo.png"};
// EXO1
/*int green()
{
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            image.pixel(x, y).r = 0.f;
            image.pixel(x, y).g = 1.f;
            image.pixel(x, y).b = 0.f;
        }
    }
    image.save("output/pouet.png");
    return 0;
}*/

// EXO2
/*int swap()
{
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height() - 1; ++y)
        {

            std::swap(image.pixel(x, y).r, image.pixel(x, y).b);
        }
    }
    image.save("output/swap.png");
    return 0;
}*/

// EXO3
/*int black_whith()
{
    for (glm::vec3 &color : image.pixels())
    {
        float total{};
        total = (color.r + color.b + color.g) / 3;
        color.r = total;
        color.b = total;
        color.g = total;
    }
    image.save("output/black_white.png");
    return 0;
}*/

// EXO4
/*int negativ(){
    for (glm::vec3 &color : image.pixels())
    {
        color.r = 1.f - color.r;
        color.g = 1.f - color.g;
        color.b = 1.f - color.b;
    }
    image.save("output/negativ.png");
    return 0;
}*/

// EXO5
/* int degrade(){
    sil::Image image{300, 200};
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            image.pixel(x, y).r = x / 299.f;
            image.pixel(x, y).g = x / 299.f;
            image.pixel(x, y).b = x / 299.f;
        }
    }
    image.save("output/degrade.png");
    return 0;
}*/

// EXO6
/*int mirror(){
    for (int x{0}; x < image.width() / 2; ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            std::swap(image.pixel(x, y), image.pixel(image.width() - 1 - x, y));
        }
    }
    image.save("output/pouet.png");
    return 0;
}*/
// EXO7
/*int noise(){
    for (glm::vec3 &color : image.pixels())
    {
        float noise = static_cast<float>(rand()) / RAND_MAX - 0.5f;
        color.r += noise;
        color.g += noise;
        color.b += noise;
        if (static_cast<float>(rand()) / RAND_MAX < 0.08f)
        {
            color.r = static_cast<float>(rand()) / RAND_MAX;
            color.g = static_cast<float>(rand()) / RAND_MAX;
            color.b = static_cast<float>(rand()) / RAND_MAX;
        }
    }
    image.save("output/noise.png");
    return 0;
}*/

// EXO8
/*int rotation()
{
    sil::Image image{"images/logo.png"};
    sil::Image image1{345, 300};

    for (int x{0}; x < image1.width(); x++)
    {
        for (int y{0}; y < image1.height(); y++)
        {
            image1.pixel(x, y).r = image.pixel(y, image.height() - x - 1).r;
            image1.pixel(x, y).g = image.pixel(y, image.height() - x - 1).g;
            image1.pixel(x, y).b = image.pixel(y, image.height() - x - 1).b;
        }
    }
    image1.save("output/90_deg_logo.png");
    return 0;
}*/

// EXO9
void RGBsplit()
{
    sil::Image image{"images/logo.png"};
    sil::Image new_image{image.width(), image.height()};
    for (int x{0}; x < image.width(); x++)
    {
        for (int y{0}; y < image.height(); y++)
        {
            new_image.pixel(x, y).g = image.pixel(x, y).g;
            // On gère le rouge
            if (x - 30 >= 0)
            {
                new_image.pixel(x, y).r = image.pixel(x - 30, y).r;
            }
            // On gère le bleu
            if (x + 30 < image.width())
            {
                new_image.pixel(x, y).b = image.pixel(x + 30, y).b;
            }
        }
    }
    new_image.save("output/pouet.png");
    new_image.save("output/rgbSplit.png");
}

// EXO10
/*void bright()
{
    sil::Image image{"images/photo.jpg"};
    for (glm::vec3 &color : image.pixels())
    {
        color.r = sqrt(color.r);
        color.b = sqrt(color.b);
        color.g = sqrt(color.g);
    }
    image.save("output/brighter.png");
}*/

/*void darker(){
    sil::Image image{"images/photo.jpg"};

    for (glm::vec3 &color : image.pixels())
    {
        color.r *= color.r;
        color.b *= color.b;
        color.g *= color.g;
    }
    image.save("output/darker.png");
}*/

// EXO11
/*void disk(){
    sil::Image image{500 , 500 };
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            if ((y - 250) * (y - 250) + (x - 250) * (x - 250) <= 10000)
            {
                image.pixel(x, y).r = 1.f;
                image.pixel(x, y).g = 1.f;
                image.pixel(x, y).b = 1.f;
            }
        }
    }
    image.save("output/disk.png");
}*/

/*void circle()
{
    sil::Image image{500, 500};
    int thickness = 1000;

    for (int x{0}; x < image.width(); x++)
    {
        for (int y{0}; y < image.height(); y++)
        {
            if (((y - 250) * (y - 250) + (x - 250) * (x - 250) <= 10000) && ((y - 250) * (y - 250) + (x - 250) * (x - 250) > 10000 - thickness))
            {
                image.pixel(x, y).r = 1.f;
                image.pixel(x, y).g = 1.f;
                image.pixel(x, y).b = 1.f;
            }
        }
    }
    image.save("output/pouet.png");
}*/

/*void rosace(){
    sil::Image image{500, 500};
    double pi = 3.141592653589793;
    int thickness = 1000;

    // TODO: modifier l'image

    for (int x{0}; x < image.width(); x++)
    {
        for (int y{0}; y < image.height(); y++)
        {
            if (((y - 250) * (y - 250) + (x - 250) * (x - 250) <= 10000) && ((y - 250) * (y - 250) + (x - 250) * (x - 250) > 10000 - thickness))
            {
                image.pixel(x, y).r = 1.f;
                image.pixel(x, y).g = 1.f;
                image.pixel(x, y).b = 1.f;
            }
        }
    }

    for (int a{0}; a <= 6; a++)
        for (int x{0}; x < image.width(); x++)
        {
            for (int y{0}; y < image.height(); y++)
            {
                if (((y - 250 - (100 * std::sin(a * pi / 3))) * (y - 250 - (100 * std::sin(a * pi / 3))) + (x - 250 - (100 * std::cos(a * pi / 3))) * (x - 250 - (100 * std::cos(a * pi / 3))) <= 10000) && ((y - 250 - (100 * std::sin(a * pi / 3))) * (y - 250 - (100 * std::sin(a * pi / 3))) + (x - 250 - (100 * std::cos(a * pi / 3))) * (x - 250 - (100 * std::cos(a * pi / 3))) > 10000 - thickness))
                {
                    image.pixel(x, y).r = 1.f;
                    image.pixel(x, y).g = 1.f;
                    image.pixel(x, y).b = 1.f;
                }
            }
        }

    image.save("output/rosace.png");
}*/

/*void mosaique(){
    sil::Image image{"images/logo.png"};
    sil::Image image2{1500, 1725};

    for (int x2{0}; x2 < image2.width(); x2 += 300)
    {
        for (int y2{0}; y2 < image2.height(); y2 += 345)
        {
            for (int x1{x2}; x1 < image.width() + x2; x1++)
            {
                for (int y1{y2}; y1 < image.height() + y2; y1++)
                {
                    image2.pixel(x1, y1) = image.pixel(x1 - x2, y1 - y2);
                }
            }
        }
    }
    image2.save("output/pouet.png");
}*/

/*void mosaiqueMirror(){
    int nbrepeat{5};
    sil::Image image{"images/logo.png"};
    sil::Image imageIncrement{image.width() * nbrepeat, image.height() * nbrepeat};

    for (int x{0}; x < imageIncrement.width(); x++)
    {
        for (int y{0}; y < imageIncrement.height(); y++)
        {
            int iX{x / image.width()};
            int iY{y / image.height()};

            if (iX % 2 == 0)
            {
                if (iY % 2 == 0)
                {
                    imageIncrement.pixel(x, y) = image.pixel(x % image.width(), y % image.height());
                }else
                {
                    imageIncrement.pixel(x, y) = image.pixel(x % image.width(), image.height() - 1 - (y % image.height()));
                }
            }else{
                if (iY % 2 == 0)
                {
                    imageIncrement.pixel(x, y) = image.pixel(image.width() - 1 - (x % image.width()), y % image.height());
                }
                else
                {
                    imageIncrement.pixel(x, y) = image.pixel(image.width() - 1 - (x % image.width()), image.height() - 1 - (y % image.height()));
                }
            }

        }
    }
    imageIncrement.save("output/pouet.png");
    imageIncrement.save("output/mosaiqueMirror.png");
}*/

/*void glitch(){
    set_random_seed(5);
    sil::Image image{"images/blackops.jpg"};

    int max_x{250};
    int max_y{35};

    int iteration_glitch{50};

    for (int i = 0; i < iteration_glitch; i++)
    {
        int rand_start_x{random_int(0, image.width() - (1 + max_x))};
        int rand_end_x{random_int(rand_start_x, rand_start_x + max_x)};
        int rand_start_y{random_int(0, image.height() - (1 + max_y))};
        int rand_end_y{random_int(rand_start_y, rand_start_y + max_y)};

        int rand_offset_x{random_int(0, image.width())};
        int rand_offset_y{random_int(0, image.height())};

        for (int x{rand_start_x}; x <= rand_end_x; x++)
        {
            for (int y{rand_start_y}; y <= rand_end_y; y++)
            {
                std::swap(image.pixel(x, y), image.pixel((x + rand_offset_x) % image.width(), (y + rand_offset_y) % image.height()));
            }
        }
    }

    image.save("output/pouet.png");
    image.save("output/BO6/glitch8.png");
}*/

/*void colorDegrade(){
    sil::Image image{300, 200};

    for (int x{0}; x < image.width(); ++x) {
        // Calculer le facteur d'interpolation t
        float t = x / static_cast<float>(image.width() - 1);
        glm::vec3 red(1.0f, 0.0f, 0.0f);
        glm::vec3 green(0.0f, 1.0f, 0.0f);

        // Interpoler entre rouge et vert
        glm::vec3 color = glm::mix(red, green, t);

        for (int y{0}; y < image.height(); ++y) {
            image.pixel(x, y).r = color.r; // Assigner le rouge
            image.pixel(x, y).g = color.g; // Assigner le vert
            image.pixel(x, y).b = color.b; // Assigner le bleu (0 ici)
        }
    }

    image.save("output/pouet.png");
    //image.save("output/colorDegrade.png");
}*/

/*void Fractale()
{
    sil::Image image{500, 500};

    int x1 {};
    int y1 {};
    double x2 {};
    double y2 {};

    for (double x{0}; x < 4; x += 4.0 / 500)
    {
        for (double y{0}; y < 4; y += 4.0 / 500)
        {
            int x1 = static_cast<int>(x * (500.0 / 4.0));
            int y1 = static_cast<int>(y * (500.0 / 4.0));

            std::complex<double> z1 {0.0, 0.0};
            std::complex<double> c {x - 2, y - 2};
            int compte {};

            for (int a{0}; a < 500; a++)
            {
                z1 = z1 * z1 + c;
                compte += 1;

                if (std::abs(z1) > 2)
                {
                    double value = static_cast<double>(a) / static_cast<double>(50);

                    image.pixel(x1, y1).r = value;
                    image.pixel(x1, y1).g = value;
                    image.pixel(x1, y1).b = value;
                    break;
                }
            }

            // Si on atteint le maximum d'itérations sans divergence
            if (compte == 500)
            {
                image.pixel(x1, y1).r = 1.f;
                image.pixel(x1, y1).g = 1.f;
                image.pixel(x1, y1).b = 1.f;
            }
        }
    }

    image.save("output/pouet.png");
    image.save("output/fractale.png");
}*/

/*glm::vec2 rotated(glm::vec2 point, glm::vec2 center_of_rotation, float angle)
{
    return glm::vec2{glm::rotate(glm::mat3{1.f}, angle) * glm::vec3{point - center_of_rotation, 0.f}} + center_of_rotation;
}
void Vortex()
{
    double pi{3.14159265358979323846};

    sil::Image image{"images/logo.png"};
    int width{image.width()};
    int height{image.height()};

    sil::Image imageOut{width, height};

    // glm::vec2 centre {0, 0};
    glm::vec2 centre{(width / 2) - 1, (height / 2) - 1};

    for (int x{0}; x < width; x++)
    {
        for (int y{0}; y < height; y++)
        {
            int distance_origine{static_cast<int>(sqrt((x - centre.x) * (x - centre.x) + (y - centre.y) * (y - centre.y)))};
            double angle{distance_origine * pi / 30};
            glm::vec2 new_coord{rotated(glm::vec2{x, y}, centre, angle)};
            new_coord.x = glm::round(new_coord.x);
            new_coord.y = glm::round(new_coord.y);
            if (new_coord.x >= 0 && new_coord.x <= width - 1 && new_coord.y >= 0 && new_coord.y <= height - 1)
            {
                imageOut.pixel(x, y) = image.pixel(new_coord.x, new_coord.y);
            }
        }
    }

    imageOut.save("output/pouet.png");
    imageOut.save("output/vortex.png");
}*/

/*void Tramage()
{
    sil::Image image{"images/photo.jpg"};

    for (int x{0}; x < image.width(); x++)
    {
        for (int y{0}; y < image.height(); y++)
        {
            // On calcule la probabilité d'un pixel à être coloré en blanc en fonction de sa luminosité
            float white_proba = (image.pixel(x, y).r + image.pixel(x, y).g + image.pixel(x, y).b) / 3.f;
            if (random_float(0.f, 1.f) < white_proba)
            {
                image.pixel(x, y) = glm::vec3{1};
            }
            else
            {
                image.pixel(x, y) = glm::vec3{0};
            }
        }
    }
    image.save("output/pouet.png");
}*/

/*void betterContrast()
{
    sil::Image image{"images/photo_faible_contraste.jpg"};
    float min{1.f}; // Plus petite luminosité
    float max{0.f}; // Plus grande luminosité

    for (int x{0}; x < image.width(); x++)
    {
        for (int y{0}; y < image.height(); y++)
        {
            // On cherche le pixel avec le moins de lumière
            if ((image.pixel(x, y).r + image.pixel(x, y).g + image.pixel(x, y).b) / 3.f < min)
            {
                min = (image.pixel(x, y).r + image.pixel(x, y).g + image.pixel(x, y).b) / 3.f;
            }
            // On cherche le pixel avec le plus de lumière
            if ((image.pixel(x, y).r + image.pixel(x, y).g + image.pixel(x, y).b) / 3.f > max)
            {
                max = (image.pixel(x, y).r + image.pixel(x, y).g + image.pixel(x, y).b) / 3.f;
            }
        }
    }

    for (int x{0}; x < image.width(); x++)
    {
        for (int y{0}; y < image.height(); y++)
        {
            image.pixel(x, y).r -= min;
            image.pixel(x, y).g -= min;
            image.pixel(x, y).b -= min;

            image.pixel(x, y).r *= 1.f / max;
            image.pixel(x, y).g *= 1.f / max;
            image.pixel(x, y).b *= 1.f / max;
        }
    }
    image.save("output/pouet.png");
    image.save("output/betterContrast.jpg");
}*/

/*void blur()
{
    // On crée une nouvelle image avec la même taille que l'image d'entrée
    sil::Image new_image{image.width(), image.height()};
    int level{10}; // Niveau de flou

    // On parcourt tous les pixels de notre image
    for (int x{0}; x < image.width(); x++)
    {
        for (int y{0}; y < image.height(); y++)
        {
            glm::vec3 sum{0.f};
            int size{level};
            // On parcourt tous les pixels de notre matrice de flou
            for (int x_offset{-size}; x_offset < size; x_offset++)
            {
                for (int y_offset{-size}; y_offset < size; y_offset++)
                {
                    int real_x_offset{x_offset};
                    int real_y_offset{y_offset};
                    if (x + real_x_offset < 0 || x + real_x_offset >= image.width())
                    {
                        real_x_offset = 0;
                    }
                    if (y + real_y_offset < 0 || y + real_y_offset >= image.height())
                    {
                        real_y_offset = 0;
                    }
                    sum += image.pixel(x + real_x_offset, y + real_y_offset);
                }
            }
            // On calcule et on applique la couleur trouvée au pixel de l'image parcouru
            sum /= pow(2 * size + 1, 2);
            new_image.pixel(x, y) = sum;
        }
    }
    new_image.save("output/pouet.png");
    new_image.save("output/blur.png");
}*/

int main()
{
    /*{
        green();
        sil::Image image{"images/logo.png"};
    }*/
    /*{
        swap();
        sil::Image image{"images/logo.png"};
    }*/
    /*{
        black_whith();
        sil::Image image{"images/logo.png"};
    }*/
    /*{
        negativ();
        sil::Image image{"images/logo.png"};
    }*/
    /*{
        degrade();
        sil::Image image{"images/logo.png"};
    }*/
    /*{
        mirror();
        sil::Image image{"images/logo.png"};
    }*/
    /*{
        noise();
        sil::Image image{"images/logo.png"};
    }*/
    /*{
        rotation();
        sil::Image image{"images/logo.png"};
    }*/
    /*{
        RGBsplit();
        sil::Image image{"images/logo.png"};
    }*/
    /*{
        bright();
        sil::Image image{"images/photo.jpg"};
    }*/
    /*{
        darker();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        disk();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        circle();
        sil::Image image{"output/pouet.png"};
    }*/
    /*-{
        mosaique();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        rosace();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        mosaiqueMirror();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        glitch();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        colorDegrade();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        Fractale();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        Tramage();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        Vortex();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        Tramage();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        betterContrast();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        blur();
        sil::Image image{"output/pouet.png"};
    }*/
    return 0;
}