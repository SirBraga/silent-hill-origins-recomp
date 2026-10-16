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

// Function: sub_0027D720
// Address: 0x27d720 - 0x27db08
void sub_0027D720_0x27d720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D720_0x27d720");
#endif

    switch (ctx->pc) {
        case 0x27d720u: goto label_27d720;
        case 0x27d724u: goto label_27d724;
        case 0x27d728u: goto label_27d728;
        case 0x27d72cu: goto label_27d72c;
        case 0x27d730u: goto label_27d730;
        case 0x27d734u: goto label_27d734;
        case 0x27d738u: goto label_27d738;
        case 0x27d73cu: goto label_27d73c;
        case 0x27d740u: goto label_27d740;
        case 0x27d744u: goto label_27d744;
        case 0x27d748u: goto label_27d748;
        case 0x27d74cu: goto label_27d74c;
        case 0x27d750u: goto label_27d750;
        case 0x27d754u: goto label_27d754;
        case 0x27d758u: goto label_27d758;
        case 0x27d75cu: goto label_27d75c;
        case 0x27d760u: goto label_27d760;
        case 0x27d764u: goto label_27d764;
        case 0x27d768u: goto label_27d768;
        case 0x27d76cu: goto label_27d76c;
        case 0x27d770u: goto label_27d770;
        case 0x27d774u: goto label_27d774;
        case 0x27d778u: goto label_27d778;
        case 0x27d77cu: goto label_27d77c;
        case 0x27d780u: goto label_27d780;
        case 0x27d784u: goto label_27d784;
        case 0x27d788u: goto label_27d788;
        case 0x27d78cu: goto label_27d78c;
        case 0x27d790u: goto label_27d790;
        case 0x27d794u: goto label_27d794;
        case 0x27d798u: goto label_27d798;
        case 0x27d79cu: goto label_27d79c;
        case 0x27d7a0u: goto label_27d7a0;
        case 0x27d7a4u: goto label_27d7a4;
        case 0x27d7a8u: goto label_27d7a8;
        case 0x27d7acu: goto label_27d7ac;
        case 0x27d7b0u: goto label_27d7b0;
        case 0x27d7b4u: goto label_27d7b4;
        case 0x27d7b8u: goto label_27d7b8;
        case 0x27d7bcu: goto label_27d7bc;
        case 0x27d7c0u: goto label_27d7c0;
        case 0x27d7c4u: goto label_27d7c4;
        case 0x27d7c8u: goto label_27d7c8;
        case 0x27d7ccu: goto label_27d7cc;
        case 0x27d7d0u: goto label_27d7d0;
        case 0x27d7d4u: goto label_27d7d4;
        case 0x27d7d8u: goto label_27d7d8;
        case 0x27d7dcu: goto label_27d7dc;
        case 0x27d7e0u: goto label_27d7e0;
        case 0x27d7e4u: goto label_27d7e4;
        case 0x27d7e8u: goto label_27d7e8;
        case 0x27d7ecu: goto label_27d7ec;
        case 0x27d7f0u: goto label_27d7f0;
        case 0x27d7f4u: goto label_27d7f4;
        case 0x27d7f8u: goto label_27d7f8;
        case 0x27d7fcu: goto label_27d7fc;
        case 0x27d800u: goto label_27d800;
        case 0x27d804u: goto label_27d804;
        case 0x27d808u: goto label_27d808;
        case 0x27d80cu: goto label_27d80c;
        case 0x27d810u: goto label_27d810;
        case 0x27d814u: goto label_27d814;
        case 0x27d818u: goto label_27d818;
        case 0x27d81cu: goto label_27d81c;
        case 0x27d820u: goto label_27d820;
        case 0x27d824u: goto label_27d824;
        case 0x27d828u: goto label_27d828;
        case 0x27d82cu: goto label_27d82c;
        case 0x27d830u: goto label_27d830;
        case 0x27d834u: goto label_27d834;
        case 0x27d838u: goto label_27d838;
        case 0x27d83cu: goto label_27d83c;
        case 0x27d840u: goto label_27d840;
        case 0x27d844u: goto label_27d844;
        case 0x27d848u: goto label_27d848;
        case 0x27d84cu: goto label_27d84c;
        case 0x27d850u: goto label_27d850;
        case 0x27d854u: goto label_27d854;
        case 0x27d858u: goto label_27d858;
        case 0x27d85cu: goto label_27d85c;
        case 0x27d860u: goto label_27d860;
        case 0x27d864u: goto label_27d864;
        case 0x27d868u: goto label_27d868;
        case 0x27d86cu: goto label_27d86c;
        case 0x27d870u: goto label_27d870;
        case 0x27d874u: goto label_27d874;
        case 0x27d878u: goto label_27d878;
        case 0x27d87cu: goto label_27d87c;
        case 0x27d880u: goto label_27d880;
        case 0x27d884u: goto label_27d884;
        case 0x27d888u: goto label_27d888;
        case 0x27d88cu: goto label_27d88c;
        case 0x27d890u: goto label_27d890;
        case 0x27d894u: goto label_27d894;
        case 0x27d898u: goto label_27d898;
        case 0x27d89cu: goto label_27d89c;
        case 0x27d8a0u: goto label_27d8a0;
        case 0x27d8a4u: goto label_27d8a4;
        case 0x27d8a8u: goto label_27d8a8;
        case 0x27d8acu: goto label_27d8ac;
        case 0x27d8b0u: goto label_27d8b0;
        case 0x27d8b4u: goto label_27d8b4;
        case 0x27d8b8u: goto label_27d8b8;
        case 0x27d8bcu: goto label_27d8bc;
        case 0x27d8c0u: goto label_27d8c0;
        case 0x27d8c4u: goto label_27d8c4;
        case 0x27d8c8u: goto label_27d8c8;
        case 0x27d8ccu: goto label_27d8cc;
        case 0x27d8d0u: goto label_27d8d0;
        case 0x27d8d4u: goto label_27d8d4;
        case 0x27d8d8u: goto label_27d8d8;
        case 0x27d8dcu: goto label_27d8dc;
        case 0x27d8e0u: goto label_27d8e0;
        case 0x27d8e4u: goto label_27d8e4;
        case 0x27d8e8u: goto label_27d8e8;
        case 0x27d8ecu: goto label_27d8ec;
        case 0x27d8f0u: goto label_27d8f0;
        case 0x27d8f4u: goto label_27d8f4;
        case 0x27d8f8u: goto label_27d8f8;
        case 0x27d8fcu: goto label_27d8fc;
        case 0x27d900u: goto label_27d900;
        case 0x27d904u: goto label_27d904;
        case 0x27d908u: goto label_27d908;
        case 0x27d90cu: goto label_27d90c;
        case 0x27d910u: goto label_27d910;
        case 0x27d914u: goto label_27d914;
        case 0x27d918u: goto label_27d918;
        case 0x27d91cu: goto label_27d91c;
        case 0x27d920u: goto label_27d920;
        case 0x27d924u: goto label_27d924;
        case 0x27d928u: goto label_27d928;
        case 0x27d92cu: goto label_27d92c;
        case 0x27d930u: goto label_27d930;
        case 0x27d934u: goto label_27d934;
        case 0x27d938u: goto label_27d938;
        case 0x27d93cu: goto label_27d93c;
        case 0x27d940u: goto label_27d940;
        case 0x27d944u: goto label_27d944;
        case 0x27d948u: goto label_27d948;
        case 0x27d94cu: goto label_27d94c;
        case 0x27d950u: goto label_27d950;
        case 0x27d954u: goto label_27d954;
        case 0x27d958u: goto label_27d958;
        case 0x27d95cu: goto label_27d95c;
        case 0x27d960u: goto label_27d960;
        case 0x27d964u: goto label_27d964;
        case 0x27d968u: goto label_27d968;
        case 0x27d96cu: goto label_27d96c;
        case 0x27d970u: goto label_27d970;
        case 0x27d974u: goto label_27d974;
        case 0x27d978u: goto label_27d978;
        case 0x27d97cu: goto label_27d97c;
        case 0x27d980u: goto label_27d980;
        case 0x27d984u: goto label_27d984;
        case 0x27d988u: goto label_27d988;
        case 0x27d98cu: goto label_27d98c;
        case 0x27d990u: goto label_27d990;
        case 0x27d994u: goto label_27d994;
        case 0x27d998u: goto label_27d998;
        case 0x27d99cu: goto label_27d99c;
        case 0x27d9a0u: goto label_27d9a0;
        case 0x27d9a4u: goto label_27d9a4;
        case 0x27d9a8u: goto label_27d9a8;
        case 0x27d9acu: goto label_27d9ac;
        case 0x27d9b0u: goto label_27d9b0;
        case 0x27d9b4u: goto label_27d9b4;
        case 0x27d9b8u: goto label_27d9b8;
        case 0x27d9bcu: goto label_27d9bc;
        case 0x27d9c0u: goto label_27d9c0;
        case 0x27d9c4u: goto label_27d9c4;
        case 0x27d9c8u: goto label_27d9c8;
        case 0x27d9ccu: goto label_27d9cc;
        case 0x27d9d0u: goto label_27d9d0;
        case 0x27d9d4u: goto label_27d9d4;
        case 0x27d9d8u: goto label_27d9d8;
        case 0x27d9dcu: goto label_27d9dc;
        case 0x27d9e0u: goto label_27d9e0;
        case 0x27d9e4u: goto label_27d9e4;
        case 0x27d9e8u: goto label_27d9e8;
        case 0x27d9ecu: goto label_27d9ec;
        case 0x27d9f0u: goto label_27d9f0;
        case 0x27d9f4u: goto label_27d9f4;
        case 0x27d9f8u: goto label_27d9f8;
        case 0x27d9fcu: goto label_27d9fc;
        case 0x27da00u: goto label_27da00;
        case 0x27da04u: goto label_27da04;
        case 0x27da08u: goto label_27da08;
        case 0x27da0cu: goto label_27da0c;
        case 0x27da10u: goto label_27da10;
        case 0x27da14u: goto label_27da14;
        case 0x27da18u: goto label_27da18;
        case 0x27da1cu: goto label_27da1c;
        case 0x27da20u: goto label_27da20;
        case 0x27da24u: goto label_27da24;
        case 0x27da28u: goto label_27da28;
        case 0x27da2cu: goto label_27da2c;
        case 0x27da30u: goto label_27da30;
        case 0x27da34u: goto label_27da34;
        case 0x27da38u: goto label_27da38;
        case 0x27da3cu: goto label_27da3c;
        case 0x27da40u: goto label_27da40;
        case 0x27da44u: goto label_27da44;
        case 0x27da48u: goto label_27da48;
        case 0x27da4cu: goto label_27da4c;
        case 0x27da50u: goto label_27da50;
        case 0x27da54u: goto label_27da54;
        case 0x27da58u: goto label_27da58;
        case 0x27da5cu: goto label_27da5c;
        case 0x27da60u: goto label_27da60;
        case 0x27da64u: goto label_27da64;
        case 0x27da68u: goto label_27da68;
        case 0x27da6cu: goto label_27da6c;
        case 0x27da70u: goto label_27da70;
        case 0x27da74u: goto label_27da74;
        case 0x27da78u: goto label_27da78;
        case 0x27da7cu: goto label_27da7c;
        case 0x27da80u: goto label_27da80;
        case 0x27da84u: goto label_27da84;
        case 0x27da88u: goto label_27da88;
        case 0x27da8cu: goto label_27da8c;
        case 0x27da90u: goto label_27da90;
        case 0x27da94u: goto label_27da94;
        case 0x27da98u: goto label_27da98;
        case 0x27da9cu: goto label_27da9c;
        case 0x27daa0u: goto label_27daa0;
        case 0x27daa4u: goto label_27daa4;
        case 0x27daa8u: goto label_27daa8;
        case 0x27daacu: goto label_27daac;
        case 0x27dab0u: goto label_27dab0;
        case 0x27dab4u: goto label_27dab4;
        case 0x27dab8u: goto label_27dab8;
        case 0x27dabcu: goto label_27dabc;
        case 0x27dac0u: goto label_27dac0;
        case 0x27dac4u: goto label_27dac4;
        case 0x27dac8u: goto label_27dac8;
        case 0x27daccu: goto label_27dacc;
        case 0x27dad0u: goto label_27dad0;
        case 0x27dad4u: goto label_27dad4;
        case 0x27dad8u: goto label_27dad8;
        case 0x27dadcu: goto label_27dadc;
        case 0x27dae0u: goto label_27dae0;
        case 0x27dae4u: goto label_27dae4;
        case 0x27dae8u: goto label_27dae8;
        case 0x27daecu: goto label_27daec;
        case 0x27daf0u: goto label_27daf0;
        case 0x27daf4u: goto label_27daf4;
        case 0x27daf8u: goto label_27daf8;
        case 0x27dafcu: goto label_27dafc;
        case 0x27db00u: goto label_27db00;
        case 0x27db04u: goto label_27db04;
        default: break;
    }

    ctx->pc = 0x27d720u;

label_27d720:
    // 0x27d720: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x27d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_27d724:
    // 0x27d724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27d724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d728:
    // 0x27d728: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x27d728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_27d72c:
    // 0x27d72c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27d72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27d730:
    // 0x27d730: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x27d730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_27d734:
    // 0x27d734: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27d734u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27d738:
    // 0x27d738: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x27d738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_27d73c:
    // 0x27d73c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x27d73cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d740:
    // 0x27d740: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x27d740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_27d744:
    // 0x27d744: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x27d744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_27d748:
    // 0x27d748: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x27d748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_27d74c:
    // 0x27d74c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x27d74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_27d750:
    // 0x27d750: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x27d750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_27d754:
    // 0x27d754: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27d754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27d758:
    // 0x27d758: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27d758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_27d75c:
    // 0x27d75c: 0xc09270a  jal         func_249C28
label_27d760:
    if (ctx->pc == 0x27D760u) {
        ctx->pc = 0x27D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D75Cu;
        // 0x27d760: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D764u;
        goto label_27d764;
    }
    ctx->pc = 0x27D75Cu;
    SET_GPR_U32(ctx, 31, 0x27D764u);
    ctx->pc = 0x27D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D75Cu;
    // 0x27d760: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x27D75Cu, 0x27D764u)) {
        return;
    }
    ctx->pc = 0x27D764u;
