#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[4] = { 0 };
                        // tree #1
                        if (x[1] <= 365.0) {
                            if (x[0] <= 296.0) {
                                if (x[1] <= 262.0) {
                                    if (x[0] <= 148.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[2] <= 245.5) {
                                            if (x[2] <= 196.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 201.5) {
                                                    if (x[1] <= 213.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 206.0) {
                                        if (x[0] <= 186.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 298.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 342.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #2
                        if (x[1] <= 368.5) {
                            if (x[2] <= 280.5) {
                                if (x[0] <= 273.0) {
                                    if (x[0] <= 148.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 160.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 262.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 270.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 189.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 344.5) {
                                        if (x[1] <= 314.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 400.0) {
                                if (x[1] <= 395.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #3
                        if (x[1] <= 368.0) {
                            if (x[0] <= 296.0) {
                                if (x[2] <= 255.0) {
                                    if (x[1] <= 191.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 152.5) {
                                            if (x[2] <= 193.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 316.5) {
                                        if (x[0] <= 186.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 309.5) {
                                                if (x[0] <= 199.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 373.5) {
                                if (x[1] <= 370.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #4
                        if (x[1] <= 371.0) {
                            if (x[2] <= 255.0) {
                                if (x[1] <= 275.0) {
                                    if (x[1] <= 192.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 204.5) {
                                            if (x[2] <= 193.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 306.5) {
                                    if (x[1] <= 280.5) {
                                        if (x[0] <= 186.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 285.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 221.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 309.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 225.5) {
                                            if (x[0] <= 215.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 238.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #5
                        if (x[1] <= 368.0) {
                            if (x[0] <= 296.5) {
                                if (x[2] <= 233.0) {
                                    if (x[0] <= 148.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 154.5) {
                                            if (x[1] <= 200.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 289.5) {
                                        if (x[2] <= 284.0) {
                                            if (x[2] <= 282.5) {
                                                if (x[1] <= 274.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 186.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 246.0) {
                                            if (x[0] <= 209.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[2] <= 330.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 288.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #6
                        if (x[2] <= 314.5) {
                            if (x[1] <= 282.5) {
                                if (x[0] <= 155.5) {
                                    if (x[0] <= 148.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 255.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 255.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 272.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= 287.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 296.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 331.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 202.0) {
                                    if (x[2] <= 369.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 390.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[0] <= 311.0) {
                            if (x[0] <= 182.5) {
                                if (x[2] <= 228.0) {
                                    if (x[1] <= 191.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 200.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 196.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 204.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 342.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 243.5) {
                                    if (x[2] <= 312.5) {
                                        if (x[2] <= 290.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 206.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 368.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 441.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #8
                        if (x[2] <= 314.5) {
                            if (x[0] <= 291.0) {
                                if (x[1] <= 253.5) {
                                    if (x[2] <= 178.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 309.5) {
                                        if (x[2] <= 282.5) {
                                            if (x[1] <= 276.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 346.5) {
                                if (x[0] <= 179.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 371.0) {
                                        if (x[0] <= 225.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #9
                        if (x[0] <= 310.5) {
                            if (x[1] <= 365.5) {
                                if (x[2] <= 255.0) {
                                    if (x[2] <= 177.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 277.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[2] <= 323.5) {
                                            if (x[0] <= 176.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 332.5) {
                                                    if (x[0] <= 215.0) {
                                                        if (x[2] <= 293.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 303.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #10
                        if (x[1] <= 368.0) {
                            if (x[1] <= 285.0) {
                                if (x[0] <= 160.5) {
                                    if (x[2] <= 178.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 187.0) {
                                        if (x[2] <= 245.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 265.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 309.5) {
                                        if (x[2] <= 293.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 238.5) {
                                            if (x[0] <= 222.5) {
                                                if (x[0] <= 205.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 278.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #11
                        if (x[2] <= 312.0) {
                            if (x[0] <= 296.5) {
                                if (x[0] <= 200.5) {
                                    if (x[1] <= 248.5) {
                                        if (x[1] <= 189.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[0] <= 152.5) {
                                                if (x[2] <= 193.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 355.0) {
                                if (x[1] <= 358.0) {
                                    if (x[1] <= 311.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[2] <= 333.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #12
                        if (x[1] <= 368.0) {
                            if (x[0] <= 296.0) {
                                if (x[0] <= 186.5) {
                                    if (x[1] <= 241.5) {
                                        if (x[0] <= 152.5) {
                                            if (x[0] <= 148.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 199.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 236.5) {
                                        if (x[0] <= 228.0) {
                                            if (x[0] <= 205.5) {
                                                if (x[0] <= 198.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 373.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #13
                        if (x[1] <= 365.0) {
                            if (x[0] <= 296.0) {
                                if (x[2] <= 255.0) {
                                    if (x[2] <= 177.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 280.5) {
                                        if (x[1] <= 277.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[0] <= 176.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 309.5) {
                                            if (x[2] <= 293.5) {
                                                if (x[1] <= 282.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 186.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 231.0) {
                                                if (x[0] <= 215.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 405.0) {
                                if (x[2] <= 288.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #14
                        if (x[2] <= 314.5) {
                            if (x[0] <= 296.0) {
                                if (x[1] <= 286.5) {
                                    if (x[1] <= 262.0) {
                                        if (x[1] <= 189.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[2] <= 193.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 153.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 183.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 329.0) {
                                        if (x[0] <= 199.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 230.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 239.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #15
                        if (x[2] <= 314.5) {
                            if (x[0] <= 296.5) {
                                if (x[0] <= 178.0) {
                                    if (x[2] <= 253.0) {
                                        if (x[2] <= 178.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 203.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 152.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 310.0) {
                                votes[3] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #16
                        if (x[1] <= 373.5) {
                            if (x[0] <= 295.5) {
                                if (x[0] <= 181.5) {
                                    if (x[1] <= 257.0) {
                                        if (x[0] <= 148.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 332.0) {
                                        if (x[2] <= 314.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 334.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #17
                        if (x[2] <= 312.0) {
                            if (x[0] <= 296.0) {
                                if (x[1] <= 252.5) {
                                    if (x[1] <= 189.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[2] <= 196.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 204.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 187.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 362.0) {
                                if (x[0] <= 208.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 334.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #18
                        if (x[1] <= 368.0) {
                            if (x[1] <= 282.5) {
                                if (x[2] <= 255.0) {
                                    if (x[0] <= 152.5) {
                                        if (x[2] <= 179.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 200.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 277.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[2] <= 281.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 267.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 363.0) {
                                        if (x[2] <= 326.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 373.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #19
                        if (x[1] <= 373.5) {
                            if (x[0] <= 297.0) {
                                if (x[0] <= 157.5) {
                                    if (x[0] <= 145.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 181.5) {
                                        if (x[2] <= 264.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 293.5) {
                                            if (x[2] <= 267.5) {
                                                if (x[1] <= 251.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 271.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 238.5) {
                                                if (x[2] <= 307.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 330.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 365.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #20
                        if (x[1] <= 365.0) {
                            if (x[2] <= 255.0) {
                                if (x[0] <= 281.5) {
                                    if (x[0] <= 146.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[2] <= 198.5) {
                                            if (x[1] <= 203.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 208.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 277.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 279.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 319.5) {
                                            if (x[0] <= 183.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 331.0) {
                                                    if (x[1] <= 294.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 400.0) {
                                if (x[1] <= 391.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #21
                        if (x[2] <= 315.0) {
                            if (x[1] <= 288.5) {
                                if (x[0] <= 148.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 257.5) {
                                        if (x[1] <= 203.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 198.5) {
                                                if (x[1] <= 208.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 280.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 282.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 275.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 362.0) {
                                if (x[1] <= 346.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #22
                        if (x[2] <= 314.5) {
                            if (x[0] <= 296.0) {
                                if (x[2] <= 279.5) {
                                    if (x[2] <= 177.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[2] <= 196.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 204.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 257.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 270.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 295.5) {
                                        if (x[2] <= 289.5) {
                                            if (x[2] <= 281.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[0] <= 181.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 309.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 176.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[2] <= 319.5) {
                                    if (x[2] <= 317.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 370.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 350.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 202.0) {
                                            if (x[0] <= 193.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 394.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #23
                        if (x[2] <= 307.0) {
                            if (x[0] <= 295.5) {
                                if (x[1] <= 192.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[0] <= 166.5) {
                                        if (x[1] <= 234.5) {
                                            if (x[1] <= 200.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 198.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 199.0) {
                                            if (x[0] <= 186.5) {
                                                if (x[2] <= 255.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 202.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 179.0) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[0] <= 243.5) {
                                    if (x[2] <= 355.0) {
                                        if (x[1] <= 371.0) {
                                            if (x[1] <= 327.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 247.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #24
                        if (x[1] <= 365.0) {
                            if (x[1] <= 286.5) {
                                if (x[1] <= 262.0) {
                                    if (x[1] <= 192.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 203.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 198.5) {
                                                if (x[0] <= 166.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 280.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 207.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 296.0) {
                                    if (x[2] <= 319.5) {
                                        if (x[0] <= 231.0) {
                                            if (x[1] <= 313.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #25
                        if (x[2] <= 314.5) {
                            if (x[1] <= 282.5) {
                                if (x[1] <= 280.5) {
                                    if (x[0] <= 173.0) {
                                        if (x[2] <= 253.0) {
                                            if (x[1] <= 193.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[0] <= 152.5) {
                                                    if (x[1] <= 200.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 274.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[0] <= 186.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 309.5) {
                                            if (x[0] <= 199.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 346.5) {
                                if (x[1] <= 371.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #26
                        if (x[1] <= 365.0) {
                            if (x[1] <= 262.0) {
                                if (x[1] <= 191.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 256.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 238.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 260.5) {
                                    if (x[1] <= 285.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 306.5) {
                                        if (x[2] <= 280.5) {
                                            if (x[1] <= 271.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 326.5) {
                                            if (x[1] <= 295.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[0] <= 215.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 231.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 342.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #27
                        if (x[1] <= 374.0) {
                            if (x[0] <= 296.0) {
                                if (x[2] <= 245.5) {
                                    if (x[0] <= 148.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 152.5) {
                                            if (x[0] <= 150.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 280.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 186.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[0] <= 251.0) {
                                                if (x[1] <= 325.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 368.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #28
                        if (x[0] <= 303.0) {
                            if (x[2] <= 321.0) {
                                if (x[0] <= 173.0) {
                                    if (x[1] <= 237.5) {
                                        if (x[1] <= 191.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 368.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 179.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 368.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #29
                        if (x[2] <= 314.5) {
                            if (x[0] <= 296.5) {
                                if (x[2] <= 255.0) {
                                    if (x[2] <= 178.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 306.5) {
                                        if (x[1] <= 329.0) {
                                            if (x[2] <= 279.5) {
                                                if (x[2] <= 277.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 186.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 336.0) {
                                if (x[0] <= 182.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 354.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #30
                        if (x[2] <= 310.5) {
                            if (x[1] <= 285.0) {
                                if (x[0] <= 155.5) {
                                    if (x[2] <= 178.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 245.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 186.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 291.5) {
                                    if (x[1] <= 298.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 333.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 181.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[0] <= 201.5) {
                                    if (x[1] <= 357.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 362.0) {
                                        if (x[0] <= 231.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 4; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "red";
                            case 1:
                            return "nocolor";
                            case 2:
                            return "blue";
                            case 3:
                            return "orange";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }