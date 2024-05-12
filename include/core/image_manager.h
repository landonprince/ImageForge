// By: Landon Prince (5/10/2024)

#ifndef PIXALYZE_IMAGE_MANAGER_H
#define PIXALYZE_IMAGE_MANAGER_H

#include <opencv2/opencv.hpp>

class ImageManager {
public:
    ImageManager() = default;
    ~ImageManager() = default;
    ImageManager(const ImageManager&) = delete;
    ImageManager& operator=(const ImageManager&) = delete;

    void loadImage(const std::string& filePath);
    void showImage() const;
private:
    cv::Mat image;
    std::string imagePath;
};

#endif //PIXALYZE_IMAGE_MANAGER_H