label_27d764:
    // 0x27d764: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_27d768:
    if (ctx->pc == 0x27D768u) {
        ctx->pc = 0x27D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D764u;
        // 0x27d768: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D76Cu;
        goto label_27d76c;
    }
    ctx->pc = 0x27D764u;
    {
        const bool branch_taken_0x27d764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D764u;
        // 0x27d768: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d764) {
            ctx->pc = 0x27D7E8u;
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27D76Cu;
label_27d76c:
    // 0x27d76c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x27d76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_27d770:
    // 0x27d770: 0xc0927be  jal         func_249EF8
label_27d774:
    if (ctx->pc == 0x27D774u) {
        ctx->pc = 0x27D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D770u;
        // 0x27d774: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D778u;
        goto label_27d778;
    }
    ctx->pc = 0x27D770u;
    SET_GPR_U32(ctx, 31, 0x27D778u);
    ctx->pc = 0x27D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D770u;
    // 0x27d774: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27D770u, 0x27D778u)) {
        return;
    }
    ctx->pc = 0x27D778u;
label_27d778:
    // 0x27d778: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_27d77c:
    if (ctx->pc == 0x27D77Cu) {
        ctx->pc = 0x27D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D778u;
        // 0x27d77c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D780u;
        goto label_27d780;
    }
    ctx->pc = 0x27D778u;
    {
        const bool branch_taken_0x27d778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D778u;
        // 0x27d77c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d778) {
            ctx->pc = 0x27D7E8u;
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27D780u;
label_27d780:
    // 0x27d780: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x27d780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_27d784:
    // 0x27d784: 0xc0927be  jal         func_249EF8
label_27d788:
    if (ctx->pc == 0x27D788u) {
        ctx->pc = 0x27D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D784u;
        // 0x27d788: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D78Cu;
        goto label_27d78c;
    }
    ctx->pc = 0x27D784u;
    SET_GPR_U32(ctx, 31, 0x27D78Cu);
    ctx->pc = 0x27D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D784u;
    // 0x27d788: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27D784u, 0x27D78Cu)) {
        return;
    }
    ctx->pc = 0x27D78Cu;
label_27d78c:
    // 0x27d78c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_27d790:
    if (ctx->pc == 0x27D790u) {
        ctx->pc = 0x27D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D78Cu;
        // 0x27d790: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D794u;
        goto label_27d794;
    }
    ctx->pc = 0x27D78Cu;
    {
        const bool branch_taken_0x27d78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D78Cu;
        // 0x27d790: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d78c) {
            ctx->pc = 0x27D7E8u;
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27D794u;
label_27d794:
    // 0x27d794: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x27d794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27d798:
    // 0x27d798: 0xc0927be  jal         func_249EF8
label_27d79c:
    if (ctx->pc == 0x27D79Cu) {
        ctx->pc = 0x27D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D798u;
        // 0x27d79c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D7A0u;
        goto label_27d7a0;
    }
    ctx->pc = 0x27D798u;
    SET_GPR_U32(ctx, 31, 0x27D7A0u);
    ctx->pc = 0x27D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D798u;
    // 0x27d79c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27D798u, 0x27D7A0u)) {
        return;
    }
    ctx->pc = 0x27D7A0u;
label_27d7a0:
    // 0x27d7a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_27d7a4:
    if (ctx->pc == 0x27D7A4u) {
        ctx->pc = 0x27D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7A0u;
        // 0x27d7a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D7A8u;
        goto label_27d7a8;
    }
    ctx->pc = 0x27D7A0u;
    {
        const bool branch_taken_0x27d7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7A0u;
        // 0x27d7a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7a0) {
            ctx->pc = 0x27D7E8u;
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27D7A8u;
label_27d7a8:
    // 0x27d7a8: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x27d7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_27d7ac:
    // 0x27d7ac: 0xc0927be  jal         func_249EF8
label_27d7b0:
    if (ctx->pc == 0x27D7B0u) {
        ctx->pc = 0x27D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7ACu;
        // 0x27d7b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D7B4u;
        goto label_27d7b4;
    }
    ctx->pc = 0x27D7ACu;
    SET_GPR_U32(ctx, 31, 0x27D7B4u);
    ctx->pc = 0x27D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7ACu;
    // 0x27d7b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27D7ACu, 0x27D7B4u)) {
        return;
    }
    ctx->pc = 0x27D7B4u;
