#include "nbp.hpp"

void sw_total_step(body* system, float time_step){
    float out_acceleration[2] = {0, 0};
    float out_velocity[2] = {0, 0};
    float out_position[2] = {0, 0};
    for(int i = 0; i < NUM_BODIES; i++){
        step(system[i], system, time_step, out_position, out_velocity, out_acceleration);
        out_acceleration[0] = 0;
        out_acceleration[1] = 0;
        out_velocity[0] = 0;
        out_velocity[1] = 0;
        out_position[0] = 0;
        out_position[1] = 0;
    }
}

int main(void) {
    float in[] = {0, 2, 78, 261, 0, 0, 0, 0, 1, 1, 861, 534, 0, 0, 0, 0, 2, 0, 187, 372, 0, 0, 0, 0, 3, 2, 1120, 0, 0, 0, 0, 0, 4, 2, 411, 579, 0, 0, 0, 0, 5, 0, 788, 444, 0, 0, 0, 0, 6, 2, 1086, 52, 0, 0, 0, 0, 7, 7, 828, 305, 0, 0, 0, 0, 8, 7, 199, 562, 0, 0, 0, 0, 9, 5, 191, 456, 0, 0, 0, 0, 10, 4, 1124, 684, 0, 0, 0, 0, 11, 8, 1149, 292, 0, 0, 0, 0, 12, 0, 929, 164, 0, 0, 0, 0, 13, 4, 730, 319, 0, 0, 0, 0, 14, 5, 406, 481, 0, 0, 0, 0, 15, 9, 626, 282, 0, 0, 0, 0, 16, 1, 690, 595, 0, 0, 0, 0, 17, 6, 616, 566, 0, 0, 0, 0, 18, 5, 543, 439, 0, 0, 0, 0, 19, 2, 1021, 151, 0, 0, 0, 0, 20, 5, 1167, 88, 0, 0, 0, 0, 21, 6, 1273, 570, 0, 0, 0, 0, 22, 3, 1153, 37, 0, 0, 0, 0, 23, 2, 1022, 433, 0, 0, 0, 0, 24, 8, 171, 295, 0, 0, 0, 0, 25, 1, 1042, 258, 0, 0, 0, 0, 26, 9, 163, 671, 0, 0, 0, 0, 27, 7, 570, 183, 0, 0, 0, 0, 28, 5, 150, 637, 0, 0, 0, 0, 29, 7, 326, 339, 0, 0, 0, 0, 30, 0, 455, 237, 0, 0, 0, 0, 31, 1, 1154, 516, 0, 0, 0, 0, 32, 8, 1268, 116, 0, 0, 0, 0, 33, 1, 1052, 3, 0, 0, 0, 0, 34, 1, 1128, 327, 0, 0, 0, 0, 35, 5, 557, 81, 0, 0, 0, 0, 36, 5, 20, 544, 0, 0, 0, 0, 37, 1, 216, 713, 0, 0, 0, 0, 38, 9, 418, 175, 0, 0, 0, 0, 39, 9, 1119, 518, 0, 0, 0, 0, 40, 7, 276, 427, 0, 0, 0, 0, 41, 2, 949, 182, 0, 0, 0, 0, 42, 2, 549, 65, 0, 0, 0, 0, 43, 0, 820, 387, 0, 0, 0, 0, 44, 10, 1021, 584, 0, 0, 0, 0, 45, 1, 1061, 519, 0, 0, 0, 0, 46, 9, 148, 90, 0, 0, 0, 0, 47, 3, 888, 470, 0, 0, 0, 0, 48, 10, 292, 208, 0, 0, 0, 0, 49, 5, 81, 649, 0, 0, 0, 0, 50, 0, 1274, 158, 0, 0, 0, 0, 51, 8, 48, 501, 0, 0, 0, 0, 52, 8, 1145, 401, 0, 0, 0, 0, 53, 3, 1191, 89, 0, 0, 0, 0, 54, 7, 340, 397, 0, 0, 0, 0, 55, 6, 437, 100, 0, 0, 0, 0, 56, 9, 475, 352, 0, 0, 0, 0, 57, 6, 1188, 344, 0, 0, 0, 0, 58, 9, 212, 635, 0, 0, 0, 0, 59, 3, 1084, 49, 0, 0, 0, 0, 60, 7, 1, 655, 0, 0, 0, 0, 61, 1, 407, 522, 0, 0, 0, 0, 62, 9, 413, 632, 0, 0, 0, 0, 63, 4, 102, 553, 0, 0, 0, 0, 64, 6, 479, 654, 0, 0, 0, 0, 65, 0, 834, 71, 0, 0, 0, 0, 66, 4, 1140, 612, 0, 0, 0, 0, 67, 10, 21, 518, 0, 0, 0, 0, 68, 10, 93, 79, 0, 0, 0, 0, 69, 3, 327, 633, 0, 0, 0, 0, 70, 7, 417, 621, 0, 0, 0, 0, 71, 8, 551, 345, 0, 0, 0, 0, 72, 8, 346, 167, 0, 0, 0, 0, 73, 6, 542, 56, 0, 0, 0, 0, 74, 0, 585, 698, 0, 0, 0, 0, 75, 4, 965, 540, 0, 0, 0, 0, 76, 3, 1174, 401, 0, 0, 0, 0, 77, 3, 989, 389, 0, 0, 0, 0, 78, 4, 1051, 155, 0, 0, 0, 0, 79, 10, 1242, 41, 0, 0, 0, 0, 80, 4, 1024, 19, 0, 0, 0, 0, 81, 3, 678, 477, 0, 0, 0, 0, 82, 5, 128, 617, 0, 0, 0, 0, 83, 9, 231, 584, 0, 0, 0, 0, 84, 10, 153, 673, 0, 0, 0, 0, 85, 5, 480, 427, 0, 0, 0, 0, 86, 7, 1247, 402, 0, 0, 0, 0, 87, 5, 1024, 320, 0, 0, 0, 0, 88, 10, 843, 18, 0, 0, 0, 0, 89, 7, 482, 490, 0, 0, 0, 0, 90, 8, 490, 348, 0, 0, 0, 0, 91, 4, 810, 109, 0, 0, 0, 0, 92, 5, 837, 463, 0, 0, 0, 0, 93, 1, 1234, 395, 0, 0, 0, 0, 94, 5, 320, 592, 0, 0, 0, 0, 95, 2, 604, 48, 0, 0, 0, 0, 96, 7, 1144, 505, 0, 0, 0, 0, 97, 7, 481, 486, 0, 0, 0, 0, 98, 1, 1096, 302, 0, 0, 0, 0, 99, 9, 1088, 637, 0, 0, 0, 0, 100, 10, 1172, 411, 0, 0, 0, 0, 101, 4, 4, 689, 0, 0, 0, 0, 102, 0, 1247, 336, 0, 0, 0, 0, 103, 7, 435, 23, 0, 0, 0, 0, 104, 2, 822, 701, 0, 0, 0, 0, 105, 4, 72, 182, 0, 0, 0, 0, 106, 6, 1226, 304, 0, 0, 0, 0, 107, 10, 769, 55, 0, 0, 0, 0, 108, 0, 306, 40, 0, 0, 0, 0, 109, 1, 324, 671, 0, 0, 0, 0, 110, 5, 197, 534, 0, 0, 0, 0, 111, 5, 100, 123, 0, 0, 0, 0, 112, 0, 605, 485, 0, 0, 0, 0, 113, 3, 718, 450, 0, 0, 0, 0, 114, 8, 407, 401, 0, 0, 0, 0, 115, 7, 937, 688, 0, 0, 0, 0, 116, 3, 513, 482, 0, 0, 0, 0, 117, 3, 477, 707, 0, 0, 0, 0, 118, 8, 959, 231, 0, 0, 0, 0, 119, 6, 1082, 124, 0, 0, 0, 0, 120, 8, 707, 467, 0, 0, 0, 0, 121, 9, 928, 690, 0, 0, 0, 0, 122, 0, 606, 708, 0, 0, 0, 0, 123, 9, 754, 41, 0, 0, 0, 0, 124, 7, 892, 669, 0, 0, 0, 0, 125, 0, 1203, 539, 0, 0, 0, 0, 126, 0, 912, 416, 0, 0, 0, 0, 127, 0, 255, 11, 0, 0, 0, 0};
    int time_step = 0;

	/*initialise*/
    int i, err;

    DataType sw_in[N];
    DataType hw_in[N];
    DataType sw_out[N];
    DataType hw_out[N];

    body sw_system[NUM_BODIES];
    body hw_system[NUM_BODIES];
    for(int i = 0; i < N; i++){
        if(i % 8 == 0){
            body new_body;
            new_body.id = (int)in[i];
            new_body.mass = in[i + 1];
            new_body.position[0] = in[i + 2];
            new_body.position[1] = in[i + 3];
            new_body.velocity[0] = in[i + 4];
            new_body.velocity[1] = in[i + 5];
            new_body.acceleration[0] = in[i + 6];
            new_body.acceleration[1] = in[i + 7];
            sw_system[(int)(i/8)] = new_body;

            body _new_body;
            _new_body.id = (int)in[i];
            _new_body.mass = in[i + 1];
            _new_body.position[0] = in[i + 2];
            _new_body.position[1] = in[i + 3];
            _new_body.velocity[0] = in[i + 4];
            _new_body.velocity[1] = in[i + 5];
            _new_body.acceleration[0] = in[i + 6];
            _new_body.acceleration[1] = in[i + 7];
            hw_system[(int)(i/8)] = _new_body;
        }
    }

    /* software */
    sw_total_step(sw_system, time_step * unit_time);
    for(int j = 0; j < NUM_BODIES; j++){
        int i = 8 * j;
        sw_out[i] = sw_system[j].id;
        sw_out[i + 1] = sw_system[j].mass;
        sw_out[i + 2] = sw_system[j].position[0];
        sw_out[i + 3] = sw_system[j].position[1];
        sw_out[i + 4] = sw_system[j].velocity[0];
        sw_out[i + 5] = sw_system[j].velocity[1];
        sw_out[i + 6] = sw_system[j].acceleration[0];
        sw_out[i + 7] = sw_system[j].acceleration[1];
    }
    for(i = 0; i < N; i++){
    	std::cout << sw_out[i] << ", ";
    }
    std::cout<<std::endl;
    std::cout<<"software kernel complete\n"<<std::endl;

    /* hardware */
    total_step(hw_system, time_step * unit_time);
    for(int j = 0; j < NUM_BODIES; j++){
        int i = 8 * j;
        hw_out[i] = hw_system[j].id;
        hw_out[i + 1] = hw_system[j].mass;
        hw_out[i + 2] = hw_system[j].position[0];
        hw_out[i + 3] = hw_system[j].position[1];
        hw_out[i + 4] = hw_system[j].velocity[0];
        hw_out[i + 5] = hw_system[j].velocity[1];
        hw_out[i + 6] = hw_system[j].acceleration[0];
        hw_out[i + 7] = hw_system[j].acceleration[1];
    }
    for(i = 0; i < N; i++){
    	std::cout << hw_out[i] << ", ";
    }
    std::cout<<std::endl;
    std::cout<<"hardware kernel complete\n"<<std::endl;

    /* comparison */
    err = 1;
    std::cout << "signal out:" << std::endl;
    for(i = 0; i < N; i++){
        if(sw_out[i] != hw_out[i]){
            err = 0;
        }
        std::cout << hw_out[i] << " ";
    }
    std::cout<<std::endl;

    if (err == 1) {
        printf("\nTest successful!\r\n");
        return 0;
    }
    printf("\nTest failed\r\n");
    std::cout << std::endl;
    return 1;
}