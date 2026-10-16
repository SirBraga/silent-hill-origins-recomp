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

// Function: sub_002EE898
// Address: 0x2ee898 - 0x2eeb08
void sub_002EE898_0x2ee898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE898_0x2ee898");
#endif

    switch (ctx->pc) {
        case 0x2ee898u: goto label_2ee898;
        case 0x2ee89cu: goto label_2ee89c;
        case 0x2ee8a0u: goto label_2ee8a0;
        case 0x2ee8a4u: goto label_2ee8a4;
        case 0x2ee8a8u: goto label_2ee8a8;
        case 0x2ee8acu: goto label_2ee8ac;
        case 0x2ee8b0u: goto label_2ee8b0;
        case 0x2ee8b4u: goto label_2ee8b4;
        case 0x2ee8b8u: goto label_2ee8b8;
        case 0x2ee8bcu: goto label_2ee8bc;
        case 0x2ee8c0u: goto label_2ee8c0;
        case 0x2ee8c4u: goto label_2ee8c4;
        case 0x2ee8c8u: goto label_2ee8c8;
        case 0x2ee8ccu: goto label_2ee8cc;
        case 0x2ee8d0u: goto label_2ee8d0;
        case 0x2ee8d4u: goto label_2ee8d4;
        case 0x2ee8d8u: goto label_2ee8d8;
        case 0x2ee8dcu: goto label_2ee8dc;
        case 0x2ee8e0u: goto label_2ee8e0;
        case 0x2ee8e4u: goto label_2ee8e4;
        case 0x2ee8e8u: goto label_2ee8e8;
        case 0x2ee8ecu: goto label_2ee8ec;
        case 0x2ee8f0u: goto label_2ee8f0;
        case 0x2ee8f4u: goto label_2ee8f4;
        case 0x2ee8f8u: goto label_2ee8f8;
        case 0x2ee8fcu: goto label_2ee8fc;
        case 0x2ee900u: goto label_2ee900;
        case 0x2ee904u: goto label_2ee904;
        case 0x2ee908u: goto label_2ee908;
        case 0x2ee90cu: goto label_2ee90c;
        case 0x2ee910u: goto label_2ee910;
        case 0x2ee914u: goto label_2ee914;
        case 0x2ee918u: goto label_2ee918;
        case 0x2ee91cu: goto label_2ee91c;
        case 0x2ee920u: goto label_2ee920;
        case 0x2ee924u: goto label_2ee924;
        case 0x2ee928u: goto label_2ee928;
        case 0x2ee92cu: goto label_2ee92c;
        case 0x2ee930u: goto label_2ee930;
        case 0x2ee934u: goto label_2ee934;
        case 0x2ee938u: goto label_2ee938;
        case 0x2ee93cu: goto label_2ee93c;
        case 0x2ee940u: goto label_2ee940;
        case 0x2ee944u: goto label_2ee944;
        case 0x2ee948u: goto label_2ee948;
        case 0x2ee94cu: goto label_2ee94c;
        case 0x2ee950u: goto label_2ee950;
        case 0x2ee954u: goto label_2ee954;
        case 0x2ee958u: goto label_2ee958;
        case 0x2ee95cu: goto label_2ee95c;
        case 0x2ee960u: goto label_2ee960;
        case 0x2ee964u: goto label_2ee964;
        case 0x2ee968u: goto label_2ee968;
        case 0x2ee96cu: goto label_2ee96c;
        case 0x2ee970u: goto label_2ee970;
        case 0x2ee974u: goto label_2ee974;
        case 0x2ee978u: goto label_2ee978;
        case 0x2ee97cu: goto label_2ee97c;
        case 0x2ee980u: goto label_2ee980;
        case 0x2ee984u: goto label_2ee984;
        case 0x2ee988u: goto label_2ee988;
        case 0x2ee98cu: goto label_2ee98c;
        case 0x2ee990u: goto label_2ee990;
        case 0x2ee994u: goto label_2ee994;
        case 0x2ee998u: goto label_2ee998;
        case 0x2ee99cu: goto label_2ee99c;
        case 0x2ee9a0u: goto label_2ee9a0;
        case 0x2ee9a4u: goto label_2ee9a4;
        case 0x2ee9a8u: goto label_2ee9a8;
        case 0x2ee9acu: goto label_2ee9ac;
        case 0x2ee9b0u: goto label_2ee9b0;
        case 0x2ee9b4u: goto label_2ee9b4;
        case 0x2ee9b8u: goto label_2ee9b8;
        case 0x2ee9bcu: goto label_2ee9bc;
        case 0x2ee9c0u: goto label_2ee9c0;
        case 0x2ee9c4u: goto label_2ee9c4;
        case 0x2ee9c8u: goto label_2ee9c8;
        case 0x2ee9ccu: goto label_2ee9cc;
        case 0x2ee9d0u: goto label_2ee9d0;
        case 0x2ee9d4u: goto label_2ee9d4;
        case 0x2ee9d8u: goto label_2ee9d8;
        case 0x2ee9dcu: goto label_2ee9dc;
        case 0x2ee9e0u: goto label_2ee9e0;
        case 0x2ee9e4u: goto label_2ee9e4;
        case 0x2ee9e8u: goto label_2ee9e8;
        case 0x2ee9ecu: goto label_2ee9ec;
        case 0x2ee9f0u: goto label_2ee9f0;
        case 0x2ee9f4u: goto label_2ee9f4;
        case 0x2ee9f8u: goto label_2ee9f8;
        case 0x2ee9fcu: goto label_2ee9fc;
        case 0x2eea00u: goto label_2eea00;
        case 0x2eea04u: goto label_2eea04;
        case 0x2eea08u: goto label_2eea08;
        case 0x2eea0cu: goto label_2eea0c;
        case 0x2eea10u: goto label_2eea10;
        case 0x2eea14u: goto label_2eea14;
        case 0x2eea18u: goto label_2eea18;
        case 0x2eea1cu: goto label_2eea1c;
        case 0x2eea20u: goto label_2eea20;
        case 0x2eea24u: goto label_2eea24;
        case 0x2eea28u: goto label_2eea28;
        case 0x2eea2cu: goto label_2eea2c;
        case 0x2eea30u: goto label_2eea30;
        case 0x2eea34u: goto label_2eea34;
        case 0x2eea38u: goto label_2eea38;
        case 0x2eea3cu: goto label_2eea3c;
        case 0x2eea40u: goto label_2eea40;
        case 0x2eea44u: goto label_2eea44;
        case 0x2eea48u: goto label_2eea48;
        case 0x2eea4cu: goto label_2eea4c;
        case 0x2eea50u: goto label_2eea50;
        case 0x2eea54u: goto label_2eea54;
        case 0x2eea58u: goto label_2eea58;
        case 0x2eea5cu: goto label_2eea5c;
        case 0x2eea60u: goto label_2eea60;
        case 0x2eea64u: goto label_2eea64;
        case 0x2eea68u: goto label_2eea68;
        case 0x2eea6cu: goto label_2eea6c;
        case 0x2eea70u: goto label_2eea70;
        case 0x2eea74u: goto label_2eea74;
        case 0x2eea78u: goto label_2eea78;
        case 0x2eea7cu: goto label_2eea7c;
        case 0x2eea80u: goto label_2eea80;
        case 0x2eea84u: goto label_2eea84;
        case 0x2eea88u: goto label_2eea88;
        case 0x2eea8cu: goto label_2eea8c;
        case 0x2eea90u: goto label_2eea90;
        case 0x2eea94u: goto label_2eea94;
        case 0x2eea98u: goto label_2eea98;
        case 0x2eea9cu: goto label_2eea9c;
        case 0x2eeaa0u: goto label_2eeaa0;
        case 0x2eeaa4u: goto label_2eeaa4;
        case 0x2eeaa8u: goto label_2eeaa8;
        case 0x2eeaacu: goto label_2eeaac;
        case 0x2eeab0u: goto label_2eeab0;
        case 0x2eeab4u: goto label_2eeab4;
        case 0x2eeab8u: goto label_2eeab8;
        case 0x2eeabcu: goto label_2eeabc;
        case 0x2eeac0u: goto label_2eeac0;
        case 0x2eeac4u: goto label_2eeac4;
        case 0x2eeac8u: goto label_2eeac8;
        case 0x2eeaccu: goto label_2eeacc;
        case 0x2eead0u: goto label_2eead0;
        case 0x2eead4u: goto label_2eead4;
        case 0x2eead8u: goto label_2eead8;
        case 0x2eeadcu: goto label_2eeadc;
        case 0x2eeae0u: goto label_2eeae0;
        case 0x2eeae4u: goto label_2eeae4;
        case 0x2eeae8u: goto label_2eeae8;
        case 0x2eeaecu: goto label_2eeaec;
        case 0x2eeaf0u: goto label_2eeaf0;
        case 0x2eeaf4u: goto label_2eeaf4;
        case 0x2eeaf8u: goto label_2eeaf8;
        case 0x2eeafcu: goto label_2eeafc;
        case 0x2eeb00u: goto label_2eeb00;
        case 0x2eeb04u: goto label_2eeb04;
        default: break;
    }

    ctx->pc = 0x2ee898u;