label_27d7b4:
    // 0x27d7b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27d7b8:
    if (ctx->pc == 0x27D7B8u) {
        ctx->pc = 0x27D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7B4u;
        // 0x27d7b8: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D7BCu;
        goto label_27d7bc;
    }
    ctx->pc = 0x27D7B4u;
    {
        const bool branch_taken_0x27d7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7B4u;
        // 0x27d7b8: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7b4) {
            ctx->pc = 0x27D7E8u;
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27D7BCu;
label_27d7bc:
    // 0x27d7bc: 0x2c420101  sltiu       $v0, $v0, 0x101
    ctx->pc = 0x27d7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_27d7c0:
    // 0x27d7c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_27d7c4:
    if (ctx->pc == 0x27D7C4u) {
        ctx->pc = 0x27D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7C0u;
        // 0x27d7c4: 0x8fb10040  lw          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D7C8u;
        goto label_27d7c8;
    }
    ctx->pc = 0x27D7C0u;
    {
        const bool branch_taken_0x27d7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7C0u;
        // 0x27d7c4: 0x8fb10040  lw          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7c0) {
            ctx->pc = 0x27D7F0u;
            goto label_27d7f0;
        }
    }
    ctx->pc = 0x27D7C8u;
label_27d7c8:
    // 0x27d7c8: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x27d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_27d7cc:
    // 0x27d7cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27d7d0:
    // 0x27d7d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_27d7d4:
    // 0x27d7d4: 0xc092848  jal         func_24A120
label_27d7d8:
    if (ctx->pc == 0x27D7D8u) {
        ctx->pc = 0x27D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7D4u;
        // 0x27d7d8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D7DCu;
        goto label_27d7dc;
    }
    ctx->pc = 0x27D7D4u;
    SET_GPR_U32(ctx, 31, 0x27D7DCu);
    ctx->pc = 0x27D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7D4u;
    // 0x27d7d8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27D7D4u, 0x27D7DCu)) {
        return;
    }
    ctx->pc = 0x27D7DCu;
label_27d7dc:
    // 0x27d7dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27d7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d7e0:
    // 0x27d7e0: 0xc09281a  jal         func_24A068
label_27d7e4:
    if (ctx->pc == 0x27D7E4u) {
        ctx->pc = 0x27D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7E0u;
        // 0x27d7e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D7E8u;
        goto label_27d7e8;
    }
    ctx->pc = 0x27D7E0u;
    SET_GPR_U32(ctx, 31, 0x27D7E8u);
    ctx->pc = 0x27D7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7E0u;
    // 0x27d7e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27D7E0u, 0x27D7E8u)) {
        return;
    }
    ctx->pc = 0x27D7E8u;
label_27d7e8:
    // 0x27d7e8: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_27d7ec:
    if (ctx->pc == 0x27D7ECu) {
        ctx->pc = 0x27D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7E8u;
        // 0x27d7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D7F0u;
        goto label_27d7f0;
    }
    ctx->pc = 0x27D7E8u;
    {
        const bool branch_taken_0x27d7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7E8u;
        // 0x27d7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7e8) {
            ctx->pc = 0x27DAC4u;
            goto label_27dac4;
        }
    }
    ctx->pc = 0x27D7F0u;
label_27d7f0:
    // 0x27d7f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27d7f4:
    // 0x27d7f4: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x27d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_27d7f8:
    // 0x27d7f8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27d7fc:
    // 0x27d7fc: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x27d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_27d800:
    // 0x27d800: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x27d800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27d804:
    // 0x27d804: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x27d804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_27d808:
    // 0x27d808: 0x34a5001e  ori         $a1, $a1, 0x1E
    ctx->pc = 0x27d808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30);
label_27d80c:
    // 0x27d80c: 0x40f809  jalr        $v0
label_27d810:
    if (ctx->pc == 0x27D810u) {
        ctx->pc = 0x27D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D80Cu;
        // 0x27d810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D814u;
        goto label_27d814;
    }
    ctx->pc = 0x27D80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D814u);
        ctx->pc = 0x27D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D80Cu;
        // 0x27d810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D80Cu, 0x27D814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D814u;
label_27d814:
    // 0x27d814: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27d814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d818:
    // 0x27d818: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
label_27d81c:
    if (ctx->pc == 0x27D81Cu) {
        ctx->pc = 0x27D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D818u;
        // 0x27d81c: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D820u;
        goto label_27d820;
    }
    ctx->pc = 0x27D818u;
    {
        const bool branch_taken_0x27d818 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D818u;
        // 0x27d81c: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d818) {
            ctx->pc = 0x27D850u;
            goto label_27d850;
        }
    }
    ctx->pc = 0x27D820u;
label_27d820:
    // 0x27d820: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x27d820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_27d824:
    // 0x27d824: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27d824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27d828:
    // 0x27d828: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x27d828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_27d82c:
    // 0x27d82c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x27d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_27d830:
    // 0x27d830: 0xc092848  jal         func_24A120
label_27d834:
    if (ctx->pc == 0x27D834u) {
        ctx->pc = 0x27D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D830u;
        // 0x27d834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D838u;
        goto label_27d838;
    }
    ctx->pc = 0x27D830u;
    SET_GPR_U32(ctx, 31, 0x27D838u);
    ctx->pc = 0x27D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D830u;
    // 0x27d834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27D830u, 0x27D838u)) {
        return;
    }
    ctx->pc = 0x27D838u;
label_27d838:
    // 0x27d838: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x27d838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_27d83c:
    // 0x27d83c: 0xc09281a  jal         func_24A068
label_27d840:
    if (ctx->pc == 0x27D840u) {
        ctx->pc = 0x27D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D83Cu;
        // 0x27d840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D844u;
        goto label_27d844;
    }
    ctx->pc = 0x27D83Cu;
    SET_GPR_U32(ctx, 31, 0x27D844u);
    ctx->pc = 0x27D840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D83Cu;
    // 0x27d840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27D83Cu, 0x27D844u)) {
        return;
    }
    ctx->pc = 0x27D844u;
