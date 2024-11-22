#include <sil/sil.hpp>
#include "random.hpp"
#include <iostream>
#include <math.h>
#include <cmath>
#include <complex>
#include <algorithm>
#include <vector>
#include <glm/gtx/matrix_transform_2d.hpp>
#include <map>
#include <limits>
#include <random>
#include <cmath>
#include <array>
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
/*void RGBsplit()
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
}*/

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

/*void kMeans()
{   sil::Image image{"images/photo.jpg"};
    int width = image.width();
    int height = image.height();
    int k = 16; // Définit le nombre de clusters

    // Initialize centroids
    std::vector<glm::vec3> centroids(k);
    for (int i = 0; i < k; i++)
    {
        centroids[i] = image.pixel(random_int(0, width - 1), random_int(0, height - 1));
    }

    // Iterate until convergence
    bool converged = false;
    while (!converged)
    {
        // Assign pixels to clusters
        std::vector<std::vector<glm::vec3>> clusters(k);
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                glm::vec3 pixel = image.pixel(x, y);
                int closestCentroid = 0;
                float minDistance = glm::distance(pixel, centroids[0]);
                for (int i = 1; i < k; i++)
                {
                    float distance = glm::distance(pixel, centroids[i]);
                    if (distance < minDistance)
                    {
                        closestCentroid = i;
                        minDistance = distance;
                    }
                }
                clusters[closestCentroid].push_back(pixel);
            }
        }

        // Update centroids
        converged = true;
        for (int i = 0; i < k; i++)
        {
            if (!clusters[i].empty()) {
                glm::vec3 sum(0.f);
                for (const glm::vec3 &pixel : clusters[i])
                {
                    sum += pixel;
                }
                glm::vec3 newCentroid = sum / static_cast<float>(clusters[i].size());
                if (newCentroid != centroids[i])
                {
                    centroids[i] = newCentroid;
                    converged = false;
                }
            }
        }
    }
    // Assign new colors to pixels
    for (int x = 0; x < width; x++)
    {
        for (int y = 0; y < height; y++)
        {
            glm::vec3 pixel = image.pixel(x, y);
            int closestCentroid = 0;
            float minDistance = glm::distance(pixel, centroids[0]);
            for (int i = 1; i < k; i++)
            {
                float distance = glm::distance(pixel, centroids[i]);
                if (distance < minDistance)
                {
                    closestCentroid = i;
                    minDistance = distance;
                }
            }
            image.pixel(x, y) = centroids[closestCentroid]; // Vérifier que cette ligne est correcte
        }
    }

    image.save("output/pouet.png");
    image.save("output/kmeans/kmeans-16-colors.jpg");
}*/