label_2ee898:
    // 0x2ee898: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ee898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ee89c:
    // 0x2ee89c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ee89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2ee8a0:
    // 0x2ee8a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ee8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2ee8a4:
    // 0x2ee8a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ee8a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee8a8:
    // 0x2ee8a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ee8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2ee8ac:
    // 0x2ee8ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ee8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ee8b0:
    // 0x2ee8b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ee8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ee8b4:
    // 0x2ee8b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ee8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ee8b8:
    // 0x2ee8b8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ee8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2ee8bc:
    // 0x2ee8bc: 0x52620001  beql        $s3, $v0, . + 4 + (0x1 << 2)
label_2ee8c0:
    if (ctx->pc == 0x2EE8C0u) {
        ctx->pc = 0x2EE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8BCu;
        // 0x2ee8c0: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8C4u;
        goto label_2ee8c4;
    }
    ctx->pc = 0x2EE8BCu;
    {
        const bool branch_taken_0x2ee8bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee8bc) {
            ctx->pc = 0x2EE8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE8BCu;
            // 0x2ee8c0: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE8C4u;
            goto label_2ee8c4;
        }
    }
    ctx->pc = 0x2EE8C4u;
label_2ee8c4:
    // 0x2ee8c4: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2ee8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ee8c8:
    // 0x2ee8c8: 0xc092974  jal         func_24A5D0
label_2ee8cc:
    if (ctx->pc == 0x2EE8CCu) {
        ctx->pc = 0x2EE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8C8u;
        // 0x2ee8cc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8D0u;
        goto label_2ee8d0;
    }
    ctx->pc = 0x2EE8C8u;
    SET_GPR_U32(ctx, 31, 0x2EE8D0u);
    ctx->pc = 0x2EE8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE8C8u;
    // 0x2ee8cc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D0u, 0x2EE8C8u, 0x2EE8D0u)) {
        return;
    }
    ctx->pc = 0x2EE8D0u;
label_2ee8d0:
    // 0x2ee8d0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ee8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ee8d4:
    // 0x2ee8d4: 0xc092976  jal         func_24A5D8
label_2ee8d8:
    if (ctx->pc == 0x2EE8D8u) {
        ctx->pc = 0x2EE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8D4u;
        // 0x2ee8d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8DCu;
        goto label_2ee8dc;
    }
    ctx->pc = 0x2EE8D4u;
    SET_GPR_U32(ctx, 31, 0x2EE8DCu);
    ctx->pc = 0x2EE8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE8D4u;
    // 0x2ee8d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D8u, 0x2EE8D4u, 0x2EE8DCu)) {
        return;
    }
    ctx->pc = 0x2EE8DCu;
label_2ee8dc:
    // 0x2ee8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ee8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee8e0:
    // 0x2ee8e0: 0x12440064  beq         $s2, $a0, . + 4 + (0x64 << 2)
label_2ee8e4:
    if (ctx->pc == 0x2EE8E4u) {
        ctx->pc = 0x2EE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8E0u;
        // 0x2ee8e4: 0x921023  subu        $v0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8E8u;
        goto label_2ee8e8;
    }
    ctx->pc = 0x2EE8E0u;
    {
        const bool branch_taken_0x2ee8e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8E0u;
        // 0x2ee8e4: 0x921023  subu        $v0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8e0) {
            ctx->pc = 0x2EEA74u;
            goto label_2eea74;
        }
    }
    ctx->pc = 0x2EE8E8u;
label_2ee8e8:
    // 0x2ee8e8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2ee8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2ee8ec:
    // 0x2ee8ec: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_2ee8f0:
    if (ctx->pc == 0x2EE8F0u) {
        ctx->pc = 0x2EE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8ECu;
        // 0x2ee8f0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8F4u;
        goto label_2ee8f4;
    }
    ctx->pc = 0x2EE8ECu;
    {
        const bool branch_taken_0x2ee8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8ECu;
        // 0x2ee8f0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8ec) {
            ctx->pc = 0x2EE988u;
            goto label_2ee988;
        }
    }
    ctx->pc = 0x2EE8F4u;
label_2ee8f4:
    // 0x2ee8f4: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x2ee8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_2ee8f8:
    // 0x2ee8f8: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2ee8fc:
    if (ctx->pc == 0x2EE8FCu) {
        ctx->pc = 0x2EE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8F8u;
        // 0x2ee8fc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE900u;
        goto label_2ee900;
    }
    ctx->pc = 0x2EE8F8u;
    {
        const bool branch_taken_0x2ee8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee8f8) {
            ctx->pc = 0x2EE8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE8F8u;
            // 0x2ee8fc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE974u;
            goto label_2ee974;
        }
    }
    ctx->pc = 0x2EE900u;
label_2ee900:
    // 0x2ee900: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2ee900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_2ee904:
    // 0x2ee904: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_2ee908:
    if (ctx->pc == 0x2EE908u) {
        ctx->pc = 0x2EE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE904u;
        // 0x2ee908: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE90Cu;
        goto label_2ee90c;
    }
    ctx->pc = 0x2EE904u;
    {
        const bool branch_taken_0x2ee904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee904) {
            ctx->pc = 0x2EE908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE904u;
            // 0x2ee908: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE960u;
            goto label_2ee960;
        }
    }
    ctx->pc = 0x2EE90Cu;
label_2ee90c:
    // 0x2ee90c: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x2ee90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_2ee910:
    // 0x2ee910: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_2ee914:
    if (ctx->pc == 0x2EE914u) {
        ctx->pc = 0x2EE914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE910u;
        // 0x2ee914: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE918u;
        goto label_2ee918;
    }
    ctx->pc = 0x2EE910u;
    {
        const bool branch_taken_0x2ee910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee910) {
            ctx->pc = 0x2EE914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE910u;
            // 0x2ee914: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE98Cu;
            goto label_2ee98c;
        }
    }
    ctx->pc = 0x2EE918u;