label_27d844:
    // 0x27d844: 0x10000030  b           . + 4 + (0x30 << 2)
label_27d848:
    if (ctx->pc == 0x27D848u) {
        ctx->pc = 0x27D84Cu;
        goto label_27d84c;
    }
    ctx->pc = 0x27D844u;
    {
        const bool branch_taken_0x27d844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d844) {
            ctx->pc = 0x27D908u;
            goto label_27d908;
        }
    }
    ctx->pc = 0x27D84Cu;
label_27d84c:
    // 0x27d84c: 0x0  nop
    ctx->pc = 0x27d84cu;
    // NOP
label_27d850:
    // 0x27d850: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x27d850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
label_27d854:
    // 0x27d854: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x27d854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_27d858:
    // 0x27d858: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_27d85c:
    if (ctx->pc == 0x27D85Cu) {
        ctx->pc = 0x27D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D858u;
        // 0x27d85c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D860u;
        goto label_27d860;
    }
    ctx->pc = 0x27D858u;
    {
        const bool branch_taken_0x27d858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D858u;
        // 0x27d85c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d858) {
            ctx->pc = 0x27D904u;
            goto label_27d904;
        }
    }
    ctx->pc = 0x27D860u;
label_27d860:
    // 0x27d860: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27d860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d864:
    // 0x27d864: 0x32240003  andi        $a0, $s1, 0x3
    ctx->pc = 0x27d864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_27d868:
    // 0x27d868: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
label_27d86c:
    if (ctx->pc == 0x27D86Cu) {
        ctx->pc = 0x27D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D868u;
        // 0x27d86c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D870u;
        goto label_27d870;
    }
    ctx->pc = 0x27D868u;
    {
        const bool branch_taken_0x27d868 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x27D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D868u;
        // 0x27d86c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d868) {
            ctx->pc = 0x27D8B0u;
            goto label_27d8b0;
        }
    }
    ctx->pc = 0x27D870u;
label_27d870:
    // 0x27d870: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_27d874:
    if (ctx->pc == 0x27D874u) {
        ctx->pc = 0x27D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D870u;
        // 0x27d874: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D878u;
        goto label_27d878;
    }
    ctx->pc = 0x27D870u;
    {
        const bool branch_taken_0x27d870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D870u;
        // 0x27d874: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d870) {
            ctx->pc = 0x27D8D0u;
            goto label_27d8d0;
        }
    }
    ctx->pc = 0x27D878u;
label_27d878:
    // 0x27d878: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x27d878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_27d87c:
    // 0x27d87c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_27d880:
    if (ctx->pc == 0x27D880u) {
        ctx->pc = 0x27D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D87Cu;
        // 0x27d880: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D884u;
        goto label_27d884;
    }
    ctx->pc = 0x27D87Cu;
    {
        const bool branch_taken_0x27d87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d87c) {
            ctx->pc = 0x27D880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D87Cu;
            // 0x27d880: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D8B4u;
            goto label_27d8b4;
        }
    }
    ctx->pc = 0x27D884u;
label_27d884:
    // 0x27d884: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x27d884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_27d888:
    // 0x27d888: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_27d88c:
    if (ctx->pc == 0x27D88Cu) {
        ctx->pc = 0x27D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D888u;
        // 0x27d88c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D890u;
        goto label_27d890;
    }
    ctx->pc = 0x27D888u;
    {
        const bool branch_taken_0x27d888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d888) {
            ctx->pc = 0x27D88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D888u;
            // 0x27d88c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D8A4u;
            goto label_27d8a4;
        }
    }
    ctx->pc = 0x27D890u;
label_27d890:
    // 0x27d890: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x27d890u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_27d894:
    // 0x27d894: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x27d894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_27d898:
    // 0x27d898: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x27d898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_27d89c:
    // 0x27d89c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d8a0:
    // 0x27d8a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x27d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_27d8a4:
    // 0x27d8a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27d8a8:
    // 0x27d8a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_27d8ac:
    // 0x27d8ac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x27d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_27d8b0:
    // 0x27d8b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x27d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_27d8b4:
    // 0x27d8b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27d8b8:
    // 0x27d8b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_27d8bc:
    // 0x27d8bc: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x27d8bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_27d8c0:
    // 0x27d8c0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_27d8c4:
    if (ctx->pc == 0x27D8C4u) {
        ctx->pc = 0x27D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8C0u;
        // 0x27d8c4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D8C8u;
        goto label_27d8c8;
    }
    ctx->pc = 0x27D8C0u;
    {
        const bool branch_taken_0x27d8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8C0u;
        // 0x27d8c4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8c0) {
            ctx->pc = 0x27D904u;
            goto label_27d904;
        }
    }
    ctx->pc = 0x27D8C8u;
label_27d8c8:
    // 0x27d8c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27d8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27d8cc:
    // 0x27d8cc: 0x0  nop
    ctx->pc = 0x27d8ccu;
    // NOP
label_27d8d0:
    // 0x27d8d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x27d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_27d8d4:
    // 0x27d8d4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_27d8d8:
    // 0x27d8d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_27d8dc:
    // 0x27d8dc: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x27d8dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_27d8e0:
    // 0x27d8e0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x27d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_27d8e4:
    // 0x27d8e4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x27d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_27d8e8:
    // 0x27d8e8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x27d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_27d8ec:
    // 0x27d8ec: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x27d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_27d8f0:
    // 0x27d8f0: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x27d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_27d8f4:
    // 0x27d8f4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x27d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_27d8f8:
    // 0x27d8f8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_27d8fc:
    // 0x27d8fc: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
label_27d900:
    if (ctx->pc == 0x27D900u) {
        ctx->pc = 0x27D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8FCu;
        // 0x27d900: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D904u;
        goto label_27d904;
    }
    ctx->pc = 0x27D8FCu;
    {
        const bool branch_taken_0x27d8fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8FCu;
        // 0x27d900: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8fc) {
            ctx->pc = 0x27D8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d8d0;
        }
    }
    ctx->pc = 0x27D904u;
label_27d904:
    // 0x27d904: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x27d904u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27d908:
    // 0x27d908: 0x13c0ffb7  beqz        $fp, . + 4 + (-0x49 << 2)
