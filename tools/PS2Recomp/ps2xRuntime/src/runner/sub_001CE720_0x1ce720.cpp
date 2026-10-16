#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE720
// Address: 0x1ce720 - 0x1cebc0
void sub_001CE720_0x1ce720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE720_0x1ce720");
#endif

    switch (ctx->pc) {
        case 0x1ce720u: goto label_1ce720;
        case 0x1ce724u: goto label_1ce724;
        case 0x1ce728u: goto label_1ce728;
        case 0x1ce72cu: goto label_1ce72c;
        case 0x1ce730u: goto label_1ce730;
        case 0x1ce734u: goto label_1ce734;
        case 0x1ce738u: goto label_1ce738;
        case 0x1ce73cu: goto label_1ce73c;
        case 0x1ce740u: goto label_1ce740;
        case 0x1ce744u: goto label_1ce744;
        case 0x1ce748u: goto label_1ce748;
        case 0x1ce74cu: goto label_1ce74c;
        case 0x1ce750u: goto label_1ce750;
        case 0x1ce754u: goto label_1ce754;
        case 0x1ce758u: goto label_1ce758;
        case 0x1ce75cu: goto label_1ce75c;
        case 0x1ce760u: goto label_1ce760;
        case 0x1ce764u: goto label_1ce764;
        case 0x1ce768u: goto label_1ce768;
        case 0x1ce76cu: goto label_1ce76c;
        case 0x1ce770u: goto label_1ce770;
        case 0x1ce774u: goto label_1ce774;
        case 0x1ce778u: goto label_1ce778;
        case 0x1ce77cu: goto label_1ce77c;
        case 0x1ce780u: goto label_1ce780;
        case 0x1ce784u: goto label_1ce784;
        case 0x1ce788u: goto label_1ce788;
        case 0x1ce78cu: goto label_1ce78c;
        case 0x1ce790u: goto label_1ce790;
        case 0x1ce794u: goto label_1ce794;
        case 0x1ce798u: goto label_1ce798;
        case 0x1ce79cu: goto label_1ce79c;
        case 0x1ce7a0u: goto label_1ce7a0;
        case 0x1ce7a4u: goto label_1ce7a4;
        case 0x1ce7a8u: goto label_1ce7a8;
        case 0x1ce7acu: goto label_1ce7ac;
        case 0x1ce7b0u: goto label_1ce7b0;
        case 0x1ce7b4u: goto label_1ce7b4;
        case 0x1ce7b8u: goto label_1ce7b8;
        case 0x1ce7bcu: goto label_1ce7bc;
        case 0x1ce7c0u: goto label_1ce7c0;
        case 0x1ce7c4u: goto label_1ce7c4;
        case 0x1ce7c8u: goto label_1ce7c8;
        case 0x1ce7ccu: goto label_1ce7cc;
        case 0x1ce7d0u: goto label_1ce7d0;
        case 0x1ce7d4u: goto label_1ce7d4;
        case 0x1ce7d8u: goto label_1ce7d8;
        case 0x1ce7dcu: goto label_1ce7dc;
        case 0x1ce7e0u: goto label_1ce7e0;
        case 0x1ce7e4u: goto label_1ce7e4;
        case 0x1ce7e8u: goto label_1ce7e8;
        case 0x1ce7ecu: goto label_1ce7ec;
        case 0x1ce7f0u: goto label_1ce7f0;
        case 0x1ce7f4u: goto label_1ce7f4;
        case 0x1ce7f8u: goto label_1ce7f8;
        case 0x1ce7fcu: goto label_1ce7fc;
        case 0x1ce800u: goto label_1ce800;
        case 0x1ce804u: goto label_1ce804;
        case 0x1ce808u: goto label_1ce808;
        case 0x1ce80cu: goto label_1ce80c;
        case 0x1ce810u: goto label_1ce810;
        case 0x1ce814u: goto label_1ce814;
        case 0x1ce818u: goto label_1ce818;
        case 0x1ce81cu: goto label_1ce81c;
        case 0x1ce820u: goto label_1ce820;
        case 0x1ce824u: goto label_1ce824;
        case 0x1ce828u: goto label_1ce828;
        case 0x1ce82cu: goto label_1ce82c;
        case 0x1ce830u: goto label_1ce830;
        case 0x1ce834u: goto label_1ce834;
        case 0x1ce838u: goto label_1ce838;
        case 0x1ce83cu: goto label_1ce83c;
        case 0x1ce840u: goto label_1ce840;
        case 0x1ce844u: goto label_1ce844;
        case 0x1ce848u: goto label_1ce848;
        case 0x1ce84cu: goto label_1ce84c;
        case 0x1ce850u: goto label_1ce850;
        case 0x1ce854u: goto label_1ce854;
        case 0x1ce858u: goto label_1ce858;
        case 0x1ce85cu: goto label_1ce85c;
        case 0x1ce860u: goto label_1ce860;
        case 0x1ce864u: goto label_1ce864;
        case 0x1ce868u: goto label_1ce868;
        case 0x1ce86cu: goto label_1ce86c;
        case 0x1ce870u: goto label_1ce870;
        case 0x1ce874u: goto label_1ce874;
        case 0x1ce878u: goto label_1ce878;
        case 0x1ce87cu: goto label_1ce87c;
        case 0x1ce880u: goto label_1ce880;
        case 0x1ce884u: goto label_1ce884;
        case 0x1ce888u: goto label_1ce888;
        case 0x1ce88cu: goto label_1ce88c;
        case 0x1ce890u: goto label_1ce890;
        case 0x1ce894u: goto label_1ce894;
        case 0x1ce898u: goto label_1ce898;
        case 0x1ce89cu: goto label_1ce89c;
        case 0x1ce8a0u: goto label_1ce8a0;
        case 0x1ce8a4u: goto label_1ce8a4;
        case 0x1ce8a8u: goto label_1ce8a8;
        case 0x1ce8acu: goto label_1ce8ac;
        case 0x1ce8b0u: goto label_1ce8b0;
        case 0x1ce8b4u: goto label_1ce8b4;
        case 0x1ce8b8u: goto label_1ce8b8;
        case 0x1ce8bcu: goto label_1ce8bc;
        case 0x1ce8c0u: goto label_1ce8c0;
        case 0x1ce8c4u: goto label_1ce8c4;
        case 0x1ce8c8u: goto label_1ce8c8;
        case 0x1ce8ccu: goto label_1ce8cc;
        case 0x1ce8d0u: goto label_1ce8d0;
        case 0x1ce8d4u: goto label_1ce8d4;
        case 0x1ce8d8u: goto label_1ce8d8;
        case 0x1ce8dcu: goto label_1ce8dc;
        case 0x1ce8e0u: goto label_1ce8e0;
        case 0x1ce8e4u: goto label_1ce8e4;
        case 0x1ce8e8u: goto label_1ce8e8;
        case 0x1ce8ecu: goto label_1ce8ec;
        case 0x1ce8f0u: goto label_1ce8f0;
        case 0x1ce8f4u: goto label_1ce8f4;
        case 0x1ce8f8u: goto label_1ce8f8;
        case 0x1ce8fcu: goto label_1ce8fc;
        case 0x1ce900u: goto label_1ce900;
        case 0x1ce904u: goto label_1ce904;
        case 0x1ce908u: goto label_1ce908;
        case 0x1ce90cu: goto label_1ce90c;
        case 0x1ce910u: goto label_1ce910;
        case 0x1ce914u: goto label_1ce914;
        case 0x1ce918u: goto label_1ce918;
        case 0x1ce91cu: goto label_1ce91c;
        case 0x1ce920u: goto label_1ce920;
        case 0x1ce924u: goto label_1ce924;
        case 0x1ce928u: goto label_1ce928;
        case 0x1ce92cu: goto label_1ce92c;
        case 0x1ce930u: goto label_1ce930;
        case 0x1ce934u: goto label_1ce934;
        case 0x1ce938u: goto label_1ce938;
        case 0x1ce93cu: goto label_1ce93c;
        case 0x1ce940u: goto label_1ce940;
        case 0x1ce944u: goto label_1ce944;
        case 0x1ce948u: goto label_1ce948;
        case 0x1ce94cu: goto label_1ce94c;
        case 0x1ce950u: goto label_1ce950;
        case 0x1ce954u: goto label_1ce954;
        case 0x1ce958u: goto label_1ce958;
        case 0x1ce95cu: goto label_1ce95c;
        case 0x1ce960u: goto label_1ce960;
        case 0x1ce964u: goto label_1ce964;
        case 0x1ce968u: goto label_1ce968;
        case 0x1ce96cu: goto label_1ce96c;
        case 0x1ce970u: goto label_1ce970;
        case 0x1ce974u: goto label_1ce974;
        case 0x1ce978u: goto label_1ce978;
        case 0x1ce97cu: goto label_1ce97c;
        case 0x1ce980u: goto label_1ce980;
        case 0x1ce984u: goto label_1ce984;
        case 0x1ce988u: goto label_1ce988;
        case 0x1ce98cu: goto label_1ce98c;
        case 0x1ce990u: goto label_1ce990;
        case 0x1ce994u: goto label_1ce994;
        case 0x1ce998u: goto label_1ce998;
        case 0x1ce99cu: goto label_1ce99c;
        case 0x1ce9a0u: goto label_1ce9a0;
        case 0x1ce9a4u: goto label_1ce9a4;
        case 0x1ce9a8u: goto label_1ce9a8;
        case 0x1ce9acu: goto label_1ce9ac;
        case 0x1ce9b0u: goto label_1ce9b0;
        case 0x1ce9b4u: goto label_1ce9b4;
        case 0x1ce9b8u: goto label_1ce9b8;
        case 0x1ce9bcu: goto label_1ce9bc;
        case 0x1ce9c0u: goto label_1ce9c0;
        case 0x1ce9c4u: goto label_1ce9c4;
        case 0x1ce9c8u: goto label_1ce9c8;
        case 0x1ce9ccu: goto label_1ce9cc;
        case 0x1ce9d0u: goto label_1ce9d0;
        case 0x1ce9d4u: goto label_1ce9d4;
        case 0x1ce9d8u: goto label_1ce9d8;
        case 0x1ce9dcu: goto label_1ce9dc;
        case 0x1ce9e0u: goto label_1ce9e0;
        case 0x1ce9e4u: goto label_1ce9e4;
        case 0x1ce9e8u: goto label_1ce9e8;
        case 0x1ce9ecu: goto label_1ce9ec;
        case 0x1ce9f0u: goto label_1ce9f0;
        case 0x1ce9f4u: goto label_1ce9f4;
        case 0x1ce9f8u: goto label_1ce9f8;
        case 0x1ce9fcu: goto label_1ce9fc;
        case 0x1cea00u: goto label_1cea00;
        case 0x1cea04u: goto label_1cea04;
        case 0x1cea08u: goto label_1cea08;
        case 0x1cea0cu: goto label_1cea0c;
        case 0x1cea10u: goto label_1cea10;
        case 0x1cea14u: goto label_1cea14;
        case 0x1cea18u: goto label_1cea18;
        case 0x1cea1cu: goto label_1cea1c;
        case 0x1cea20u: goto label_1cea20;
        case 0x1cea24u: goto label_1cea24;
        case 0x1cea28u: goto label_1cea28;
        case 0x1cea2cu: goto label_1cea2c;
        case 0x1cea30u: goto label_1cea30;
        case 0x1cea34u: goto label_1cea34;
        case 0x1cea38u: goto label_1cea38;
        case 0x1cea3cu: goto label_1cea3c;
        case 0x1cea40u: goto label_1cea40;
        case 0x1cea44u: goto label_1cea44;
        case 0x1cea48u: goto label_1cea48;
        case 0x1cea4cu: goto label_1cea4c;
        case 0x1cea50u: goto label_1cea50;
        case 0x1cea54u: goto label_1cea54;
        case 0x1cea58u: goto label_1cea58;
        case 0x1cea5cu: goto label_1cea5c;
        case 0x1cea60u: goto label_1cea60;
        case 0x1cea64u: goto label_1cea64;
        case 0x1cea68u: goto label_1cea68;
        case 0x1cea6cu: goto label_1cea6c;
        case 0x1cea70u: goto label_1cea70;
        case 0x1cea74u: goto label_1cea74;
        case 0x1cea78u: goto label_1cea78;
        case 0x1cea7cu: goto label_1cea7c;
        case 0x1cea80u: goto label_1cea80;
        case 0x1cea84u: goto label_1cea84;
        case 0x1cea88u: goto label_1cea88;
        case 0x1cea8cu: goto label_1cea8c;
        case 0x1cea90u: goto label_1cea90;
        case 0x1cea94u: goto label_1cea94;
        case 0x1cea98u: goto label_1cea98;
        case 0x1cea9cu: goto label_1cea9c;
        case 0x1ceaa0u: goto label_1ceaa0;
        case 0x1ceaa4u: goto label_1ceaa4;
        case 0x1ceaa8u: goto label_1ceaa8;
        case 0x1ceaacu: goto label_1ceaac;
        case 0x1ceab0u: goto label_1ceab0;
        case 0x1ceab4u: goto label_1ceab4;
        case 0x1ceab8u: goto label_1ceab8;
        case 0x1ceabcu: goto label_1ceabc;
        case 0x1ceac0u: goto label_1ceac0;
        case 0x1ceac4u: goto label_1ceac4;
        case 0x1ceac8u: goto label_1ceac8;
        case 0x1ceaccu: goto label_1ceacc;
        case 0x1cead0u: goto label_1cead0;
        case 0x1cead4u: goto label_1cead4;
        case 0x1cead8u: goto label_1cead8;
        case 0x1ceadcu: goto label_1ceadc;
        case 0x1ceae0u: goto label_1ceae0;
        case 0x1ceae4u: goto label_1ceae4;
        case 0x1ceae8u: goto label_1ceae8;
        case 0x1ceaecu: goto label_1ceaec;
        case 0x1ceaf0u: goto label_1ceaf0;
        case 0x1ceaf4u: goto label_1ceaf4;
        case 0x1ceaf8u: goto label_1ceaf8;
        case 0x1ceafcu: goto label_1ceafc;
        case 0x1ceb00u: goto label_1ceb00;
        case 0x1ceb04u: goto label_1ceb04;
        case 0x1ceb08u: goto label_1ceb08;
        case 0x1ceb0cu: goto label_1ceb0c;
        case 0x1ceb10u: goto label_1ceb10;
        case 0x1ceb14u: goto label_1ceb14;
        case 0x1ceb18u: goto label_1ceb18;
        case 0x1ceb1cu: goto label_1ceb1c;
        case 0x1ceb20u: goto label_1ceb20;
        case 0x1ceb24u: goto label_1ceb24;
        case 0x1ceb28u: goto label_1ceb28;
        case 0x1ceb2cu: goto label_1ceb2c;
        case 0x1ceb30u: goto label_1ceb30;
        case 0x1ceb34u: goto label_1ceb34;
        case 0x1ceb38u: goto label_1ceb38;
        case 0x1ceb3cu: goto label_1ceb3c;
        case 0x1ceb40u: goto label_1ceb40;
        case 0x1ceb44u: goto label_1ceb44;
        case 0x1ceb48u: goto label_1ceb48;
        case 0x1ceb4cu: goto label_1ceb4c;
        case 0x1ceb50u: goto label_1ceb50;
        case 0x1ceb54u: goto label_1ceb54;
        case 0x1ceb58u: goto label_1ceb58;
        case 0x1ceb5cu: goto label_1ceb5c;
        case 0x1ceb60u: goto label_1ceb60;
        case 0x1ceb64u: goto label_1ceb64;
        case 0x1ceb68u: goto label_1ceb68;
        case 0x1ceb6cu: goto label_1ceb6c;
        case 0x1ceb70u: goto label_1ceb70;
        case 0x1ceb74u: goto label_1ceb74;
        case 0x1ceb78u: goto label_1ceb78;
        case 0x1ceb7cu: goto label_1ceb7c;
        case 0x1ceb80u: goto label_1ceb80;
        case 0x1ceb84u: goto label_1ceb84;
        case 0x1ceb88u: goto label_1ceb88;
        case 0x1ceb8cu: goto label_1ceb8c;
        case 0x1ceb90u: goto label_1ceb90;
        case 0x1ceb94u: goto label_1ceb94;
        case 0x1ceb98u: goto label_1ceb98;
        case 0x1ceb9cu: goto label_1ceb9c;
        case 0x1ceba0u: goto label_1ceba0;
        case 0x1ceba4u: goto label_1ceba4;
        case 0x1ceba8u: goto label_1ceba8;
        case 0x1cebacu: goto label_1cebac;
        case 0x1cebb0u: goto label_1cebb0;
        case 0x1cebb4u: goto label_1cebb4;
        case 0x1cebb8u: goto label_1cebb8;
        case 0x1cebbcu: goto label_1cebbc;
        default: break;
    }

    ctx->pc = 0x1ce720u;

label_1ce720:
    // 0x1ce720: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1ce720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1ce724:
    // 0x1ce724: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1ce724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1ce728:
    // 0x1ce728: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1ce728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1ce72c:
    // 0x1ce72c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ce730:
    // 0x1ce730: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ce730u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1ce734:
    // 0x1ce734: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1ce734u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ce738:
    // 0x1ce738: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1ce738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1ce73c:
    // 0x1ce73c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1ce73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1ce740:
    // 0x1ce740: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1ce740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1ce744:
    // 0x1ce744: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1ce744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1ce748:
    // 0x1ce748: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1ce748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1ce74c:
    // 0x1ce74c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1ce74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1ce750:
    // 0x1ce750: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1ce750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1ce754:
    // 0x1ce754: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ce754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ce758:
    // 0x1ce758: 0x8e220268  lw          $v0, 0x268($s1)
    ctx->pc = 0x1ce758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
label_1ce75c:
    // 0x1ce75c: 0x1440010b  bnez        $v0, . + 4 + (0x10B << 2)
label_1ce760:
    if (ctx->pc == 0x1CE760u) {
        ctx->pc = 0x1CE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE75Cu;
        // 0x1ce760: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE764u;
        goto label_1ce764;
    }
    ctx->pc = 0x1CE75Cu;
    {
        const bool branch_taken_0x1ce75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE75Cu;
        // 0x1ce760: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce75c) {
            ctx->pc = 0x1CEB8Cu;
            goto label_1ceb8c;
        }
    }
    ctx->pc = 0x1CE764u;
label_1ce764:
    // 0x1ce764: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ce764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ce768:
    // 0x1ce768: 0x57c20005  bnel        $fp, $v0, . + 4 + (0x5 << 2)
label_1ce76c:
    if (ctx->pc == 0x1CE76Cu) {
        ctx->pc = 0x1CE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE768u;
        // 0x1ce76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE770u;
        goto label_1ce770;
    }
    ctx->pc = 0x1CE768u;
    {
        const bool branch_taken_0x1ce768 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ce768) {
            ctx->pc = 0x1CE76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE768u;
            // 0x1ce76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE780u;
            goto label_1ce780;
        }
    }
    ctx->pc = 0x1CE770u;
label_1ce770:
    // 0x1ce770: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x1ce770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_1ce774:
    // 0x1ce774: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
label_1ce778:
    if (ctx->pc == 0x1CE778u) {
        ctx->pc = 0x1CE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE774u;
        // 0x1ce778: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE77Cu;
        goto label_1ce77c;
    }
    ctx->pc = 0x1CE774u;
    {
        const bool branch_taken_0x1ce774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE774u;
        // 0x1ce778: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce774) {
            ctx->pc = 0x1CEAC0u;
            goto label_1ceac0;
        }
    }
    ctx->pc = 0x1CE77Cu;
label_1ce77c:
    // 0x1ce77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ce780:
    // 0x1ce780: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1ce780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ce784:
    // 0x1ce784: 0xc06ba6c  jal         func_1AE9B0
label_1ce788:
    if (ctx->pc == 0x1CE788u) {
        ctx->pc = 0x1CE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE784u;
        // 0x1ce788: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE78Cu;
        goto label_1ce78c;
    }
    ctx->pc = 0x1CE784u;
    SET_GPR_U32(ctx, 31, 0x1CE78Cu);
    ctx->pc = 0x1CE788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE784u;
    // 0x1ce788: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1CE784u, 0x1CE78Cu)) {
        return;
    }
    ctx->pc = 0x1CE78Cu;
label_1ce78c:
    // 0x1ce78c: 0x17c000c7  bnez        $fp, . + 4 + (0xC7 << 2)
label_1ce790:
    if (ctx->pc == 0x1CE790u) {
        ctx->pc = 0x1CE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE78Cu;
        // 0x1ce790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE794u;
        goto label_1ce794;
    }
    ctx->pc = 0x1CE78Cu;
    {
        const bool branch_taken_0x1ce78c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE78Cu;
        // 0x1ce790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce78c) {
            ctx->pc = 0x1CEAACu;
            goto label_1ceaac;
        }
    }
    ctx->pc = 0x1CE794u;
label_1ce794:
    // 0x1ce794: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_1ce798:
    // 0x1ce798: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_1ce79c:
    if (ctx->pc == 0x1CE79Cu) {
        ctx->pc = 0x1CE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE798u;
        // 0x1ce79c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE7A0u;
        goto label_1ce7a0;
    }
    ctx->pc = 0x1CE798u;
    {
        const bool branch_taken_0x1ce798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE798u;
        // 0x1ce79c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce798) {
            ctx->pc = 0x1CE900u;
            goto label_1ce900;
        }
    }
    ctx->pc = 0x1CE7A0u;
label_1ce7a0:
    // 0x1ce7a0: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x1ce7a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1ce7a4:
    // 0x1ce7a4: 0x24570498  addiu       $s7, $v0, 0x498
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1176));
label_1ce7a8:
    // 0x1ce7a8: 0x27b40008  addiu       $s4, $sp, 0x8
    ctx->pc = 0x1ce7a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1ce7ac:
    // 0x1ce7ac: 0x27b3000c  addiu       $s3, $sp, 0xC
    ctx->pc = 0x1ce7acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1ce7b0:
    // 0x1ce7b0: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1ce7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ce7b4:
    // 0x1ce7b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ce7b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce7b8:
    // 0x1ce7b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ce7bc:
    // 0x1ce7bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce7c0:
    // 0x1ce7c0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1ce7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ce7c4:
    // 0x1ce7c4: 0xc0c493d  jal         func_3124F4