label_2ee918:
    // 0x2ee918: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ee918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee91c:
    // 0x2ee91c: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
label_2ee920:
    if (ctx->pc == 0x2EE920u) {
        ctx->pc = 0x2EE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE91Cu;
        // 0x2ee920: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE924u;
        goto label_2ee924;
    }
    ctx->pc = 0x2EE91Cu;
    {
        const bool branch_taken_0x2ee91c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE91Cu;
        // 0x2ee920: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee91c) {
            ctx->pc = 0x2EE954u;
            goto label_2ee954;
        }
    }
    ctx->pc = 0x2EE924u;
label_2ee924:
    // 0x2ee924: 0xc09294c  jal         func_24A530
label_2ee928:
    if (ctx->pc == 0x2EE928u) {
        ctx->pc = 0x2EE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE924u;
        // 0x2ee928: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE92Cu;
        goto label_2ee92c;
    }
    ctx->pc = 0x2EE924u;
    SET_GPR_U32(ctx, 31, 0x2EE92Cu);
    ctx->pc = 0x2EE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE924u;
    // 0x2ee928: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x2EE924u, 0x2EE92Cu)) {
        return;
    }
    ctx->pc = 0x2EE92Cu;
label_2ee92c:
    // 0x2ee92c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ee92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ee930:
    // 0x2ee930: 0xc09296e  jal         func_24A5B8
label_2ee934:
    if (ctx->pc == 0x2EE934u) {
        ctx->pc = 0x2EE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE930u;
        // 0x2ee934: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE938u;
        goto label_2ee938;
    }
    ctx->pc = 0x2EE930u;
    SET_GPR_U32(ctx, 31, 0x2EE938u);
    ctx->pc = 0x2EE934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE930u;
    // 0x2ee934: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x2EE930u, 0x2EE938u)) {
        return;
    }
    ctx->pc = 0x2EE938u;
label_2ee938:
    // 0x2ee938: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ee938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee93c:
    // 0x2ee93c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ee93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee940:
    // 0x2ee940: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ee940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ee944:
    // 0x2ee944: 0xc092926  jal         func_24A498
label_2ee948:
    if (ctx->pc == 0x2EE948u) {
        ctx->pc = 0x2EE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE944u;
        // 0x2ee948: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE94Cu;
        goto label_2ee94c;
    }
    ctx->pc = 0x2EE944u;
    SET_GPR_U32(ctx, 31, 0x2EE94Cu);
    ctx->pc = 0x2EE948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE944u;
    // 0x2ee948: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A498u, 0x2EE944u, 0x2EE94Cu)) {
        return;
    }
    ctx->pc = 0x2EE94Cu;
label_2ee94c:
    // 0x2ee94c: 0x10000049  b           . + 4 + (0x49 << 2)
label_2ee950:
    if (ctx->pc == 0x2EE950u) {
        ctx->pc = 0x2EE954u;
        goto label_2ee954;
    }
    ctx->pc = 0x2EE94Cu;
    {
        const bool branch_taken_0x2ee94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee94c) {
            ctx->pc = 0x2EEA74u;
            goto label_2eea74;
        }
    }
    ctx->pc = 0x2EE954u;
label_2ee954:
    // 0x2ee954: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ee954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee958:
    // 0x2ee958: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2ee958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee95c:
    // 0x2ee95c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ee95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ee960:
    // 0x2ee960: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
label_2ee964:
    if (ctx->pc == 0x2EE964u) {
        ctx->pc = 0x2EE968u;
        goto label_2ee968;
    }
    ctx->pc = 0x2EE960u;
    {
        const bool branch_taken_0x2ee960 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee960) {
            ctx->pc = 0x2EE994u;
            goto label_2ee994;
        }
    }
    ctx->pc = 0x2EE968u;
label_2ee968:
    // 0x2ee968: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2ee968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2ee96c:
    // 0x2ee96c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2ee96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2ee970:
    // 0x2ee970: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ee970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ee974:
    // 0x2ee974: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_2ee978:
    if (ctx->pc == 0x2EE978u) {
        ctx->pc = 0x2EE97Cu;
        goto label_2ee97c;
    }
    ctx->pc = 0x2EE974u;
    {
        const bool branch_taken_0x2ee974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee974) {
            ctx->pc = 0x2EE994u;
            goto label_2ee994;
        }
    }
    ctx->pc = 0x2EE97Cu;
label_2ee97c:
    // 0x2ee97c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2ee97cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2ee980:
    // 0x2ee980: 0x1244003c  beq         $s2, $a0, . + 4 + (0x3C << 2)
label_2ee984:
    if (ctx->pc == 0x2EE984u) {
        ctx->pc = 0x2EE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE980u;
        // 0x2ee984: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE988u;
        goto label_2ee988;
    }
    ctx->pc = 0x2EE980u;
    {
        const bool branch_taken_0x2ee980 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE980u;
        // 0x2ee984: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee980) {
            ctx->pc = 0x2EEA74u;
            goto label_2eea74;
        }
    }
    ctx->pc = 0x2EE988u;
label_2ee988:
    // 0x2ee988: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ee988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ee98c:
    // 0x2ee98c: 0x5662000d  bnel        $s3, $v0, . + 4 + (0xD << 2)
label_2ee990:
    if (ctx->pc == 0x2EE990u) {
        ctx->pc = 0x2EE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE98Cu;
        // 0x2ee990: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE994u;
        goto label_2ee994;
    }
    ctx->pc = 0x2EE98Cu;
    {
        const bool branch_taken_0x2ee98c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee98c) {
            ctx->pc = 0x2EE990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE98Cu;
            // 0x2ee990: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE9C4u;
            goto label_2ee9c4;
        }
    }
    ctx->pc = 0x2EE994u;
label_2ee994:
    // 0x2ee994: 0xc09294c  jal         func_24A530
label_2ee998:
    if (ctx->pc == 0x2EE998u) {
        ctx->pc = 0x2EE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE994u;
        // 0x2ee998: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE99Cu;
        goto label_2ee99c;
    }
    ctx->pc = 0x2EE994u;
    SET_GPR_U32(ctx, 31, 0x2EE99Cu);
    ctx->pc = 0x2EE998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE994u;
    // 0x2ee998: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x2EE994u, 0x2EE99Cu)) {
        return;
    }
    ctx->pc = 0x2EE99Cu;
label_2ee99c:
    // 0x2ee99c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ee99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ee9a0:
    // 0x2ee9a0: 0xc09296e  jal         func_24A5B8
label_2ee9a4:
    if (ctx->pc == 0x2EE9A4u) {
        ctx->pc = 0x2EE9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9A0u;
        // 0x2ee9a4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE9A8u;
        goto label_2ee9a8;
    }
    ctx->pc = 0x2EE9A0u;
    SET_GPR_U32(ctx, 31, 0x2EE9A8u);
    ctx->pc = 0x2EE9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9A0u;
    // 0x2ee9a4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x2EE9A0u, 0x2EE9A8u)) {
        return;
    }
    ctx->pc = 0x2EE9A8u;
label_2ee9a8:
    // 0x2ee9a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ee9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee9ac:
    // 0x2ee9ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ee9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee9b0:
    // 0x2ee9b0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ee9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ee9b4:
    // 0x2ee9b4: 0xc092926  jal         func_24A498
label_2ee9b8:
    if (ctx->pc == 0x2EE9B8u) {
        ctx->pc = 0x2EE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9B4u;
        // 0x2ee9b8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE9BCu;
        goto label_2ee9bc;
    }
    ctx->pc = 0x2EE9B4u;
    SET_GPR_U32(ctx, 31, 0x2EE9BCu);
    ctx->pc = 0x2EE9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9B4u;
    // 0x2ee9b8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A498u, 0x2EE9B4u, 0x2EE9BCu)) {
        return;
    }
    ctx->pc = 0x2EE9BCu;
label_2ee9bc:
    // 0x2ee9bc: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2ee9c0:
    if (ctx->pc == 0x2EE9C0u) {
        ctx->pc = 0x2EE9C4u;
        goto label_2ee9c4;
    }
    ctx->pc = 0x2EE9BCu;
    {
        const bool branch_taken_0x2ee9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee9bc) {
            ctx->pc = 0x2EEA74u;
            goto label_2eea74;
        }
    }
    ctx->pc = 0x2EE9C4u;
label_2ee9c4:
    // 0x2ee9c4: 0x5662000d  bnel        $s3, $v0, . + 4 + (0xD << 2)
label_2ee9c8:
    if (ctx->pc == 0x2EE9C8u) {
        ctx->pc = 0x2EE9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9C4u;
        // 0x2ee9c8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE9CCu;
        goto label_2ee9cc;
    }
    ctx->pc = 0x2EE9C4u;
    {
        const bool branch_taken_0x2ee9c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee9c4) {
            ctx->pc = 0x2EE9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE9C4u;
            // 0x2ee9c8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE9FCu;
            goto label_2ee9fc;
        }
    }
    ctx->pc = 0x2EE9CCu;
label_2ee9cc:
    // 0x2ee9cc: 0xc09294c  jal         func_24A530
label_2ee9d0:
    if (ctx->pc == 0x2EE9D0u) {
        ctx->pc = 0x2EE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9CCu;
        // 0x2ee9d0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE9D4u;
        goto label_2ee9d4;
    }
    ctx->pc = 0x2EE9CCu;
    SET_GPR_U32(ctx, 31, 0x2EE9D4u);
    ctx->pc = 0x2EE9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9CCu;
    // 0x2ee9d0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x2EE9CCu, 0x2EE9D4u)) {
        return;
    }
    ctx->pc = 0x2EE9D4u;
label_2ee9d4:
    // 0x2ee9d4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ee9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ee9d8:
    // 0x2ee9d8: 0xc09296e  jal         func_24A5B8
label_2ee9dc:
    if (ctx->pc == 0x2EE9DCu) {
        ctx->pc = 0x2EE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9D8u;
        // 0x2ee9dc: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE9E0u;
        goto label_2ee9e0;
    }
    ctx->pc = 0x2EE9D8u;
    SET_GPR_U32(ctx, 31, 0x2EE9E0u);
    ctx->pc = 0x2EE9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9D8u;
    // 0x2ee9dc: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x2EE9D8u, 0x2EE9E0u)) {
        return;
    }
    ctx->pc = 0x2EE9E0u;
label_2ee9e0:
    // 0x2ee9e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ee9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee9e4:
    // 0x2ee9e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ee9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee9e8:
    // 0x2ee9e8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ee9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ee9ec:
    // 0x2ee9ec: 0xc092926  jal         func_24A498
label_2ee9f0:
    if (ctx->pc == 0x2EE9F0u) {
        ctx->pc = 0x2EE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9ECu;
        // 0x2ee9f0: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE9F4u;
        goto label_2ee9f4;
    }
    ctx->pc = 0x2EE9ECu;
    SET_GPR_U32(ctx, 31, 0x2EE9F4u);
    ctx->pc = 0x2EE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9ECu;
    // 0x2ee9f0: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A498u, 0x2EE9ECu, 0x2EE9F4u)) {
        return;
    }
    ctx->pc = 0x2EE9F4u;
label_2ee9f4:
    // 0x2ee9f4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2ee9f8:
    if (ctx->pc == 0x2EE9F8u) {
        ctx->pc = 0x2EE9FCu;
        goto label_2ee9fc;
    }
    ctx->pc = 0x2EE9F4u;
    {
        const bool branch_taken_0x2ee9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee9f4) {
            ctx->pc = 0x2EEA74u;
            goto label_2eea74;
        }
    }
    ctx->pc = 0x2EE9FCu;
label_2ee9fc:
    // 0x2ee9fc: 0x5662000d  bnel        $s3, $v0, . + 4 + (0xD << 2)
label_2eea00:
    if (ctx->pc == 0x2EEA00u) {
        ctx->pc = 0x2EEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9FCu;
        // 0x2eea00: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA04u;
        goto label_2eea04;
    }
    ctx->pc = 0x2EE9FCu;
    {
        const bool branch_taken_0x2ee9fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee9fc) {
            ctx->pc = 0x2EEA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE9FCu;
            // 0x2eea00: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA34u;
            goto label_2eea34;
        }
    }
    ctx->pc = 0x2EEA04u;
label_2eea04:
    // 0x2eea04: 0xc09294c  jal         func_24A530
label_2eea08:
    if (ctx->pc == 0x2EEA08u) {
        ctx->pc = 0x2EEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA04u;
        // 0x2eea08: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA0Cu;
        goto label_2eea0c;
    }
    ctx->pc = 0x2EEA04u;
    SET_GPR_U32(ctx, 31, 0x2EEA0Cu);
    ctx->pc = 0x2EEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA04u;
    // 0x2eea08: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x2EEA04u, 0x2EEA0Cu)) {
        return;
    }
    ctx->pc = 0x2EEA0Cu;
label_2eea0c:
    // 0x2eea0c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2eea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2eea10:
    // 0x2eea10: 0xc09296e  jal         func_24A5B8
label_2eea14:
    if (ctx->pc == 0x2EEA14u) {
        ctx->pc = 0x2EEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA10u;
        // 0x2eea14: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA18u;
        goto label_2eea18;
    }
    ctx->pc = 0x2EEA10u;
    SET_GPR_U32(ctx, 31, 0x2EEA18u);
    ctx->pc = 0x2EEA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA10u;
    // 0x2eea14: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x2EEA10u, 0x2EEA18u)) {
        return;
    }
    ctx->pc = 0x2EEA18u;
label_2eea18:
    // 0x2eea18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2eea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2eea1c:
    // 0x2eea1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eea20:
    // 0x2eea20: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2eea20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2eea24:
    // 0x2eea24: 0xc092926  jal         func_24A498
label_2eea28:
    if (ctx->pc == 0x2EEA28u) {
        ctx->pc = 0x2EEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA24u;
        // 0x2eea28: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA2Cu;
        goto label_2eea2c;
    }
    ctx->pc = 0x2EEA24u;
    SET_GPR_U32(ctx, 31, 0x2EEA2Cu);
    ctx->pc = 0x2EEA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA24u;
    // 0x2eea28: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A498u, 0x2EEA24u, 0x2EEA2Cu)) {
        return;
    }
    ctx->pc = 0x2EEA2Cu;
