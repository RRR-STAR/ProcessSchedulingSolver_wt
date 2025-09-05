
#include "Design-UI.hpp"


ProcessSchedulingCalculator::ProcessSchedulingCalculator(const Wt::WEnvironment &env)
    : WApplication(env), currentProcessCount_(0), selectedAlgorithm_("FCFS"), timeQuantum_(2.0){
    
    // Set application title
    setTitle("Process Scheduling Solver");
    
    // Create main interface
    createInterface();
}

// Main application entry point
std::unique_ptr<Wt::WApplication> createApplication(const Wt::WEnvironment &env) {
    return std::make_unique<ProcessSchedulingCalculator>(env);
}

int main(int argc, char *argv[]){
    return Wt::WRun(argc, argv, &createApplication);
}