label_1ce7c8:
    if (ctx->pc == 0x1CE7C8u) {
        ctx->pc = 0x1CE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7C4u;
        // 0x1ce7c8: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE7CCu;
        goto label_1ce7cc;
    }
    ctx->pc = 0x1CE7C4u;
    SET_GPR_U32(ctx, 31, 0x1CE7CCu);
    ctx->pc = 0x1CE7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE7C4u;
    // 0x1ce7c8: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CE7C4u, 0x1CE7CCu)) {
        return;
    }
    ctx->pc = 0x1CE7CCu;
label_1ce7cc:
    // 0x1ce7cc: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1ce7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ce7d0:
    // 0x1ce7d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ce7d4:
    // 0x1ce7d4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1ce7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce7d8:
    // 0x1ce7d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ce7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ce7dc:
    // 0x1ce7dc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1ce7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce7e0:
    // 0x1ce7e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ce7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ce7e4:
    // 0x1ce7e4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1ce7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce7e8:
    // 0x1ce7e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ce7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ce7ec:
    // 0x1ce7ec: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1ce7ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ce7f0:
    // 0x1ce7f0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1ce7f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ce7f4:
    // 0x1ce7f4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ce7f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ce7f8:
    // 0x1ce7f8: 0xc06cda0  jal         func_1B3680
label_1ce7fc:
    if (ctx->pc == 0x1CE7FCu) {
        ctx->pc = 0x1CE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7F8u;
        // 0x1ce7fc: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE800u;
        goto label_1ce800;
    }
    ctx->pc = 0x1CE7F8u;
    SET_GPR_U32(ctx, 31, 0x1CE800u);
    ctx->pc = 0x1CE7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE7F8u;
    // 0x1ce7fc: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1CE7F8u, 0x1CE800u)) {
        return;
    }
    ctx->pc = 0x1CE800u;
label_1ce800:
    // 0x1ce800: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1ce800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1ce804:
    // 0x1ce804: 0xc06dc32  jal         func_1B70C8
label_1ce808:
    if (ctx->pc == 0x1CE808u) {
        ctx->pc = 0x1CE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE804u;
        // 0x1ce808: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE80Cu;
        goto label_1ce80c;
    }
    ctx->pc = 0x1CE804u;
    SET_GPR_U32(ctx, 31, 0x1CE80Cu);
    ctx->pc = 0x1CE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE804u;
    // 0x1ce808: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1CE804u, 0x1CE80Cu)) {
        return;
    }
    ctx->pc = 0x1CE80Cu;
label_1ce80c:
    // 0x1ce80c: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
label_1ce810:
    if (ctx->pc == 0x1CE810u) {
        ctx->pc = 0x1CE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE80Cu;
        // 0x1ce810: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE814u;
        goto label_1ce814;
    }
    ctx->pc = 0x1CE80Cu;
    {
        const bool branch_taken_0x1ce80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE80Cu;
        // 0x1ce810: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce80c) {
            ctx->pc = 0x1CEAECu;
            goto label_1ceaec;
        }
    }
    ctx->pc = 0x1CE814u;
label_1ce814:
    // 0x1ce814: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x1ce814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1ce818:
    // 0x1ce818: 0x246304e8  addiu       $v1, $v1, 0x4E8
    ctx->pc = 0x1ce818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1256));
label_1ce81c:
    // 0x1ce81c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1ce81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ce820:
    // 0x1ce820: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1ce824:
    if (ctx->pc == 0x1CE824u) {
        ctx->pc = 0x1CE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE820u;
        // 0x1ce824: 0x26560014  addiu       $s6, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE828u;
        goto label_1ce828;
    }
    ctx->pc = 0x1CE820u;
    {
        const bool branch_taken_0x1ce820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE820u;
        // 0x1ce824: 0x26560014  addiu       $s6, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce820) {
            ctx->pc = 0x1CE7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce7b8;
        }
    }
    ctx->pc = 0x1CE828u;
label_1ce828:
    // 0x1ce828: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ce828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ce82c:
    // 0x1ce82c: 0x2630026c  addiu       $s0, $s1, 0x26C
    ctx->pc = 0x1ce82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 620));
label_1ce830:
    // 0x1ce830: 0x244204f8  addiu       $v0, $v0, 0x4F8
    ctx->pc = 0x1ce830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1272));
label_1ce834:
    // 0x1ce834: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ce834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce838:
    // 0x1ce838: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ce838u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce83c:
    // 0x1ce83c: 0x24530008  addiu       $s3, $v0, 0x8
    ctx->pc = 0x1ce83cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1ce840:
    // 0x1ce840: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1ce840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce844:
    // 0x1ce844: 0x0  nop
    ctx->pc = 0x1ce844u;
    // NOP
label_1ce848:
    // 0x1ce848: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ce84c:
    // 0x1ce84c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce850:
    // 0x1ce850: 0xc0c493d  jal         func_3124F4
label_1ce854:
    if (ctx->pc == 0x1CE854u) {
        ctx->pc = 0x1CE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE850u;
        // 0x1ce854: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE858u;
        goto label_1ce858;
    }
    ctx->pc = 0x1CE850u;
    SET_GPR_U32(ctx, 31, 0x1CE858u);
    ctx->pc = 0x1CE854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE850u;
    // 0x1ce854: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CE850u, 0x1CE858u)) {
        return;
    }
    ctx->pc = 0x1CE858u;
label_1ce858:
    // 0x1ce858: 0x6aa40007  ldl         $a0, 0x7($s5)
    ctx->pc = 0x1ce858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1ce85c:
    // 0x1ce85c: 0x6ea40000  ldr         $a0, 0x0($s5)
    ctx->pc = 0x1ce85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1ce860:
    // 0x1ce860: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1ce860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ce864:
    // 0x1ce864: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1ce864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ce868:
    // 0x1ce868: 0x9fa40024  lwu         $a0, 0x24($sp)
    ctx->pc = 0x1ce868u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1ce86c:
    // 0x1ce86c: 0x9fa20020  lwu         $v0, 0x20($sp)
    ctx->pc = 0x1ce86cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce870:
    // 0x1ce870: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ce870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1ce874:
    // 0x1ce874: 0xc06cdf0  jal         func_1B37C0
label_1ce878:
    if (ctx->pc == 0x1CE878u) {
        ctx->pc = 0x1CE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE874u;
        // 0x1ce878: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE87Cu;
        goto label_1ce87c;
    }
    ctx->pc = 0x1CE874u;
    SET_GPR_U32(ctx, 31, 0x1CE87Cu);
    ctx->pc = 0x1CE878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE874u;
    // 0x1ce878: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B37C0u, 0x1CE874u, 0x1CE87Cu)) {
        return;
    }
    ctx->pc = 0x1CE87Cu;
label_1ce87c:
    // 0x1ce87c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ce87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ce880:
    // 0x1ce880: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ce880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1ce884:
    // 0x1ce884: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ce884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1ce888:
    // 0x1ce888: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ce888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1ce88c:
    // 0x1ce88c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ce88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1ce890:
    // 0x1ce890: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1ce890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1ce894:
    // 0x1ce894: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ce894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce898:
    // 0x1ce898: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ce898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce89c:
    // 0x1ce89c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1ce89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce8a0:
    // 0x1ce8a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ce8a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ce8a4:
    // 0x1ce8a4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1ce8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ce8a8:
    // 0x1ce8a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ce8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce8ac:
    // 0x1ce8ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1ce8acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1ce8b0:
    // 0x1ce8b0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ce8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ce8b4:
    // 0x1ce8b4: 0xc093ab4  jal         func_24EAD0
