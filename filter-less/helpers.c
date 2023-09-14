#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i ++)
    {
        for (int j = 0; j < width; j++)
        {
            int avrg = round((image[i][j].rgbtRed + image[i][j].rgbtBlue + image[i][j].rgbtGreen) / 3.0);

            image[i][j].rgbtRed = image[i][j].rgbtBlue = image[i][j].rgbtGreen = avrg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{


    for (int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            int sepiaRed = .393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtBlue + .189 * image[i][j].rgbtGreen;
            int sepiaGreen = .349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtBlue + .168 * image[i][j].rgbtGreen;
            int sepiaBlue = .272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtBlue + .131 * image[i][j].rgbtGreen;

            if (sepiaRed > 255){
                sepiaRed = 255;
            }

            if (sepiaBlue > 255){
                sepiaBlue = 255;
            }
            if (sepiaGreen > 255){
                sepiaGreen = 255;
            }

            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtGreen = sepiaGreen;
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE temp = image[i][j];

            image[i][j] = image[i][width - j - 1];
            image[i][width - j - 1] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

     for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            RGBTRIPLE pic2[height][width];
            pic2[i][j] = image[i][j];
        }
    }


        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                int  theRed, theBlue, theGreen;
                theRed = theBlue = theGreen = 0;
                int counter = 0;
            }
            return;


            for (int x = -1; x < 1; x++)
            {
                for (int y = -1; y < 1; y++)
                {
                    theX = i + x;
                    theY = j + y;

                    if (theX < 0 || theX > height || theY < 0 || theY > width)
                    {
                        continue;
                    }

                    theRed += theX.image[i][j].rgbtRed + theY.image[i][j].rgbtRed;
                    theBlue += theX.image[i][j].rgbtBlue + theY.image[i][j].rgbtBlue;
                    theGreen += theX.image[i][j].rgbt.Green + theY.image[i][j].rgbtGreen;
                }
            }

            
        }



}