/*void calculSecteur(sil::Image &image, std::vector<std::array<glm::vec3, 2>> &table, std::array<std::array<int, 2>, 2> &sector, int &x, int &y);

void kurahara()
{
    sil::Image image{"images/photo.jpg"};
    sil::Image voidImage{image.width(), image.height()};
    int factor{3};

    std::array<std::array<int, 2>, 2> secteur_1{std::array{0, factor}, std::array{0, factor}};
    std::array<std::array<int, 2>, 2> secteur_2{std::array{0, factor}, std::array{0, -factor}};
    std::array<std::array<int, 2>, 2> secteur_3{std::array{0, -factor}, std::array{0, -factor}};
    std::array<std::array<int, 2>, 2> secteur_4{std::array{0, -factor}, std::array{0, factor}};

    // Parcours de tous les pixels
    for (int x{0}; x < image.width(); x++)
    {
        for (int y{0}; y < image.height(); y++)
        {
            std::vector<std::array<glm::vec3, 2>> varianceTable;

            calculSecteur(image, varianceTable, secteur_1, x, y);
            calculSecteur(image, varianceTable, secteur_2, x, y);
            calculSecteur(image, varianceTable, secteur_3, x, y);
            calculSecteur(image, varianceTable, secteur_4, x, y);

            // On veut la variance la plus faible, ici à l'indice 0
            std::sort(
                varianceTable.begin(),
                varianceTable.end(),
                [](std::array<glm::vec3, 2> const &array1, std::array<glm::vec3, 2> const &array2)
                {
                    return glm::length(array1[1]) < glm::length(array2[1]);
                });

            voidImage.pixel(x, y) = varianceTable[0][0];
        }
    }

    voidImage.save("output/pouet.png");
    voidImage.save("output/kurahara.png");
}

glm::vec3 moyenneSecteur(sil::Image &image, std::array<std::array<int, 2>, 2> &secteur, int &x, int &y)
{
    int increase_i{1};
    int increase_j{1};

    // J'ajoute ou je retire ?
    if (secteur[0][1] < 0)
        increase_i = -1;
    if (secteur[1][1] < 0)
        increase_j = -1;

    // On détermine la moyenne du secteur
    glm::vec3 moyenne_secteur{0.f};
    int count{0};
    for (int i{secteur[0][0]}; i != secteur[0][1] + increase_i; i += increase_i)
    {
        for (int j{secteur[1][0]}; j != secteur[1][1] + increase_j; j += increase_j)
        {
            if (x + i >= 0 && x + i < image.width() && y + j >= 0 && y + j < image.height())
            {
                moyenne_secteur += image.pixel(x + i, y + j);
                count++;
            }
        }
    }
    if (count > 0)
    {
        moyenne_secteur /= static_cast<float>(count);
    }
    return moyenne_secteur;
}

glm::vec3 varianceSecteur(sil::Image &image, std::array<std::array<int, 2>, 2> &secteur, int &x, int &y, glm::vec3 moyenne_secteur)
{
    int increase_i{1};
    int increase_j{1};

    // J'ajoute ou je retire ?
    if (secteur[0][1] < 0)
        increase_i = -1;
    if (secteur[1][1] < 0)
        increase_j = -1;

    // On détermine la variance du secteur
    glm::vec3 variance{0.f};
    int count{0};
    for (int i{secteur[0][0]}; i != secteur[0][1] + increase_i; i += increase_i)
    {
        for (int j{secteur[1][0]}; j != secteur[1][1] + increase_j; j += increase_j)
        {
            if (x + i >= 0 && x + i < image.width() && y + j >= 0 && y + j < image.height())
            {
                glm::vec3 pixel_value = image.pixel(x + i, y + j);
                variance += (pixel_value - moyenne_secteur) * (pixel_value - moyenne_secteur);
                count++;
            }
        }
    }
    if (count > 0)
    {
        variance /= static_cast<float>(count);
    }
    return glm::sqrt(variance);
}

void calculSecteur(sil::Image &image, std::vector<std::array<glm::vec3, 2>> &table, std::array<std::array<int, 2>, 2> &sector, int &x, int &y)
{
    glm::vec3 moyenne{moyenneSecteur(image, sector, x, y)};
    table.push_back({moyenne, varianceSecteur(image, sector, x, y, moyenne)});
}*/