label_1ce8b8:
    if (ctx->pc == 0x1CE8B8u) {
        ctx->pc = 0x1CE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8B4u;
        // 0x1ce8b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE8BCu;
        goto label_1ce8bc;
    }
    ctx->pc = 0x1CE8B4u;
    SET_GPR_U32(ctx, 31, 0x1CE8BCu);
    ctx->pc = 0x1CE8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE8B4u;
    // 0x1ce8b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAD0u, 0x1CE8B4u, 0x1CE8BCu)) {
        return;
    }
    ctx->pc = 0x1CE8BCu;
label_1ce8bc:
    // 0x1ce8bc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1ce8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce8c0:
    // 0x1ce8c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ce8c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce8c4:
    // 0x1ce8c4: 0x0  nop
    ctx->pc = 0x1ce8c4u;
    // NOP
label_1ce8c8:
    // 0x1ce8c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1ce8cc:
    if (ctx->pc == 0x1CE8CCu) {
        ctx->pc = 0x1CE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8C8u;
        // 0x1ce8cc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE8D0u;
        goto label_1ce8d0;
    }
    ctx->pc = 0x1CE8C8u;
    {
        const bool branch_taken_0x1ce8c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8C8u;
        // 0x1ce8cc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8c8) {
            ctx->pc = 0x1CE8E0u;
            goto label_1ce8e0;
        }
    }
    ctx->pc = 0x1CE8D0u;
label_1ce8d0:
    // 0x1ce8d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ce8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce8d4:
    // 0x1ce8d4: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1ce8d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ce8d8:
    // 0x1ce8d8: 0x54520091  bnel        $v0, $s2, . + 4 + (0x91 << 2)
label_1ce8dc:
    if (ctx->pc == 0x1CE8DCu) {
        ctx->pc = 0x1CE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8D8u;
        // 0x1ce8dc: 0xae220284  sw          $v0, 0x284($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE8E0u;
        goto label_1ce8e0;
    }
    ctx->pc = 0x1CE8D8u;
    {
        const bool branch_taken_0x1ce8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1ce8d8) {
            ctx->pc = 0x1CE8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE8D8u;
            // 0x1ce8dc: 0xae220284  sw          $v0, 0x284($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEB20u;
            goto label_1ceb20;
        }
    }
    ctx->pc = 0x1CE8E0u;
label_1ce8e0:
    // 0x1ce8e0: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x1ce8e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1ce8e4:
    // 0x1ce8e4: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x1ce8e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_1ce8e8:
    // 0x1ce8e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ce8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ce8ec:
    // 0x1ce8ec: 0x2ac20005  slti        $v0, $s6, 0x5
    ctx->pc = 0x1ce8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
label_1ce8f0:
    // 0x1ce8f0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1ce8f4:
    if (ctx->pc == 0x1CE8F4u) {
        ctx->pc = 0x1CE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8F0u;
        // 0x1ce8f4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE8F8u;
        goto label_1ce8f8;
    }
    ctx->pc = 0x1CE8F0u;
    {
        const bool branch_taken_0x1ce8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8F0u;
        // 0x1ce8f4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8f0) {
            ctx->pc = 0x1CE848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce848;
        }
    }
    ctx->pc = 0x1CE8F8u;
label_1ce8f8:
    // 0x1ce8f8: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1ce8fc:
    if (ctx->pc == 0x1CE8FCu) {
        ctx->pc = 0x1CE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8F8u;
        // 0x1ce8fc: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE900u;
        goto label_1ce900;
    }
    ctx->pc = 0x1CE8F8u;
    {
        const bool branch_taken_0x1ce8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8F8u;
        // 0x1ce8fc: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8f8) {
            ctx->pc = 0x1CEB7Cu;
            goto label_1ceb7c;
        }
    }
    ctx->pc = 0x1CE900u;
label_1ce900:
    // 0x1ce900: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x1ce900u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1ce904:
    // 0x1ce904: 0x24500498  addiu       $s0, $v0, 0x498
    ctx->pc = 0x1ce904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1176));
label_1ce908:
    // 0x1ce908: 0x27b40008  addiu       $s4, $sp, 0x8
    ctx->pc = 0x1ce908u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1ce90c:
    // 0x1ce90c: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x1ce90cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1ce910:
    // 0x1ce910: 0x27b3000c  addiu       $s3, $sp, 0xC
    ctx->pc = 0x1ce910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1ce914:
    // 0x1ce914: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ce918:
    // 0x1ce918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce91c:
    // 0x1ce91c: 0xc0c493d  jal         func_3124F4
label_1ce920:
    if (ctx->pc == 0x1CE920u) {
        ctx->pc = 0x1CE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE91Cu;
        // 0x1ce920: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE924u;
        goto label_1ce924;
    }
    ctx->pc = 0x1CE91Cu;
    SET_GPR_U32(ctx, 31, 0x1CE924u);
    ctx->pc = 0x1CE920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE91Cu;
    // 0x1ce920: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CE91Cu, 0x1CE924u)) {
        return;
    }
    ctx->pc = 0x1CE924u;
label_1ce924:
    // 0x1ce924: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1ce924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ce928:
    // 0x1ce928: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ce92c:
    // 0x1ce92c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1ce92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce930:
    // 0x1ce930: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ce930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ce934:
    // 0x1ce934: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1ce934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce938:
    // 0x1ce938: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ce938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ce93c:
    // 0x1ce93c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1ce93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce940:
    // 0x1ce940: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ce940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ce944:
    // 0x1ce944: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1ce944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ce948:
    // 0x1ce948: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1ce948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ce94c:
    // 0x1ce94c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ce94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ce950:
    // 0x1ce950: 0xc06cda0  jal         func_1B3680
label_1ce954:
    if (ctx->pc == 0x1CE954u) {
        ctx->pc = 0x1CE954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE950u;
        // 0x1ce954: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE958u;
        goto label_1ce958;
    }
    ctx->pc = 0x1CE950u;
    SET_GPR_U32(ctx, 31, 0x1CE958u);
    ctx->pc = 0x1CE954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE950u;
    // 0x1ce954: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1CE950u, 0x1CE958u)) {
        return;
    }
    ctx->pc = 0x1CE958u;
label_1ce958:
    // 0x1ce958: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1ce958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1ce95c:
    // 0x1ce95c: 0xc06dc32  jal         func_1B70C8
label_1ce960:
    if (ctx->pc == 0x1CE960u) {
        ctx->pc = 0x1CE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE95Cu;
        // 0x1ce960: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE964u;
        goto label_1ce964;
    }
    ctx->pc = 0x1CE95Cu;
    SET_GPR_U32(ctx, 31, 0x1CE964u);
    ctx->pc = 0x1CE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE95Cu;
    // 0x1ce960: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1CE95Cu, 0x1CE964u)) {
        return;
    }
    ctx->pc = 0x1CE964u;
label_1ce964:
    // 0x1ce964: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1ce968:
    if (ctx->pc == 0x1CE968u) {
        ctx->pc = 0x1CE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE964u;
        // 0x1ce968: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE96Cu;
        goto label_1ce96c;
    }
    ctx->pc = 0x1CE964u;
    {
        const bool branch_taken_0x1ce964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce964) {
            ctx->pc = 0x1CE968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE964u;
            // 0x1ce968: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE97Cu;
            goto label_1ce97c;
        }
    }
    ctx->pc = 0x1CE96Cu;