label_27d90c:
    if (ctx->pc == 0x27D90Cu) {
        ctx->pc = 0x27D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D908u;
        // 0x27d90c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D910u;
        goto label_27d910;
    }
    ctx->pc = 0x27D908u;
    {
        const bool branch_taken_0x27d908 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D908u;
        // 0x27d90c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d908) {
            ctx->pc = 0x27D7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27D910u;
label_27d910:
    // 0x27d910: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_27d914:
    if (ctx->pc == 0x27D914u) {
        ctx->pc = 0x27D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D910u;
        // 0x27d914: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D918u;
        goto label_27d918;
    }
    ctx->pc = 0x27D910u;
    {
        const bool branch_taken_0x27d910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D910u;
        // 0x27d914: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d910) {
            ctx->pc = 0x27DAC0u;
            goto label_27dac0;
        }
    }
    ctx->pc = 0x27D918u;
label_27d918:
    // 0x27d918: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x27d918u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d91c:
    // 0x27d91c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x27d91cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d920:
    // 0x27d920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27d924:
    // 0x27d924: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x27d924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_27d928:
    // 0x27d928: 0xc0927be  jal         func_249EF8
label_27d92c:
    if (ctx->pc == 0x27D92Cu) {
        ctx->pc = 0x27D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D928u;
        // 0x27d92c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D930u;
        goto label_27d930;
    }
    ctx->pc = 0x27D928u;
    SET_GPR_U32(ctx, 31, 0x27D930u);
    ctx->pc = 0x27D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D928u;
    // 0x27d92c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27D928u, 0x27D930u)) {
        return;
    }
    ctx->pc = 0x27D930u;
label_27d930:
    // 0x27d930: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
label_27d934:
    if (ctx->pc == 0x27D934u) {
        ctx->pc = 0x27D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D930u;
        // 0x27d934: 0x8fb10048  lw          $s1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D938u;
        goto label_27d938;
    }
    ctx->pc = 0x27D930u;
    {
        const bool branch_taken_0x27d930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D930u;
        // 0x27d934: 0x8fb10048  lw          $s1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d930) {
            ctx->pc = 0x27D7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27D938u;
label_27d938:
    // 0x27d938: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
label_27d93c:
    if (ctx->pc == 0x27D93Cu) {
        ctx->pc = 0x27D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D938u;
        // 0x27d93c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D940u;
        goto label_27d940;
    }
    ctx->pc = 0x27D938u;
    {
        const bool branch_taken_0x27d938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D938u;
        // 0x27d93c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d938) {
            ctx->pc = 0x27DAA8u;
            goto label_27daa8;
        }
    }
    ctx->pc = 0x27D940u;
label_27d940:
    // 0x27d940: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x27d940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_27d944:
    // 0x27d944: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x27d944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_27d948:
    // 0x27d948: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x27d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_27d94c:
    // 0x27d94c: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x27d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_27d950:
    // 0x27d950: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27d950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27d954:
    // 0x27d954: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x27d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_27d958:
    // 0x27d958: 0x769821  addu        $s3, $v1, $s6
    ctx->pc = 0x27d958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_27d95c:
    // 0x27d95c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x27d95cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_27d960:
    // 0x27d960: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x27d960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_27d964:
    // 0x27d964: 0x40f809  jalr        $v0
label_27d968:
    if (ctx->pc == 0x27D968u) {
        ctx->pc = 0x27D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D964u;
        // 0x27d968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D96Cu;
        goto label_27d96c;
    }
    ctx->pc = 0x27D964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D96Cu);
        ctx->pc = 0x27D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D964u;
        // 0x27d968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D964u, 0x27D96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D96Cu;
label_27d96c:
    // 0x27d96c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_27d970:
    if (ctx->pc == 0x27D970u) {
        ctx->pc = 0x27D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D96Cu;
        // 0x27d970: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D974u;
        goto label_27d974;
    }
    ctx->pc = 0x27D96Cu;
    {
        const bool branch_taken_0x27d96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D96Cu;
        // 0x27d970: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d96c) {
            ctx->pc = 0x27D9A0u;
            goto label_27d9a0;
        }
    }
    ctx->pc = 0x27D974u;
label_27d974:
    // 0x27d974: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x27d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_27d978:
    // 0x27d978: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27d978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27d97c:
    // 0x27d97c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d980:
    // 0x27d980: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x27d980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_27d984:
    // 0x27d984: 0xc092848  jal         func_24A120
label_27d988:
    if (ctx->pc == 0x27D988u) {
        ctx->pc = 0x27D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D984u;
        // 0x27d988: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D98Cu;
        goto label_27d98c;
    }
    ctx->pc = 0x27D984u;
    SET_GPR_U32(ctx, 31, 0x27D98Cu);
    ctx->pc = 0x27D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D984u;
    // 0x27d988: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27D984u, 0x27D98Cu)) {
        return;
    }
    ctx->pc = 0x27D98Cu;
label_27d98c:
    // 0x27d98c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x27d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_27d990:
    // 0x27d990: 0xc09281a  jal         func_24A068
label_27d994:
    if (ctx->pc == 0x27D994u) {
        ctx->pc = 0x27D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D990u;
        // 0x27d994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D998u;
        goto label_27d998;
    }
    ctx->pc = 0x27D990u;
    SET_GPR_U32(ctx, 31, 0x27D998u);
    ctx->pc = 0x27D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D990u;
    // 0x27d994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27D990u, 0x27D998u)) {
        return;
    }
    ctx->pc = 0x27D998u;
label_27d998:
    // 0x27d998: 0x1000002b  b           . + 4 + (0x2B << 2)
label_27d99c:
    if (ctx->pc == 0x27D99Cu) {
        ctx->pc = 0x27D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D998u;
        // 0x27d99c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D9A0u;
        goto label_27d9a0;
    }
    ctx->pc = 0x27D998u;
    {
        const bool branch_taken_0x27d998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D998u;
        // 0x27d99c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d998) {
            ctx->pc = 0x27DA48u;
            goto label_27da48;
        }
    }
    ctx->pc = 0x27D9A0u;
label_27d9a0:
    // 0x27d9a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27d9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d9a4:
    // 0x27d9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d9a8:
    // 0x27d9a8: 0xc0c493d  jal         func_3124F4