/*void DiamondSquare() //Sans couleur
{
    const int size = 1025; // Must be 2^n + 1
    sil::Image image{size, size};

    // Initialize the corners
    float roughness = 0.5f;
    image.pixel(0, 0) = glm::vec3(random_float(0.f, 1.f));
    image.pixel(0, size - 1) = glm::vec3(random_float(0.f, 1.f));
    image.pixel(size - 1, 0) = glm::vec3(random_float(0.f, 1.f));
    image.pixel(size - 1, size - 1) = glm::vec3(random_float(0.f, 1.f));

    for (int sideLength = size - 1; sideLength >= 2; sideLength /= 2, roughness /= 2.0f)
    {
        int halfSide = sideLength / 2;

        // Square step
        for (int x = halfSide; x < size; x += sideLength)
        {
            for (int y = halfSide; y < size; y += sideLength)
            {
                float avg = (image.pixel(x - halfSide, y - halfSide).r +
                             image.pixel(x - halfSide, y + halfSide).r +
                             image.pixel(x + halfSide, y - halfSide).r +
                             image.pixel(x + halfSide, y + halfSide).r) /
                            4.0f;
                image.pixel(x, y) = glm::vec3(avg + random_float(-roughness, roughness));
            }
        }

        for (int x = 0; x < size; x += halfSide)
        {
            for (int y = (x + halfSide) % sideLength; y < size; y += sideLength)
            {
                float avg = 0.0f;
                int count = 0;

                if (x >= halfSide)
                {
                    avg += image.pixel(x - halfSide, y).r;
                    count++;
                }
                if (x + halfSide < size)
                {
                    avg += image.pixel(x + halfSide, y).r;
                    count++;
                }
                if (y >= halfSide)
                {
                    avg += image.pixel(x, y - halfSide).r;
                    count++;
                }
                if (y + halfSide < size)
                {
                    avg += image.pixel(x, y + halfSide).r;
                    count++;
                }
                avg /= static_cast<float>(count);
                image.pixel(x, y) = glm::vec3(avg + random_float(-roughness, roughness));
            }
        }
    }
    float minVal = 1.0f, maxVal = 0.0f;


    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < size; y++)
        {
            minVal = std::min(minVal, image.pixel(x, y).r);
            maxVal = std::max(maxVal, image.pixel(x, y).r);
        }
    }
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < size; y++)
        {
            float normalizedVal = (image.pixel(x, y).r - minVal) / (maxVal - minVal);
            image.pixel(x, y) = glm::vec3(normalizedVal);
        }
    }
    image.save("output/pouet.png");
    image.save("output/DiamondSquare.png");
}*/
/*void DiamondSquareColor()
{

    const int size = 2049; // Must be 2^n + 1
    sil::Image image{size, size};

    // Initialize the corners
    float roughness = 0.5f;
    image.pixel(0, 0) = glm::vec3(random_float(0.f, 1.f));
    image.pixel(0, size - 1) = glm::vec3(random_float(0.f, 1.f));
    image.pixel(size - 1, 0) = glm::vec3(random_float(0.f, 1.f));
    image.pixel(size - 1, size - 1) = glm::vec3(random_float(0.f, 1.f));

    for (int sideLength = size - 1; sideLength >= 2; sideLength /= 2, roughness /= 2.0f)
    {
        int halfSide = sideLength / 2;

        // Square step
        for (int x = halfSide; x < size; x += sideLength)
        {
            for (int y = halfSide; y < size; y += sideLength)
            {
                float avg = (image.pixel(x - halfSide, y - halfSide).r +
                             image.pixel(x - halfSide, y + halfSide).r +
                             image.pixel(x + halfSide, y - halfSide).r +
                             image.pixel(x + halfSide, y + halfSide).r) /
                            4.0f;
                image.pixel(x, y) = glm::vec3(avg + random_float(-roughness, roughness));
            }
        }

        for (int x = 0; x < size; x += halfSide)
        {
            for (int y = (x + halfSide) % sideLength; y < size; y += sideLength)
            {
                float avg = 0.0f;
                int count = 0;

                if (x >= halfSide)
                {
                    avg += image.pixel(x - halfSide, y).r;
                    count++;
                }
                if (x + halfSide < size)
                {
                    avg += image.pixel(x + halfSide, y).r;
                    count++;
                }
                if (y >= halfSide)
                {
                    avg += image.pixel(x, y - halfSide).r;
                    count++;
                }
                if (y + halfSide < size)
                {
                    avg += image.pixel(x, y + halfSide).r;
                    count++;
                }
                avg /= static_cast<float>(count);
                image.pixel(x, y) = glm::vec3(avg + random_float(-roughness, roughness));
            }
        }
    }
    float minVal = 1.0f, maxVal = 0.0f;

    // Après avoir normalisé les valeurs, appliquons le dégradé de couleur
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < size; y++)
        {
            float height = image.pixel(x, y).r;

            glm::vec3 color;
            if (height < 0.2f) // Eau profonde
                color = glm::mix(glm::vec3(0, 0, 0.5f), glm::vec3(0, 0, 1), height / 0.2f);
            else if (height < 0.4f) // Eau peu profonde
                color = glm::mix(glm::vec3(0, 0, 1), glm::vec3(0, 0.8f, 1), (height - 0.2f) / 0.2f);
            else if (height < 0.5f) // Plage
                color = glm::mix(glm::vec3(0, 0.8f, 1), glm::vec3(1, 1, 0), (height - 0.4f) / 0.1f);
            else if (height < 0.7f) // Plaines
                color = glm::mix(glm::vec3(0, 0.8f, 0), glm::vec3(0, 0.5f, 0), (height - 0.5f) / 0.2f);
            else if (height < 0.9f) // Montagnes
                color = glm::mix(glm::vec3(0.5f, 0.5f, 0.5f), glm::vec3(0.7f, 0.7f, 0.7f), (height - 0.7f) / 0.2f);
            else // Sommets enneigés
                color = glm::mix(glm::vec3(0.7f, 0.7f, 0.7f), glm::vec3(1, 1, 1), (height - 0.9f) / 0.1f);

            image.pixel(x, y) = color;
        }
    }

    image.save("output/pouet.png");
    //image.save("output/DiamondSquareColored.png");
}*/