label_1ce96c:
    // 0x1ce96c: 0x8e230284  lw          $v1, 0x284($s1)
    ctx->pc = 0x1ce96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_1ce970:
    // 0x1ce970: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ce970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ce974:
    // 0x1ce974: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
label_1ce978:
    if (ctx->pc == 0x1CE978u) {
        ctx->pc = 0x1CE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE974u;
        // 0x1ce978: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE97Cu;
        goto label_1ce97c;
    }
    ctx->pc = 0x1CE974u;
    {
        const bool branch_taken_0x1ce974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE974u;
        // 0x1ce978: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce974) {
            ctx->pc = 0x1CEB4Cu;
            goto label_1ceb4c;
        }
    }
    ctx->pc = 0x1CE97Cu;
label_1ce97c:
    // 0x1ce97c: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1ce97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1ce980:
    // 0x1ce980: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
label_1ce984:
    if (ctx->pc == 0x1CE984u) {
        ctx->pc = 0x1CE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE980u;
        // 0x1ce984: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE988u;
        goto label_1ce988;
    }
    ctx->pc = 0x1CE980u;
    {
        const bool branch_taken_0x1ce980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce980) {
            ctx->pc = 0x1CE984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE980u;
            // 0x1ce984: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce918;
        }
    }
    ctx->pc = 0x1CE988u;
label_1ce988:
    // 0x1ce988: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ce988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ce98c:
    // 0x1ce98c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ce98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce990:
    // 0x1ce990: 0x244204f8  addiu       $v0, $v0, 0x4F8
    ctx->pc = 0x1ce990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1272));
label_1ce994:
    // 0x1ce994: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ce994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce998:
    // 0x1ce998: 0x24520008  addiu       $s2, $v0, 0x8
    ctx->pc = 0x1ce998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1ce99c:
    // 0x1ce99c: 0x0  nop
    ctx->pc = 0x1ce99cu;
    // NOP
label_1ce9a0:
    // 0x1ce9a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ce9a4:
    // 0x1ce9a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce9a8:
    // 0x1ce9a8: 0xc0c493d  jal         func_3124F4
label_1ce9ac:
    if (ctx->pc == 0x1CE9ACu) {
        ctx->pc = 0x1CE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9A8u;
        // 0x1ce9ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE9B0u;
        goto label_1ce9b0;
    }
    ctx->pc = 0x1CE9A8u;
    SET_GPR_U32(ctx, 31, 0x1CE9B0u);
    ctx->pc = 0x1CE9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9A8u;
    // 0x1ce9ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CE9A8u, 0x1CE9B0u)) {
        return;
    }
    ctx->pc = 0x1CE9B0u;
label_1ce9b0:
    // 0x1ce9b0: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x1ce9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1ce9b4:
    // 0x1ce9b4: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x1ce9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1ce9b8:
    // 0x1ce9b8: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x1ce9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ce9bc:
    // 0x1ce9bc: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x1ce9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ce9c0:
    // 0x1ce9c0: 0x9fa40034  lwu         $a0, 0x34($sp)
    ctx->pc = 0x1ce9c0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1ce9c4:
    // 0x1ce9c4: 0x9fa20030  lwu         $v0, 0x30($sp)
    ctx->pc = 0x1ce9c4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1ce9c8:
    // 0x1ce9c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ce9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1ce9cc:
    // 0x1ce9cc: 0xc06cdf0  jal         func_1B37C0
label_1ce9d0:
    if (ctx->pc == 0x1CE9D0u) {
        ctx->pc = 0x1CE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9CCu;
        // 0x1ce9d0: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE9D4u;
        goto label_1ce9d4;
    }
    ctx->pc = 0x1CE9CCu;
    SET_GPR_U32(ctx, 31, 0x1CE9D4u);
    ctx->pc = 0x1CE9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9CCu;
    // 0x1ce9d0: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B37C0u, 0x1CE9CCu, 0x1CE9D4u)) {
        return;
    }
    ctx->pc = 0x1CE9D4u;
label_1ce9d4:
    // 0x1ce9d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ce9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ce9d8:
    // 0x1ce9d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ce9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1ce9dc:
    // 0x1ce9dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ce9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1ce9e0:
    // 0x1ce9e0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ce9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1ce9e4:
    // 0x1ce9e4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ce9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1ce9e8:
    // 0x1ce9e8: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1ce9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1ce9ec:
    // 0x1ce9ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ce9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce9f0:
    // 0x1ce9f0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ce9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce9f4:
    // 0x1ce9f4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1ce9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce9f8:
    // 0x1ce9f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ce9f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ce9fc:
    // 0x1ce9fc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1ce9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cea00:
    // 0x1cea00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cea04:
    // 0x1cea04: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1cea04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1cea08:
    // 0x1cea08: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1cea08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1cea0c:
    // 0x1cea0c: 0xc093ab4  jal         func_24EAD0
label_1cea10:
    if (ctx->pc == 0x1CEA10u) {
        ctx->pc = 0x1CEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA0Cu;
        // 0x1cea10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA14u;
        goto label_1cea14;
    }
    ctx->pc = 0x1CEA0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA14u);
    ctx->pc = 0x1CEA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA0Cu;
    // 0x1cea10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAD0u, 0x1CEA0Cu, 0x1CEA14u)) {
        return;
    }
    ctx->pc = 0x1CEA14u;
label_1cea14:
    // 0x1cea14: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1cea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cea18:
    // 0x1cea18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cea18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cea1c:
    // 0x1cea1c: 0x0  nop
    ctx->pc = 0x1cea1cu;
    // NOP
label_1cea20:
    // 0x1cea20: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
label_1cea24:
    if (ctx->pc == 0x1CEA24u) {
        ctx->pc = 0x1CEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA20u;
        // 0x1cea24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA28u;
        goto label_1cea28;
    }
    ctx->pc = 0x1CEA20u;
    {
        const bool branch_taken_0x1cea20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cea20) {
            ctx->pc = 0x1CEA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEA20u;
            // 0x1cea24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEA94u;
            goto label_1cea94;
        }
    }
    ctx->pc = 0x1CEA28u;
label_1cea28:
    // 0x1cea28: 0x8e250284  lw          $a1, 0x284($s1)
    ctx->pc = 0x1cea28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_1cea2c:
    // 0x1cea2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cea30:
    // 0x1cea30: 0xc073b60  jal         func_1CED80
label_1cea34:
    if (ctx->pc == 0x1CEA34u) {
        ctx->pc = 0x1CEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA30u;
        // 0x1cea34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA38u;
        goto label_1cea38;
    }
    ctx->pc = 0x1CEA30u;
    SET_GPR_U32(ctx, 31, 0x1CEA38u);
    ctx->pc = 0x1CEA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA30u;
    // 0x1cea34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CED80u, 0x1CEA30u, 0x1CEA38u)) {
        return;
    }
    ctx->pc = 0x1CEA38u;
label_1cea38:
    // 0x1cea38: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1cea3c:
    if (ctx->pc == 0x1CEA3Cu) {
        ctx->pc = 0x1CEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA38u;
        // 0x1cea3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA40u;
        goto label_1cea40;
    }
    ctx->pc = 0x1CEA38u;
    {
        const bool branch_taken_0x1cea38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA38u;
        // 0x1cea3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea38) {
            ctx->pc = 0x1CEA78u;
            goto label_1cea78;
        }
    }
    ctx->pc = 0x1CEA40u;
label_1cea40:
    // 0x1cea40: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1cea40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cea44:
    // 0x1cea44: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cea48:
    // 0x1cea48: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cea48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cea4c:
    // 0x1cea4c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cea50:
    // 0x1cea50: 0x60f809  jalr        $v1
