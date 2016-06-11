#ifndef LITAINER_TIMER_H
#define LITAINRE_TIMER_H
#include <chrono>

namespace litainer {

class Timer {
public:
    Timer() : _begin(std::chrono::high_resolution_clock::now()) {}
    void reset() {
        _begin = std::chrono::high_resolution_clock::now();
    }

    //默认输出秒
    /*
    double elapsed() const {
        return std::chrono::duration_cast<std::chrono::duration<double> >(
                std::chrono::high_resolution_clock::now() - _begin).count();
    }
    */
    //默认输出毫秒
    int64_t elapsed() const {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::high_resolution_clock::now() - _begin).count();
    }
    //微秒
    int64_t elapsed_micro() const {
        return std::chrono::duration_cast<std::chrono::microseconds>(
                std::chrono::high_resolution_clock::now() - _begin).count();
    }
    //纳秒
    int64_t elapsed_nano() const {
        return std::chrono::duration_cast<std::chrono::nanoseconds>(
                std::chrono::high_resolution_clock::now() - _begin).count();
    }
    //秒
    int64_t elapsed_seconds() const {
        return std::chrono::duration_cast<std::chrono::seconds>(
                std::chrono::high_resolution_clock::now() - _begin).count();
    }
    //分
    int64_t elapsed_minutes() const {
        return std::chrono::duration_cast<std::chrono::minutes>(
                std::chrono::high_resolution_clock::now() - _begin).count();
    }
    //时
    int64_t elapsed_hours() const {
        return std::chrono::duration_cast<std::chrono::hours>(
                std::chrono::high_resolution_clock::now() - _begin).count();
    }
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> _begin;
};

}
#endif