label_27d9ac:
    if (ctx->pc == 0x27D9ACu) {
        ctx->pc = 0x27D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9A8u;
        // 0x27d9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D9B0u;
        goto label_27d9b0;
    }
    ctx->pc = 0x27D9A8u;
    SET_GPR_U32(ctx, 31, 0x27D9B0u);
    ctx->pc = 0x27D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D9A8u;
    // 0x27d9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27D9A8u, 0x27D9B0u)) {
        return;
    }
    ctx->pc = 0x27D9B0u;
label_27d9b0:
    // 0x27d9b0: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_27d9b4:
    if (ctx->pc == 0x27D9B4u) {
        ctx->pc = 0x27D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9B0u;
        // 0x27d9b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D9B8u;
        goto label_27d9b8;
    }
    ctx->pc = 0x27D9B0u;
    {
        const bool branch_taken_0x27d9b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9B0u;
        // 0x27d9b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9b0) {
            ctx->pc = 0x27DA40u;
            goto label_27da40;
        }
    }
    ctx->pc = 0x27D9B8u;
label_27d9b8:
    // 0x27d9b8: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x27d9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27d9bc:
    // 0x27d9bc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x27d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_27d9c0:
    // 0x27d9c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x27d9c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_27d9c4:
    // 0x27d9c4: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x27d9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_27d9c8:
    // 0x27d9c8: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
label_27d9cc:
    if (ctx->pc == 0x27D9CCu) {
        ctx->pc = 0x27D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9C8u;
        // 0x27d9cc: 0x24e40010  addiu       $a0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D9D0u;
        goto label_27d9d0;
    }
    ctx->pc = 0x27D9C8u;
    {
        const bool branch_taken_0x27d9c8 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x27D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9C8u;
        // 0x27d9cc: 0x24e40010  addiu       $a0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9c8) {
            ctx->pc = 0x27DA08u;
            goto label_27da08;
        }
    }
    ctx->pc = 0x27D9D0u;
label_27d9d0:
    // 0x27d9d0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_27d9d4:
    if (ctx->pc == 0x27D9D4u) {
        ctx->pc = 0x27D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9D0u;
        // 0x27d9d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D9D8u;
        goto label_27d9d8;
    }
    ctx->pc = 0x27D9D0u;
    {
        const bool branch_taken_0x27d9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9D0u;
        // 0x27d9d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9d0) {
            ctx->pc = 0x27DA20u;
            goto label_27da20;
        }
    }
    ctx->pc = 0x27D9D8u;
label_27d9d8:
    // 0x27d9d8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x27d9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_27d9dc:
    // 0x27d9dc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_27d9e0:
    if (ctx->pc == 0x27D9E0u) {
        ctx->pc = 0x27D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9DCu;
        // 0x27d9e0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D9E4u;
        goto label_27d9e4;
    }
    ctx->pc = 0x27D9DCu;
    {
        const bool branch_taken_0x27d9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d9dc) {
            ctx->pc = 0x27D9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D9DCu;
            // 0x27d9e0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DA0Cu;
            goto label_27da0c;
        }
    }
    ctx->pc = 0x27D9E4u;
label_27d9e4:
    // 0x27d9e4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x27d9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_27d9e8:
    // 0x27d9e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_27d9ec:
    if (ctx->pc == 0x27D9ECu) {
        ctx->pc = 0x27D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9E8u;
        // 0x27d9ec: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D9F0u;
        goto label_27d9f0;
    }
    ctx->pc = 0x27D9E8u;
    {
        const bool branch_taken_0x27d9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d9e8) {
            ctx->pc = 0x27D9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D9E8u;
            // 0x27d9ec: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DA00u;
            goto label_27da00;
        }
    }
    ctx->pc = 0x27D9F0u;
label_27d9f0:
    // 0x27d9f0: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x27d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
label_27d9f4:
    // 0x27d9f4: 0x24e40024  addiu       $a0, $a3, 0x24
    ctx->pc = 0x27d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
label_27d9f8:
    // 0x27d9f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d9fc:
    // 0x27d9fc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x27d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_27da00:
    // 0x27da00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27da00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_27da04:
    // 0x27da04: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x27da04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_27da08:
    // 0x27da08: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x27da08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_27da0c:
    // 0x27da0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27da0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_27da10:
    // 0x27da10: 0xd1182b  sltu        $v1, $a2, $s1
    ctx->pc = 0x27da10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_27da14:
    // 0x27da14: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_27da18:
    if (ctx->pc == 0x27DA18u) {
        ctx->pc = 0x27DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA14u;
        // 0x27da18: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA1Cu;
        goto label_27da1c;
    }
    ctx->pc = 0x27DA14u;
    {
        const bool branch_taken_0x27da14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA14u;
        // 0x27da18: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da14) {
            ctx->pc = 0x27DA40u;
            goto label_27da40;
        }
    }
    ctx->pc = 0x27DA1Cu;
label_27da1c:
    // 0x27da1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27da1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27da20:
    // 0x27da20: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x27da20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_27da24:
    // 0x27da24: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x27da24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_27da28:
    // 0x27da28: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x27da28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_27da2c:
    // 0x27da2c: 0xd1182b  sltu        $v1, $a2, $s1
    ctx->pc = 0x27da2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_27da30:
    // 0x27da30: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x27da30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
label_27da34:
    // 0x27da34: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x27da34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_27da38:
    // 0x27da38: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_27da3c:
    if (ctx->pc == 0x27DA3Cu) {
        ctx->pc = 0x27DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA38u;
        // 0x27da3c: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA40u;
        goto label_27da40;
    }
    ctx->pc = 0x27DA38u;
    {
        const bool branch_taken_0x27da38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA38u;
        // 0x27da3c: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da38) {
            ctx->pc = 0x27DA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27da20;
        }
    }
    ctx->pc = 0x27DA40u;
label_27da40:
    // 0x27da40: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x27da40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_27da44:
    // 0x27da44: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x27da44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27da48:
    // 0x27da48: 0x1040ff67  beqz        $v0, . + 4 + (-0x99 << 2)