label_1cea54:
    if (ctx->pc == 0x1CEA54u) {
        ctx->pc = 0x1CEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA50u;
        // 0x1cea54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA58u;
        goto label_1cea58;
    }
    ctx->pc = 0x1CEA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CEA58u);
        ctx->pc = 0x1CEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA50u;
        // 0x1cea54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA50u, 0x1CEA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEA58u;
label_1cea58:
    // 0x1cea58: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cea5c:
    // 0x1cea5c: 0xae200280  sw          $zero, 0x280($s1)
    ctx->pc = 0x1cea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
label_1cea60:
    // 0x1cea60: 0xae220284  sw          $v0, 0x284($s1)
    ctx->pc = 0x1cea60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
label_1cea64:
    // 0x1cea64: 0xc073b8a  jal         func_1CEE28
label_1cea68:
    if (ctx->pc == 0x1CEA68u) {
        ctx->pc = 0x1CEA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA64u;
        // 0x1cea68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA6Cu;
        goto label_1cea6c;
    }
    ctx->pc = 0x1CEA64u;
    SET_GPR_U32(ctx, 31, 0x1CEA6Cu);
    ctx->pc = 0x1CEA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA64u;
    // 0x1cea68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CEE28u, 0x1CEA64u, 0x1CEA6Cu)) {
        return;
    }
    ctx->pc = 0x1CEA6Cu;
label_1cea6c:
    // 0x1cea6c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cea70:
    if (ctx->pc == 0x1CEA70u) {
        ctx->pc = 0x1CEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA6Cu;
        // 0x1cea70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA74u;
        goto label_1cea74;
    }
    ctx->pc = 0x1CEA6Cu;
    {
        const bool branch_taken_0x1cea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA6Cu;
        // 0x1cea70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea6c) {
            ctx->pc = 0x1CEA94u;
            goto label_1cea94;
        }
    }
    ctx->pc = 0x1CEA74u;
label_1cea74:
    // 0x1cea74: 0x0  nop
    ctx->pc = 0x1cea74u;
    // NOP
label_1cea78:
    // 0x1cea78: 0x8e250284  lw          $a1, 0x284($s1)
    ctx->pc = 0x1cea78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_1cea7c:
    // 0x1cea7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cea80:
    // 0x1cea80: 0xc073b6c  jal         func_1CEDB0
label_1cea84:
    if (ctx->pc == 0x1CEA84u) {
        ctx->pc = 0x1CEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA80u;
        // 0x1cea84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA88u;
        goto label_1cea88;
    }
    ctx->pc = 0x1CEA80u;
    SET_GPR_U32(ctx, 31, 0x1CEA88u);
    ctx->pc = 0x1CEA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA80u;
    // 0x1cea84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEDB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CEDB0u, 0x1CEA80u, 0x1CEA88u)) {
        return;
    }
    ctx->pc = 0x1CEA88u;
label_1cea88:
    // 0x1cea88: 0xc073b8a  jal         func_1CEE28
label_1cea8c:
    if (ctx->pc == 0x1CEA8Cu) {
        ctx->pc = 0x1CEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA88u;
        // 0x1cea8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA90u;
        goto label_1cea90;
    }
    ctx->pc = 0x1CEA88u;
    SET_GPR_U32(ctx, 31, 0x1CEA90u);
    ctx->pc = 0x1CEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA88u;
    // 0x1cea8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CEE28u, 0x1CEA88u, 0x1CEA90u)) {
        return;
    }
    ctx->pc = 0x1CEA90u;
label_1cea90:
    // 0x1cea90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cea90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cea94:
    // 0x1cea94: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1cea94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1cea98:
    // 0x1cea98: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1cea98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_1cea9c:
    // 0x1cea9c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
label_1ceaa0:
    if (ctx->pc == 0x1CEAA0u) {
        ctx->pc = 0x1CEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA9Cu;
        // 0x1ceaa0: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEAA4u;
        goto label_1ceaa4;
    }
    ctx->pc = 0x1CEA9Cu;
    {
        const bool branch_taken_0x1cea9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA9Cu;
        // 0x1ceaa0: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea9c) {
            ctx->pc = 0x1CE9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce9a0;
        }
    }
    ctx->pc = 0x1CEAA4u;
label_1ceaa4:
    // 0x1ceaa4: 0x10000035  b           . + 4 + (0x35 << 2)
label_1ceaa8:
    if (ctx->pc == 0x1CEAA8u) {
        ctx->pc = 0x1CEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAA4u;
        // 0x1ceaa8: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEAACu;
        goto label_1ceaac;
    }
    ctx->pc = 0x1CEAA4u;
    {
        const bool branch_taken_0x1ceaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAA4u;
        // 0x1ceaa8: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceaa4) {
            ctx->pc = 0x1CEB7Cu;
            goto label_1ceb7c;
        }
    }
    ctx->pc = 0x1CEAACu;
label_1ceaac:
    // 0x1ceaac: 0x57c20033  bnel        $fp, $v0, . + 4 + (0x33 << 2)
label_1ceab0:
    if (ctx->pc == 0x1CEAB0u) {
        ctx->pc = 0x1CEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAACu;
        // 0x1ceab0: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEAB4u;
        goto label_1ceab4;
    }
    ctx->pc = 0x1CEAACu;
    {
        const bool branch_taken_0x1ceaac = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ceaac) {
            ctx->pc = 0x1CEAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEAACu;
            // 0x1ceab0: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEB7Cu;
            goto label_1ceb7c;
        }
    }
    ctx->pc = 0x1CEAB4u;
label_1ceab4:
    // 0x1ceab4: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x1ceab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_1ceab8:
    // 0x1ceab8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1ceabc:
    if (ctx->pc == 0x1CEABCu) {
        ctx->pc = 0x1CEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAB8u;
        // 0x1ceabc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEAC0u;
        goto label_1ceac0;
    }
    ctx->pc = 0x1CEAB8u;
    {
        const bool branch_taken_0x1ceab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAB8u;
        // 0x1ceabc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceab8) {
            ctx->pc = 0x1CEB78u;
            goto label_1ceb78;
        }
    }
    ctx->pc = 0x1CEAC0u;
label_1ceac0:
    // 0x1ceac0: 0xae200280  sw          $zero, 0x280($s1)
    ctx->pc = 0x1ceac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
label_1ceac4:
    // 0x1ceac4: 0xae220284  sw          $v0, 0x284($s1)
    ctx->pc = 0x1ceac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
label_1ceac8:
    // 0x1ceac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ceac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ceacc:
    // 0x1ceacc: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1ceaccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cead0:
    // 0x1cead0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cead4:
    // 0x1cead4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cead4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cead8:
    // 0x1cead8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ceadc:
    // 0x1ceadc: 0x60f809  jalr        $v1
label_1ceae0:
    if (ctx->pc == 0x1CEAE0u) {
        ctx->pc = 0x1CEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEADCu;
        // 0x1ceae0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEAE4u;
        goto label_1ceae4;
    }
    ctx->pc = 0x1CEADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CEAE4u);
        ctx->pc = 0x1CEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEADCu;
        // 0x1ceae0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEADCu, 0x1CEAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEAE4u;
label_1ceae4:
    // 0x1ceae4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1ceae8:
    if (ctx->pc == 0x1CEAE8u) {
        ctx->pc = 0x1CEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAE4u;
        // 0x1ceae8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEAECu;
        goto label_1ceaec;
    }
    ctx->pc = 0x1CEAE4u;
    {
        const bool branch_taken_0x1ceae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAE4u;
        // 0x1ceae8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceae4) {
            ctx->pc = 0x1CEB90u;
            goto label_1ceb90;
        }
    }
    ctx->pc = 0x1CEAECu;