label_2eea2c:
    // 0x2eea2c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2eea30:
    if (ctx->pc == 0x2EEA30u) {
        ctx->pc = 0x2EEA34u;
        goto label_2eea34;
    }
    ctx->pc = 0x2EEA2Cu;
    {
        const bool branch_taken_0x2eea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eea2c) {
            ctx->pc = 0x2EEA74u;
            goto label_2eea74;
        }
    }
    ctx->pc = 0x2EEA34u;
label_2eea34:
    // 0x2eea34: 0x5662000d  bnel        $s3, $v0, . + 4 + (0xD << 2)
label_2eea38:
    if (ctx->pc == 0x2EEA38u) {
        ctx->pc = 0x2EEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA34u;
        // 0x2eea38: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA3Cu;
        goto label_2eea3c;
    }
    ctx->pc = 0x2EEA34u;
    {
        const bool branch_taken_0x2eea34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eea34) {
            ctx->pc = 0x2EEA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEA34u;
            // 0x2eea38: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA6Cu;
            goto label_2eea6c;
        }
    }
    ctx->pc = 0x2EEA3Cu;
label_2eea3c:
    // 0x2eea3c: 0xc09294c  jal         func_24A530
label_2eea40:
    if (ctx->pc == 0x2EEA40u) {
        ctx->pc = 0x2EEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA3Cu;
        // 0x2eea40: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA44u;
        goto label_2eea44;
    }
    ctx->pc = 0x2EEA3Cu;
    SET_GPR_U32(ctx, 31, 0x2EEA44u);
    ctx->pc = 0x2EEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA3Cu;
    // 0x2eea40: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x2EEA3Cu, 0x2EEA44u)) {
        return;
    }
    ctx->pc = 0x2EEA44u;
label_2eea44:
    // 0x2eea44: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2eea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2eea48:
    // 0x2eea48: 0xc09296e  jal         func_24A5B8
label_2eea4c:
    if (ctx->pc == 0x2EEA4Cu) {
        ctx->pc = 0x2EEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA48u;
        // 0x2eea4c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA50u;
        goto label_2eea50;
    }
    ctx->pc = 0x2EEA48u;
    SET_GPR_U32(ctx, 31, 0x2EEA50u);
    ctx->pc = 0x2EEA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA48u;
    // 0x2eea4c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x2EEA48u, 0x2EEA50u)) {
        return;
    }
    ctx->pc = 0x2EEA50u;
label_2eea50:
    // 0x2eea50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2eea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2eea54:
    // 0x2eea54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eea58:
    // 0x2eea58: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2eea58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2eea5c:
    // 0x2eea5c: 0xc092926  jal         func_24A498
label_2eea60:
    if (ctx->pc == 0x2EEA60u) {
        ctx->pc = 0x2EEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA5Cu;
        // 0x2eea60: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA64u;
        goto label_2eea64;
    }
    ctx->pc = 0x2EEA5Cu;
    SET_GPR_U32(ctx, 31, 0x2EEA64u);
    ctx->pc = 0x2EEA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA5Cu;
    // 0x2eea60: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A498u, 0x2EEA5Cu, 0x2EEA64u)) {
        return;
    }
    ctx->pc = 0x2EEA64u;
label_2eea64:
    // 0x2eea64: 0x10000003  b           . + 4 + (0x3 << 2)
label_2eea68:
    if (ctx->pc == 0x2EEA68u) {
        ctx->pc = 0x2EEA6Cu;
        goto label_2eea6c;
    }
    ctx->pc = 0x2EEA64u;
    {
        const bool branch_taken_0x2eea64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eea64) {
            ctx->pc = 0x2EEA74u;
            goto label_2eea74;
        }
    }
    ctx->pc = 0x2EEA6Cu;
label_2eea6c:
    // 0x2eea6c: 0x1644ffc6  bne         $s2, $a0, . + 4 + (-0x3A << 2)
label_2eea70:
    if (ctx->pc == 0x2EEA70u) {
        ctx->pc = 0x2EEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA6Cu;
        // 0x2eea70: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA74u;
        goto label_2eea74;
    }
    ctx->pc = 0x2EEA6Cu;
    {
        const bool branch_taken_0x2eea6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA6Cu;
        // 0x2eea70: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea6c) {
            ctx->pc = 0x2EE988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee988;
        }
    }
    ctx->pc = 0x2EEA74u;
label_2eea74:
    // 0x2eea74: 0xc092976  jal         func_24A5D8
label_2eea78:
    if (ctx->pc == 0x2EEA78u) {
        ctx->pc = 0x2EEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA74u;
        // 0x2eea78: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA7Cu;
        goto label_2eea7c;
    }
    ctx->pc = 0x2EEA74u;
    SET_GPR_U32(ctx, 31, 0x2EEA7Cu);
    ctx->pc = 0x2EEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA74u;
    // 0x2eea78: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D8u, 0x2EEA74u, 0x2EEA7Cu)) {
        return;
    }
    ctx->pc = 0x2EEA7Cu;
label_2eea7c:
    // 0x2eea7c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2eea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2eea80:
    // 0x2eea80: 0xc092974  jal         func_24A5D0