label_27da4c:
    if (ctx->pc == 0x27DA4Cu) {
        ctx->pc = 0x27DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA48u;
        // 0x27da4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA50u;
        goto label_27da50;
    }
    ctx->pc = 0x27DA48u;
    {
        const bool branch_taken_0x27da48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA48u;
        // 0x27da4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da48) {
            ctx->pc = 0x27D7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27DA50u;
label_27da50:
    // 0x27da50: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x27da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_27da54:
    // 0x27da54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x27da54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_27da58:
    // 0x27da58: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x27da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_27da5c:
    // 0x27da5c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_27da60:
    if (ctx->pc == 0x27DA60u) {
        ctx->pc = 0x27DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA5Cu;
        // 0x27da60: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA64u;
        goto label_27da64;
    }
    ctx->pc = 0x27DA5Cu;
    {
        const bool branch_taken_0x27da5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA5Cu;
        // 0x27da60: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da5c) {
            ctx->pc = 0x27DAA8u;
            goto label_27daa8;
        }
    }
    ctx->pc = 0x27DA64u;
label_27da64:
    // 0x27da64: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x27da64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_27da68:
    // 0x27da68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27da68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27da6c:
    // 0x27da6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27da6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27da70:
    // 0x27da70: 0xc0927aa  jal         func_249EA8
label_27da74:
    if (ctx->pc == 0x27DA74u) {
        ctx->pc = 0x27DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA70u;
        // 0x27da74: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA78u;
        goto label_27da78;
    }
    ctx->pc = 0x27DA70u;
    SET_GPR_U32(ctx, 31, 0x27DA78u);
    ctx->pc = 0x27DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA70u;
    // 0x27da74: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x27DA70u, 0x27DA78u)) {
        return;
    }
    ctx->pc = 0x27DA78u;
label_27da78:
    // 0x27da78: 0x1040ff5b  beqz        $v0, . + 4 + (-0xA5 << 2)
label_27da7c:
    if (ctx->pc == 0x27DA7Cu) {
        ctx->pc = 0x27DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA78u;
        // 0x27da7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA80u;
        goto label_27da80;
    }
    ctx->pc = 0x27DA78u;
    {
        const bool branch_taken_0x27da78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA78u;
        // 0x27da7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da78) {
            ctx->pc = 0x27D7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27DA80u;
label_27da80:
    // 0x27da80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27da80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27da84:
    // 0x27da84: 0xc0927be  jal         func_249EF8
label_27da88:
    if (ctx->pc == 0x27DA88u) {
        ctx->pc = 0x27DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA84u;
        // 0x27da88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA8Cu;
        goto label_27da8c;
    }
    ctx->pc = 0x27DA84u;
    SET_GPR_U32(ctx, 31, 0x27DA8Cu);
    ctx->pc = 0x27DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA84u;
    // 0x27da88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27DA84u, 0x27DA8Cu)) {
        return;
    }
    ctx->pc = 0x27DA8Cu;
label_27da8c:
    // 0x27da8c: 0x1040ff56  beqz        $v0, . + 4 + (-0xAA << 2)
label_27da90:
    if (ctx->pc == 0x27DA90u) {
        ctx->pc = 0x27DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA8Cu;
        // 0x27da90: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA94u;
        goto label_27da94;
    }
    ctx->pc = 0x27DA8Cu;
    {
        const bool branch_taken_0x27da8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA8Cu;
        // 0x27da90: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da8c) {
            ctx->pc = 0x27D7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27DA94u;
label_27da94:
    // 0x27da94: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27da94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27da98:
    // 0x27da98: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x27da98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_27da9c:
    // 0x27da9c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x27da9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27daa0:
    // 0x27daa0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_27daa4:
    if (ctx->pc == 0x27DAA4u) {
        ctx->pc = 0x27DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAA0u;
        // 0x27daa4: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DAA8u;
        goto label_27daa8;
    }
    ctx->pc = 0x27DAA0u;
    {
        const bool branch_taken_0x27daa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAA0u;
        // 0x27daa4: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27daa0) {
            ctx->pc = 0x27DA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27da68;
        }
    }
    ctx->pc = 0x27DAA8u;
label_27daa8:
    // 0x27daa8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27daac:
    // 0x27daac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x27daacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_27dab0:
    // 0x27dab0: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x27dab0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_27dab4:
    // 0x27dab4: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x27dab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27dab8:
    // 0x27dab8: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
label_27dabc:
    if (ctx->pc == 0x27DABCu) {
        ctx->pc = 0x27DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAB8u;
        // 0x27dabc: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DAC0u;
        goto label_27dac0;
    }
    ctx->pc = 0x27DAB8u;
    {
        const bool branch_taken_0x27dab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAB8u;
        // 0x27dabc: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dab8) {
            ctx->pc = 0x27D920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d920;
        }
    }
    ctx->pc = 0x27DAC0u;
label_27dac0:
    // 0x27dac0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x27dac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27dac4:
    // 0x27dac4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x27dac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_27dac8:
    // 0x27dac8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x27dac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_27dacc:
    // 0x27dacc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x27daccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27dad0:
    // 0x27dad0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x27dad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27dad4:
    // 0x27dad4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x27dad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27dad8:
    // 0x27dad8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x27dad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27dadc:
    // 0x27dadc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x27dadcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27dae0:
    // 0x27dae0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27dae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27dae4:
    // 0x27dae4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x27dae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27dae8:
    // 0x27dae8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27dae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27daec:
    // 0x27daec: 0x3e00008  jr          $ra
label_27daf0:
    if (ctx->pc == 0x27DAF0u) {
        ctx->pc = 0x27DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAECu;
        // 0x27daf0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DAF4u;
        goto label_27daf4;
    }
    ctx->pc = 0x27DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAECu;
        // 0x27daf0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DAF4u;
label_27daf4:
    // 0x27daf4: 0x0  nop
    ctx->pc = 0x27daf4u;
    // NOP
label_27daf8:
    // 0x27daf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x27daf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_27dafc:
    // 0x27dafc: 0x0  nop
    ctx->pc = 0x27dafcu;
    // NOP
label_27db00:
    // 0x27db00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27db04:
    // 0x27db04: 0x0  nop
    ctx->pc = 0x27db04u;
    // NOP
    ctx->pc = 0x27db08u;
}