label_1ceaec:
    // 0x1ceaec: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1ceaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1ceaf0:
    // 0x1ceaf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ceaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ceaf4:
    // 0x1ceaf4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1ceaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1ceaf8:
    // 0x1ceaf8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ceaf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ceafc:
    // 0x1ceafc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ceafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ceb00:
    // 0x1ceb00: 0x60f809  jalr        $v1
label_1ceb04:
    if (ctx->pc == 0x1CEB04u) {
        ctx->pc = 0x1CEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB00u;
        // 0x1ceb04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEB08u;
        goto label_1ceb08;
    }
    ctx->pc = 0x1CEB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CEB08u);
        ctx->pc = 0x1CEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB00u;
        // 0x1ceb04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEB00u, 0x1CEB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEB08u;
label_1ceb08:
    // 0x1ceb08: 0x2f61021  addu        $v0, $s7, $s6
    ctx->pc = 0x1ceb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
label_1ceb0c:
    // 0x1ceb0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ceb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceb10:
    // 0x1ceb10: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1ceb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ceb14:
    // 0x1ceb14: 0xae230280  sw          $v1, 0x280($s1)
    ctx->pc = 0x1ceb14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 3));
label_1ceb18:
    // 0x1ceb18: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1ceb1c:
    if (ctx->pc == 0x1CEB1Cu) {
        ctx->pc = 0x1CEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB18u;
        // 0x1ceb1c: 0xae240284  sw          $a0, 0x284($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEB20u;
        goto label_1ceb20;
    }
    ctx->pc = 0x1CEB18u;
    {
        const bool branch_taken_0x1ceb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB18u;
        // 0x1ceb1c: 0xae240284  sw          $a0, 0x284($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb18) {
            ctx->pc = 0x1CEB8Cu;
            goto label_1ceb8c;
        }
    }
    ctx->pc = 0x1CEB20u;
label_1ceb20:
    // 0x1ceb20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ceb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceb24:
    // 0x1ceb24: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1ceb24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1ceb28:
    // 0x1ceb28: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1ceb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1ceb2c:
    // 0x1ceb2c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ceb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ceb30:
    // 0x1ceb30: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ceb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ceb34:
    // 0x1ceb34: 0x60f809  jalr        $v1
label_1ceb38:
    if (ctx->pc == 0x1CEB38u) {
        ctx->pc = 0x1CEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB34u;
        // 0x1ceb38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEB3Cu;
        goto label_1ceb3c;
    }
    ctx->pc = 0x1CEB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CEB3Cu);
        ctx->pc = 0x1CEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB34u;
        // 0x1ceb38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEB34u, 0x1CEB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEB3Cu;
label_1ceb3c:
    // 0x1ceb3c: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x1ceb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_1ceb40:
    // 0x1ceb40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ceb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceb44:
    // 0x1ceb44: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ceb48:
    if (ctx->pc == 0x1CEB48u) {
        ctx->pc = 0x1CEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB44u;
        // 0x1ceb48: 0xae220280  sw          $v0, 0x280($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEB4Cu;
        goto label_1ceb4c;
    }
    ctx->pc = 0x1CEB44u;
    {
        const bool branch_taken_0x1ceb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB44u;
        // 0x1ceb48: 0xae220280  sw          $v0, 0x280($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb44) {
            ctx->pc = 0x1CEB8Cu;
            goto label_1ceb8c;
        }
    }
    ctx->pc = 0x1CEB4Cu;
label_1ceb4c:
    // 0x1ceb4c: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1ceb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1ceb50:
    // 0x1ceb50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ceb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ceb54:
    // 0x1ceb54: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1ceb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1ceb58:
    // 0x1ceb58: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ceb58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ceb5c:
    // 0x1ceb5c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ceb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ceb60:
    // 0x1ceb60: 0x60f809  jalr        $v1
label_1ceb64:
    if (ctx->pc == 0x1CEB64u) {
        ctx->pc = 0x1CEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB60u;
        // 0x1ceb64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEB68u;
        goto label_1ceb68;
    }
    ctx->pc = 0x1CEB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CEB68u);
        ctx->pc = 0x1CEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB60u;
        // 0x1ceb64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEB60u, 0x1CEB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEB68u;
label_1ceb68:
    // 0x1ceb68: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ceb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ceb6c:
    // 0x1ceb6c: 0xae200280  sw          $zero, 0x280($s1)
    ctx->pc = 0x1ceb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
label_1ceb70:
    // 0x1ceb70: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ceb74:
    if (ctx->pc == 0x1CEB74u) {
        ctx->pc = 0x1CEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB70u;
        // 0x1ceb74: 0xae220284  sw          $v0, 0x284($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEB78u;
        goto label_1ceb78;
    }
    ctx->pc = 0x1CEB70u;
    {
        const bool branch_taken_0x1ceb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB70u;
        // 0x1ceb74: 0xae220284  sw          $v0, 0x284($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb70) {
            ctx->pc = 0x1CEB8Cu;
            goto label_1ceb8c;
        }
    }
    ctx->pc = 0x1CEB78u;
label_1ceb78:
    // 0x1ceb78: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1ceb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1ceb7c:
    // 0x1ceb7c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1ceb80:
    if (ctx->pc == 0x1CEB80u) {
        ctx->pc = 0x1CEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB7Cu;
        // 0x1ceb80: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEB84u;
        goto label_1ceb84;
    }
    ctx->pc = 0x1CEB7Cu;
    {
        const bool branch_taken_0x1ceb7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB7Cu;
        // 0x1ceb80: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb7c) {
            ctx->pc = 0x1CEB8Cu;
            goto label_1ceb8c;
        }
    }
    ctx->pc = 0x1CEB84u;
label_1ceb84:
    // 0x1ceb84: 0xc06dbc8  jal         func_1B6F20
label_1ceb88:
    if (ctx->pc == 0x1CEB88u) {
        ctx->pc = 0x1CEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB84u;
        // 0x1ceb88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEB8Cu;
        goto label_1ceb8c;
    }
    ctx->pc = 0x1CEB84u;
    SET_GPR_U32(ctx, 31, 0x1CEB8Cu);
    ctx->pc = 0x1CEB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB84u;
    // 0x1ceb88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1CEB84u, 0x1CEB8Cu)) {
        return;
    }
    ctx->pc = 0x1CEB8Cu;
label_1ceb8c:
    // 0x1ceb8c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1ceb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1ceb90:
    // 0x1ceb90: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1ceb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1ceb94:
    // 0x1ceb94: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1ceb94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1ceb98:
    // 0x1ceb98: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1ceb98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ceb9c:
    // 0x1ceb9c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1ceb9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ceba0:
    // 0x1ceba0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1ceba0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ceba4:
    // 0x1ceba4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ceba4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ceba8:
    // 0x1ceba8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1ceba8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cebac:
    // 0x1cebac: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1cebacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cebb0:
    // 0x1cebb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cebb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cebb4:
    // 0x1cebb4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1cebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cebb8:
    // 0x1cebb8: 0x3e00008  jr          $ra
label_1cebbc:
    if (ctx->pc == 0x1CEBBCu) {
        ctx->pc = 0x1CEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBB8u;
        // 0x1cebbc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEBC0u;
        goto label_fallthrough_0x1cebb8;
    }
    ctx->pc = 0x1CEBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBB8u;
        // 0x1cebbc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cebb8:
    ctx->pc = 0x1CEBC0u;
}