void DiamondSquareColorRandom()
{
    // Set a random seed based on current time
    set_random_seed(static_cast<int>(std::time(nullptr)));

    int n = random_int(2, 20);
    const int size = (1 << n) + 1;

    sil::Image image{size, size};

    // Initialize the corners
    float roughness = 0.5f;
    image.pixel(0, 0) = glm::vec3(random_float(0.f, 1.f));
    image.pixel(0, size - 1) = glm::vec3(random_float(0.f, 1.f));
    image.pixel(size - 1, 0) = glm::vec3(random_float(0.f, 1.f));
    image.pixel(size - 1, size - 1) = glm::vec3(random_float(0.f, 1.f));

    for (int sideLength = size - 1; sideLength >= 2; sideLength /= 2, roughness /= 2.0f)
    {
        int halfSide = sideLength / 2;

        // Square step
        for (int x = halfSide; x < size; x += sideLength)
        {
            for (int y = halfSide; y < size; y += sideLength)
            {
                float avg = (image.pixel(x - halfSide, y - halfSide).r +
                             image.pixel(x - halfSide, y + halfSide).r +
                             image.pixel(x + halfSide, y - halfSide).r +
                             image.pixel(x + halfSide, y + halfSide).r) /
                            4.0f;
                image.pixel(x, y) = glm::vec3(avg + random_float(-roughness, roughness));
            }
        }

        // Diamond step
        for (int x = 0; x < size; x += halfSide)
        {
            for (int y = (x + halfSide) % sideLength; y < size; y += sideLength)
            {
                float avg = 0.0f;
                int count = 0;

                if (x >= halfSide)
                {
                    avg += image.pixel(x - halfSide, y).r;
                    count++;
                }
                if (x + halfSide < size)
                {
                    avg += image.pixel(x + halfSide, y).r;
                    count++;
                }
                if (y >= halfSide)
                {
                    avg += image.pixel(x, y - halfSide).r;
                    count++;
                }
                if (y + halfSide < size)
                {
                    avg += image.pixel(x, y + halfSide).r;
                    count++;
                }

                avg /= static_cast<float>(count);
                image.pixel(x, y) = glm::vec3(avg + random_float(-roughness, roughness));
            }
        }
    }

    // Normalize and apply color gradient
    float minVal = 1.0f, maxVal = 0.0f;
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < size; y++)
        {
            minVal = std::min(minVal, image.pixel(x, y).r);
            maxVal = std::max(maxVal, image.pixel(x, y).r);
        }
    }

    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < size; y++)
        {
            float height = (image.pixel(x, y).r - minVal) / (maxVal - minVal);

            glm::vec3 color;
            if (height < 0.1f) // Eau profonde
                color = glm::mix(glm::vec3(0, 0, 0.6f), glm::vec3(0, 0, 1), height / 0.1f);
            else if (height < 0.3f) // Eau peu profonde
                color = glm::mix(glm::vec3(0, 0, 1), glm::vec3(0, 0.7f, 1), (height - 0.1f) / 0.2f);
            else if (height < 0.4f) // Plage
                color = glm::mix(glm::vec3(0, 0.7f, 1), glm::vec3(1, 1, 0.5f), (height - 0.3f) / 0.1f);
            else if (height < 0.6f) // Plaines
                color = glm::mix(glm::vec3(0.5f, 0.8f, 0), glm::vec3(0.3f, 0.5f, 0), (height - 0.4f) / 0.2f);
            else if (height < 0.75f) // Collines
                color = glm::mix(glm::vec3(0.2f, 0.5f, 0.2f), glm::vec3(0.5f, 0.25f, 0.0f), (height - 0.6f) / 0.15f);
            else if (height < 0.85f) // Montagnes
                color = glm::mix(glm::vec3(0.5f, 0.5f, 0.5f), glm::vec3(0.4f, 0.3f, 0.2f), (height - 0.75f) / 0.1f);
            else if (height < 0.95f) // Sommets rocheux
                color = glm::mix(glm::vec3(0.4f, 0.3f, 0.2f), glm::vec3(0.7f, 0.7f, 0.7f), (height - 0.85f) / 0.1f);
            else // Sommets enneigés
                color = glm::mix(glm::vec3(0.7f, 0.7f, 0.7f), glm::vec3(1, 1, 1), (height - 0.95f) / 0.05f);

            image.pixel(x, y) = color;
        }
    }

    image.save("output/pouet.png");
    image.save("output/DiamondSquareColored_" + std::to_string(size) + ".png");
}

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
    /*{
        kMeans();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        kurahara();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        heightMap();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
        DiamondSquare();
        sil::Image image{"output/pouet.png"};
    }*/
    /*{
     DiamondSquareColor();
     sil::Image image{"output/pouet.png"};
    }*/
    {
        DiamondSquareColorRandom();
        sil::Image image{"output/pouet.png"};
    }
    return 0;
}