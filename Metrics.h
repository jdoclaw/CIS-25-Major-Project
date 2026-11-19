#ifndef METRICS_H
#define METRICS_H

// Responsibility: dated snapshot of artist metrics

enum class Metric {
    SpotifyStreams,
    InstagramFollowers
};

class Metrics {
public:
    Metrics(int daysSinceJanFirst, int monthlySpotifyStreams, int instagramFollowers);

    int getDay() const;
    int getMonthlySpotifyStreams() const;
    int getInstagramFollowers() const;
    int getValue(Metric m) const;   

private:
    int daysSinceJanFirst;
    int monthlySpotifyStreams;
    int instagramFollowers;
};

#endif