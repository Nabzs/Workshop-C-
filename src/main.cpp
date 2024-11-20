#include <sil/sil.hpp>
#include "random.hpp"
#include <iostream>
#include <math.h>
#include <cmath>
#include <complex>

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
/*int RGBsplit()
{
    sil::Image image{"images/logo.png"};
    sil::Image image1{"images/logo-copie.png"};

    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {

        }

        image1.save("output/pouet.png");
        return 0;
    }


    A FINIR !!!!!!!!!!!!!!!!!!!!!!
    A FINIR !!!!!!!!!!!!!!!!!!!!!!
    A FINIR !!!!!!!!!!!!!!!!!!!!!!

};*/

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

/*void rosace()
{
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

/*void mosaique()
{
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

/*void mosaiqueMirror()
{

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

/*void glitch()
{
    set_random_seed(500);
    sil::Image image{"images/logo.png"};

    int max_x{38};
    int max_y{8};

    int iteration_glitch{59};

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
    //image.save("output/glitch8.png");
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
   
}
