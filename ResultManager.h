class ResultManager {
public:
    ResultManager();
    ~ResultManager();

    void storeResults(const std::vector<Parasite>& results);
    void exportResults(const std::string& path);

private:
    std::vector<Parasite> results;
};