label_2eea84:
    if (ctx->pc == 0x2EEA84u) {
        ctx->pc = 0x2EEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA80u;
        // 0x2eea84: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA88u;
        goto label_2eea88;
    }
    ctx->pc = 0x2EEA80u;
    SET_GPR_U32(ctx, 31, 0x2EEA88u);
    ctx->pc = 0x2EEA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEA80u;
    // 0x2eea84: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D0u, 0x2EEA80u, 0x2EEA88u)) {
        return;
    }
    ctx->pc = 0x2EEA88u;
label_2eea88:
    // 0x2eea88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2eea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2eea8c:
    // 0x2eea8c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2eea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2eea90:
    // 0x2eea90: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_2eea94:
    if (ctx->pc == 0x2EEA94u) {
        ctx->pc = 0x2EEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA90u;
        // 0x2eea94: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEA98u;
        goto label_2eea98;
    }
    ctx->pc = 0x2EEA90u;
    {
        const bool branch_taken_0x2eea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA90u;
        // 0x2eea94: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea90) {
            ctx->pc = 0x2EEAC4u;
            goto label_2eeac4;
        }
    }
    ctx->pc = 0x2EEA98u;
label_2eea98:
    // 0x2eea98: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2eea98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2eea9c:
    // 0x2eea9c: 0x0  nop
    ctx->pc = 0x2eea9cu;
    // NOP
label_2eeaa0:
    // 0x2eeaa0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2eeaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2eeaa4:
    // 0x2eeaa4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2eeaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2eeaa8:
    // 0x2eeaa8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2eeaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2eeaac:
    // 0x2eeaac: 0x40f809  jalr        $v0
label_2eeab0:
    if (ctx->pc == 0x2EEAB0u) {
        ctx->pc = 0x2EEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAACu;
        // 0x2eeab0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAB4u;
        goto label_2eeab4;
    }
    ctx->pc = 0x2EEAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EEAB4u);
        ctx->pc = 0x2EEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAACu;
        // 0x2eeab0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEAACu, 0x2EEAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEAB4u;
label_2eeab4:
    // 0x2eeab4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2eeab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2eeab8:
    // 0x2eeab8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2eeab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2eeabc:
    // 0x2eeabc: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
label_2eeac0:
    if (ctx->pc == 0x2EEAC0u) {
        ctx->pc = 0x2EEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEABCu;
        // 0x2eeac0: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAC4u;
        goto label_2eeac4;
    }
    ctx->pc = 0x2EEABCu;
    {
        const bool branch_taken_0x2eeabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eeabc) {
            ctx->pc = 0x2EEAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEABCu;
            // 0x2eeac0: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eeaa0;
        }
    }
    ctx->pc = 0x2EEAC4u;
label_2eeac4:
    // 0x2eeac4: 0xc092932  jal         func_24A4C8
label_2eeac8:
    if (ctx->pc == 0x2EEAC8u) {
        ctx->pc = 0x2EEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAC4u;
        // 0x2eeac8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEACCu;
        goto label_2eeacc;
    }
    ctx->pc = 0x2EEAC4u;
    SET_GPR_U32(ctx, 31, 0x2EEACCu);
    ctx->pc = 0x2EEAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEAC4u;
    // 0x2eeac8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x2EEAC4u, 0x2EEACCu)) {
        return;
    }
    ctx->pc = 0x2EEACCu;
label_2eeacc:
    // 0x2eeacc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2eeaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2eead0:
    // 0x2eead0: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2eead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2eead4:
    // 0x2eead4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2eead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2eead8:
    // 0x2eead8: 0x40f809  jalr        $v0
label_2eeadc:
    if (ctx->pc == 0x2EEADCu) {
        ctx->pc = 0x2EEADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAD8u;
        // 0x2eeadc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEAE0u;
        goto label_2eeae0;
    }
    ctx->pc = 0x2EEAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EEAE0u);
        ctx->pc = 0x2EEADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAD8u;
        // 0x2eeadc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEAD8u, 0x2EEAE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEAE0u;
label_2eeae0:
    // 0x2eeae0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2eeae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2eeae4:
    // 0x2eeae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eeae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eeae8:
    // 0x2eeae8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2eeae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2eeaec:
    // 0x2eeaec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2eeaecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2eeaf0:
    // 0x2eeaf0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2eeaf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2eeaf4:
    // 0x2eeaf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eeaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2eeaf8:
    // 0x2eeaf8: 0x3e00008  jr          $ra
label_2eeafc:
    if (ctx->pc == 0x2EEAFCu) {
        ctx->pc = 0x2EEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAF8u;
        // 0x2eeafc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB00u;
        goto label_2eeb00;
    }
    ctx->pc = 0x2EEAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAF8u;
        // 0x2eeafc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEB00u;
label_2eeb00:
    // 0x2eeb00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2eeb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2eeb04:
    // 0x2eeb04: 0x0  nop
    ctx->pc = 0x2eeb04u;
    // NOP
    ctx->pc = 0x2eeb08u;
}
