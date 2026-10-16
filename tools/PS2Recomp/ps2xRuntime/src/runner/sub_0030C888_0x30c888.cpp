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

// Function: sub_0030C888
// Address: 0x30c888 - 0x30cd58
void sub_0030C888_0x30c888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C888_0x30c888");
#endif

    switch (ctx->pc) {
        case 0x30c8b4u: goto label_30c8b4;
        case 0x30c8e4u: goto label_30c8e4;
        case 0x30c910u: goto label_30c910;
        case 0x30c950u: goto label_30c950;
        case 0x30c97cu: goto label_30c97c;
        case 0x30c9d0u: goto label_30c9d0;
        case 0x30c9fcu: goto label_30c9fc;
        case 0x30ca58u: goto label_30ca58;
        case 0x30ca84u: goto label_30ca84;
        case 0x30cad8u: goto label_30cad8;
        case 0x30cb04u: goto label_30cb04;
        case 0x30cb60u: goto label_30cb60;
        case 0x30cb8cu: goto label_30cb8c;
        case 0x30cbc8u: goto label_30cbc8;
        case 0x30cbe0u: goto label_30cbe0;
        case 0x30cc0cu: goto label_30cc0c;
        case 0x30cc48u: goto label_30cc48;
        case 0x30cc58u: goto label_30cc58;
        case 0x30cc68u: goto label_30cc68;
        case 0x30cc78u: goto label_30cc78;
        case 0x30cc90u: goto label_30cc90;
        case 0x30ccbcu: goto label_30ccbc;
        case 0x30ccf8u: goto label_30ccf8;
        case 0x30cd08u: goto label_30cd08;
        case 0x30cd18u: goto label_30cd18;
        default: break;
    }

    ctx->pc = 0x30c888u;

    // 0x30c888: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30c888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30c88c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x30c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x30c890: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x30c890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x30c894: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30c894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c898: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x30c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x30c89c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30c89cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c8a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x30c8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x30c8a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c8a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c8ac: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C8ACu;
    SET_GPR_U32(ctx, 31, 0x30C8B4u);
    ctx->pc = 0x30C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C8ACu;
    // 0x30c8b0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C8ACu, 0x30C8B4u)) {
        return;
    }
    ctx->pc = 0x30C8B4u;
label_30c8b4:
    // 0x30c8b4: 0x1040011a  beqz        $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x30C8B4u;
    {
        const bool branch_taken_0x30c8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8B4u;
        // 0x30c8b8: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8b4) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30C8BCu;
    // 0x30c8bc: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x30c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x30c8c0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c8c4: 0x14430116  bne         $v0, $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x30C8C4u;
    {
        const bool branch_taken_0x30c8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8C4u;
        // 0x30c8c8: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8c4) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30C8CCu;
    // 0x30c8cc: 0x14400114  bnez        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x30C8CCu;
    {
        const bool branch_taken_0x30c8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8CCu;
        // 0x30c8d0: 0x2651003c  addiu       $s1, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8cc) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30C8D4u;
    // 0x30c8d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c8d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c8dc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C8DCu;
    SET_GPR_U32(ctx, 31, 0x30C8E4u);
    ctx->pc = 0x30C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C8DCu;
    // 0x30c8e0: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C8DCu, 0x30C8E4u)) {
        return;
    }
    ctx->pc = 0x30C8E4u;
label_30c8e4:
    // 0x30c8e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30C8E4u;
    {
        const bool branch_taken_0x30c8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8E4u;
        // 0x30c8e8: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8e4) {
            ctx->pc = 0x30C918u;
            goto label_30c918;
        }
    }
    ctx->pc = 0x30C8ECu;
    // 0x30c8ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c8f0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c8f4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30C8F4u;
    {
        const bool branch_taken_0x30c8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8F4u;
        // 0x30c8f8: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8f4) {
            ctx->pc = 0x30C918u;
            goto label_30c918;
        }
    }
    ctx->pc = 0x30C8FCu;
    // 0x30c8fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C8FCu;
    {
        const bool branch_taken_0x30c8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8FCu;
        // 0x30c900: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8fc) {
            ctx->pc = 0x30C918u;
            goto label_30c918;
        }
    }
    ctx->pc = 0x30C904u;
    // 0x30c904: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c908: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C908u;
    SET_GPR_U32(ctx, 31, 0x30C910u);
    ctx->pc = 0x30C90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C908u;
    // 0x30c90c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C908u, 0x30C910u)) {
        return;
    }
    ctx->pc = 0x30C910u;
label_30c910:
    // 0x30c910: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C910u;
    {
        const bool branch_taken_0x30c910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c910) {
            ctx->pc = 0x30C920u;
            goto label_30c920;
        }
    }
    ctx->pc = 0x30C918u;
label_30c918:
    // 0x30c918: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C918u;
    {
        const bool branch_taken_0x30c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C918u;
        // 0x30c91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c918) {
            ctx->pc = 0x30C938u;
            goto label_30c938;
        }
    }
    ctx->pc = 0x30C920u;
label_30c920:
    // 0x30c920: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C920u;
    {
        const bool branch_taken_0x30c920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C920u;
        // 0x30c924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c920) {
            ctx->pc = 0x30C938u;
            goto label_30c938;
        }
    }
    ctx->pc = 0x30C928u;
    // 0x30c928: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c92c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c930: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c938:
    // 0x30c938: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x30C938u;
    {
        const bool branch_taken_0x30c938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C938u;
        // 0x30c93c: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c938) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30C940u;
    // 0x30c940: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c944: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c948: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C948u;
    SET_GPR_U32(ctx, 31, 0x30C950u);
    ctx->pc = 0x30C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C948u;
    // 0x30c94c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C948u, 0x30C950u)) {
        return;
    }
    ctx->pc = 0x30C950u;
label_30c950:
    // 0x30c950: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C950u;
    {
        const bool branch_taken_0x30c950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C950u;
        // 0x30c954: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c950) {
            ctx->pc = 0x30C988u;
            goto label_30c988;
        }
    }
    ctx->pc = 0x30C958u;
    // 0x30c958: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30c958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30c95c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c960: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C960u;
    {
        const bool branch_taken_0x30c960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C960u;
        // 0x30c964: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c960) {
            ctx->pc = 0x30C988u;
            goto label_30c988;
        }
    }
    ctx->pc = 0x30C968u;
    // 0x30c968: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C968u;
    {
        const bool branch_taken_0x30c968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C968u;
        // 0x30c96c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c968) {
            ctx->pc = 0x30C988u;
            goto label_30c988;
        }
    }
    ctx->pc = 0x30C970u;
    // 0x30c970: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c974: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C974u;
    SET_GPR_U32(ctx, 31, 0x30C97Cu);
    ctx->pc = 0x30C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C974u;
    // 0x30c978: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C974u, 0x30C97Cu)) {
        return;
    }
    ctx->pc = 0x30C97Cu;
label_30c97c:
    // 0x30c97c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C97Cu;
    {
        const bool branch_taken_0x30c97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C97Cu;
        // 0x30c980: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c97c) {
            ctx->pc = 0x30C990u;
            goto label_30c990;
        }
    }
    ctx->pc = 0x30C984u;
    // 0x30c984: 0x0  nop
    ctx->pc = 0x30c984u;
    // NOP
label_30c988:
    // 0x30c988: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30C988u;
    {
        const bool branch_taken_0x30c988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C988u;
        // 0x30c98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c988) {
            ctx->pc = 0x30C9B8u;
            goto label_30c9b8;
        }
    }
    ctx->pc = 0x30C990u;
label_30c990:
    // 0x30c990: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x30c990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c994: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x30c994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x30c998: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x30c998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x30c99c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x30c99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c9a0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C9A0u;
    {
        const bool branch_taken_0x30c9a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9A0u;
        // 0x30c9a4: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9a0) {
            ctx->pc = 0x30C9B4u;
            goto label_30c9b4;
        }
    }
    ctx->pc = 0x30C9A8u;
    // 0x30c9a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c9ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30c9b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30c9b4:
    // 0x30c9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c9b8:
    // 0x30c9b8: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x30C9B8u;
    {
        const bool branch_taken_0x30c9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9B8u;
        // 0x30c9bc: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9b8) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30C9C0u;
    // 0x30c9c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c9c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c9c8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C9C8u;
    SET_GPR_U32(ctx, 31, 0x30C9D0u);
    ctx->pc = 0x30C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C9C8u;
    // 0x30c9cc: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C9C8u, 0x30C9D0u)) {
        return;
    }
    ctx->pc = 0x30C9D0u;
label_30c9d0:
    // 0x30c9d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C9D0u;
    {
        const bool branch_taken_0x30c9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9D0u;
        // 0x30c9d4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9d0) {
            ctx->pc = 0x30CA08u;
            goto label_30ca08;
        }
    }
    ctx->pc = 0x30C9D8u;
    // 0x30c9d8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x30c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30c9dc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c9e0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C9E0u;
    {
        const bool branch_taken_0x30c9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9E0u;
        // 0x30c9e4: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9e0) {
            ctx->pc = 0x30CA08u;
            goto label_30ca08;
        }
    }
    ctx->pc = 0x30C9E8u;
    // 0x30c9e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C9E8u;
    {
        const bool branch_taken_0x30c9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9E8u;
        // 0x30c9ec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9e8) {
            ctx->pc = 0x30CA08u;
            goto label_30ca08;
        }
    }
    ctx->pc = 0x30C9F0u;
    // 0x30c9f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c9f4: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C9F4u;
    SET_GPR_U32(ctx, 31, 0x30C9FCu);
    ctx->pc = 0x30C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C9F4u;
    // 0x30c9f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C9F4u, 0x30C9FCu)) {
        return;
    }
    ctx->pc = 0x30C9FCu;
label_30c9fc:
    // 0x30c9fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C9FCu;
    {
        const bool branch_taken_0x30c9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9FCu;
        // 0x30ca00: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9fc) {
            ctx->pc = 0x30CA10u;
            goto label_30ca10;
        }
    }
    ctx->pc = 0x30CA04u;
    // 0x30ca04: 0x0  nop
    ctx->pc = 0x30ca04u;
    // NOP
label_30ca08:
    // 0x30ca08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30CA08u;
    {
        const bool branch_taken_0x30ca08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA08u;
        // 0x30ca0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca08) {
            ctx->pc = 0x30CA40u;
            goto label_30ca40;
        }
    }
    ctx->pc = 0x30CA10u;
label_30ca10:
    // 0x30ca10: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x30ca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ca14: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x30ca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x30ca18: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x30ca18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x30ca1c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x30ca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ca20: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x30ca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x30ca24: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x30ca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ca28: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CA28u;
    {
        const bool branch_taken_0x30ca28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA28u;
        // 0x30ca2c: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca28) {
            ctx->pc = 0x30CA3Cu;
            goto label_30ca3c;
        }
    }
    ctx->pc = 0x30CA30u;
    // 0x30ca30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ca34: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x30ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x30ca38: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30ca3c:
    // 0x30ca3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ca40:
    // 0x30ca40: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x30CA40u;
    {
        const bool branch_taken_0x30ca40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA40u;
        // 0x30ca44: 0x26510030  addiu       $s1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca40) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CA48u;
    // 0x30ca48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ca4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30ca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30ca50: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CA50u;
    SET_GPR_U32(ctx, 31, 0x30CA58u);
    ctx->pc = 0x30CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CA50u;
    // 0x30ca54: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CA50u, 0x30CA58u)) {
        return;
    }
    ctx->pc = 0x30CA58u;
label_30ca58:
    // 0x30ca58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CA58u;
    {
        const bool branch_taken_0x30ca58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA58u;
        // 0x30ca5c: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca58) {
            ctx->pc = 0x30CA90u;
            goto label_30ca90;
        }
    }
    ctx->pc = 0x30CA60u;
    // 0x30ca60: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30ca64: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30ca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30ca68: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CA68u;
    {
        const bool branch_taken_0x30ca68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA68u;
        // 0x30ca6c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca68) {
            ctx->pc = 0x30CA90u;
            goto label_30ca90;
        }
    }
    ctx->pc = 0x30CA70u;
    // 0x30ca70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CA70u;
    {
        const bool branch_taken_0x30ca70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA70u;
        // 0x30ca74: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca70) {
            ctx->pc = 0x30CA90u;
            goto label_30ca90;
        }
    }
    ctx->pc = 0x30CA78u;
    // 0x30ca78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ca7c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30CA7Cu;
    SET_GPR_U32(ctx, 31, 0x30CA84u);
    ctx->pc = 0x30CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CA7Cu;
    // 0x30ca80: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30CA7Cu, 0x30CA84u)) {
        return;
    }
    ctx->pc = 0x30CA84u;
label_30ca84:
    // 0x30ca84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CA84u;
    {
        const bool branch_taken_0x30ca84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA84u;
        // 0x30ca88: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca84) {
            ctx->pc = 0x30CA98u;
            goto label_30ca98;
        }
    }
    ctx->pc = 0x30CA8Cu;
    // 0x30ca8c: 0x0  nop
    ctx->pc = 0x30ca8cu;
    // NOP
label_30ca90:
    // 0x30ca90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30CA90u;
    {
        const bool branch_taken_0x30ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA90u;
        // 0x30ca94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca90) {
            ctx->pc = 0x30CAC0u;
            goto label_30cac0;
        }
    }
    ctx->pc = 0x30CA98u;
label_30ca98:
    // 0x30ca98: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x30ca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ca9c: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x30ca9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x30caa0: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x30caa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x30caa4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x30caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30caa8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CAA8u;
    {
        const bool branch_taken_0x30caa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAA8u;
        // 0x30caac: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30caa8) {
            ctx->pc = 0x30CABCu;
            goto label_30cabc;
        }
    }
    ctx->pc = 0x30CAB0u;
    // 0x30cab0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30cab4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30cab8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30cabc:
    // 0x30cabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30cac0:
    // 0x30cac0: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x30CAC0u;
    {
        const bool branch_taken_0x30cac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAC0u;
        // 0x30cac4: 0x26510020  addiu       $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cac0) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CAC8u;
    // 0x30cac8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30cacc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30caccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30cad0: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CAD0u;
    SET_GPR_U32(ctx, 31, 0x30CAD8u);
    ctx->pc = 0x30CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CAD0u;
    // 0x30cad4: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CAD0u, 0x30CAD8u)) {
        return;
    }
    ctx->pc = 0x30CAD8u;
label_30cad8:
    // 0x30cad8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CAD8u;
    {
        const bool branch_taken_0x30cad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAD8u;
        // 0x30cadc: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cad8) {
            ctx->pc = 0x30CB10u;
            goto label_30cb10;
        }
    }
    ctx->pc = 0x30CAE0u;
    // 0x30cae0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x30cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30cae4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30cae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30cae8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CAE8u;
    {
        const bool branch_taken_0x30cae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAE8u;
        // 0x30caec: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cae8) {
            ctx->pc = 0x30CB10u;
            goto label_30cb10;
        }
    }
    ctx->pc = 0x30CAF0u;
    // 0x30caf0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CAF0u;
    {
        const bool branch_taken_0x30caf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAF0u;
        // 0x30caf4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30caf0) {
            ctx->pc = 0x30CB10u;
            goto label_30cb10;
        }
    }
    ctx->pc = 0x30CAF8u;
    // 0x30caf8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30cafc: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30CAFCu;
    SET_GPR_U32(ctx, 31, 0x30CB04u);
    ctx->pc = 0x30CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CAFCu;
    // 0x30cb00: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30CAFCu, 0x30CB04u)) {
        return;
    }
    ctx->pc = 0x30CB04u;
label_30cb04:
    // 0x30cb04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CB04u;
    {
        const bool branch_taken_0x30cb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB04u;
        // 0x30cb08: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb04) {
            ctx->pc = 0x30CB18u;
            goto label_30cb18;
        }
    }
    ctx->pc = 0x30CB0Cu;
    // 0x30cb0c: 0x0  nop
    ctx->pc = 0x30cb0cu;
    // NOP
label_30cb10:
    // 0x30cb10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30CB10u;
    {
        const bool branch_taken_0x30cb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB10u;
        // 0x30cb14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb10) {
            ctx->pc = 0x30CB48u;
            goto label_30cb48;
        }
    }
    ctx->pc = 0x30CB18u;
label_30cb18:
    // 0x30cb18: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x30cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cb1c: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x30cb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x30cb20: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x30cb20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x30cb24: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x30cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cb28: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x30cb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x30cb2c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x30cb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cb30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CB30u;
    {
        const bool branch_taken_0x30cb30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB30u;
        // 0x30cb34: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb30) {
            ctx->pc = 0x30CB44u;
            goto label_30cb44;
        }
    }
    ctx->pc = 0x30CB38u;
    // 0x30cb38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30cb3c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x30cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x30cb40: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30cb44:
    // 0x30cb44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30cb48:
    // 0x30cb48: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x30CB48u;
    {
        const bool branch_taken_0x30cb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB48u;
        // 0x30cb4c: 0x26510040  addiu       $s1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb48) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CB50u;
    // 0x30cb50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30cb54: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30cb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30cb58: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CB58u;
    SET_GPR_U32(ctx, 31, 0x30CB60u);
    ctx->pc = 0x30CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB58u;
    // 0x30cb5c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CB58u, 0x30CB60u)) {
        return;
    }
    ctx->pc = 0x30CB60u;
label_30cb60:
    // 0x30cb60: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CB60u;
    {
        const bool branch_taken_0x30cb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB60u;
        // 0x30cb64: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb60) {
            ctx->pc = 0x30CB98u;
            goto label_30cb98;
        }
    }
    ctx->pc = 0x30CB68u;
    // 0x30cb68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30cb6c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30cb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30cb70: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CB70u;
    {
        const bool branch_taken_0x30cb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB70u;
        // 0x30cb74: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb70) {
            ctx->pc = 0x30CB98u;
            goto label_30cb98;
        }
    }
    ctx->pc = 0x30CB78u;
    // 0x30cb78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CB78u;
    {
        const bool branch_taken_0x30cb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB78u;
        // 0x30cb7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb78) {
            ctx->pc = 0x30CB98u;
            goto label_30cb98;
        }
    }
    ctx->pc = 0x30CB80u;
    // 0x30cb80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30cb84: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CB84u;
    SET_GPR_U32(ctx, 31, 0x30CB8Cu);
    ctx->pc = 0x30CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB84u;
    // 0x30cb88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CB84u, 0x30CB8Cu)) {
        return;
    }
    ctx->pc = 0x30CB8Cu;
label_30cb8c:
    // 0x30cb8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CB8Cu;
    {
        const bool branch_taken_0x30cb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cb8c) {
            ctx->pc = 0x30CBA0u;
            goto label_30cba0;
        }
    }
    ctx->pc = 0x30CB94u;
    // 0x30cb94: 0x0  nop
    ctx->pc = 0x30cb94u;
    // NOP
label_30cb98:
    // 0x30cb98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CB98u;
    {
        const bool branch_taken_0x30cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB98u;
        // 0x30cb9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb98) {
            ctx->pc = 0x30CBB8u;
            goto label_30cbb8;
        }
    }
    ctx->pc = 0x30CBA0u;
label_30cba0:
    // 0x30cba0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CBA0u;
    {
        const bool branch_taken_0x30cba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBA0u;
        // 0x30cba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cba0) {
            ctx->pc = 0x30CBB8u;
            goto label_30cbb8;
        }
    }
    ctx->pc = 0x30CBA8u;
    // 0x30cba8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30cbac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30cbb0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30cbb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30cbb8:
    // 0x30cbb8: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x30CBB8u;
    {
        const bool branch_taken_0x30cbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBB8u;
        // 0x30cbbc: 0x26440044  addiu       $a0, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbb8) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CBC0u;
    // 0x30cbc0: 0xc0c3120  jal         func_30C480
    ctx->pc = 0x30CBC0u;
    SET_GPR_U32(ctx, 31, 0x30CBC8u);
    ctx->pc = 0x30CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBC0u;
    // 0x30cbc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C480u, 0x30CBC0u, 0x30CBC8u)) {
        return;
    }
    ctx->pc = 0x30CBC8u;
label_30cbc8:
    // 0x30cbc8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x30CBC8u;
    {
        const bool branch_taken_0x30cbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBC8u;
        // 0x30cbcc: 0x26510054  addiu       $s1, $s2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbc8) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CBD0u;
    // 0x30cbd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30cbd4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30cbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30cbd8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CBD8u;
    SET_GPR_U32(ctx, 31, 0x30CBE0u);
    ctx->pc = 0x30CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBD8u;
    // 0x30cbdc: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CBD8u, 0x30CBE0u)) {
        return;
    }
    ctx->pc = 0x30CBE0u;
label_30cbe0:
    // 0x30cbe0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CBE0u;
    {
        const bool branch_taken_0x30cbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBE0u;
        // 0x30cbe4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbe0) {
            ctx->pc = 0x30CC18u;
            goto label_30cc18;
        }
    }
    ctx->pc = 0x30CBE8u;
    // 0x30cbe8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30cbec: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30cbf0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CBF0u;
    {
        const bool branch_taken_0x30cbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBF0u;
        // 0x30cbf4: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbf0) {
            ctx->pc = 0x30CC18u;
            goto label_30cc18;
        }
    }
    ctx->pc = 0x30CBF8u;
    // 0x30cbf8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CBF8u;
    {
        const bool branch_taken_0x30cbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBF8u;
        // 0x30cbfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbf8) {
            ctx->pc = 0x30CC18u;
            goto label_30cc18;
        }
    }
    ctx->pc = 0x30CC00u;
    // 0x30cc00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30cc04: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CC04u;
    SET_GPR_U32(ctx, 31, 0x30CC0Cu);
    ctx->pc = 0x30CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC04u;
    // 0x30cc08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CC04u, 0x30CC0Cu)) {
        return;
    }
    ctx->pc = 0x30CC0Cu;
label_30cc0c:
    // 0x30cc0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CC0Cu;
    {
        const bool branch_taken_0x30cc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cc0c) {
            ctx->pc = 0x30CC20u;
            goto label_30cc20;
        }
    }
    ctx->pc = 0x30CC14u;
    // 0x30cc14: 0x0  nop
    ctx->pc = 0x30cc14u;
    // NOP
label_30cc18:
    // 0x30cc18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CC18u;
    {
        const bool branch_taken_0x30cc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC18u;
        // 0x30cc1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc18) {
            ctx->pc = 0x30CC38u;
            goto label_30cc38;
        }
    }
    ctx->pc = 0x30CC20u;
label_30cc20:
    // 0x30cc20: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CC20u;
    {
        const bool branch_taken_0x30cc20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC20u;
        // 0x30cc24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc20) {
            ctx->pc = 0x30CC38u;
            goto label_30cc38;
        }
    }
    ctx->pc = 0x30CC28u;
    // 0x30cc28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30cc2c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30cc30: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30cc34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30cc38:
    // 0x30cc38: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x30CC38u;
    {
        const bool branch_taken_0x30cc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC38u;
        // 0x30cc3c: 0x26440058  addiu       $a0, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc38) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CC40u;
    // 0x30cc40: 0xc0c3120  jal         func_30C480
    ctx->pc = 0x30CC40u;
    SET_GPR_U32(ctx, 31, 0x30CC48u);
    ctx->pc = 0x30CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC40u;
    // 0x30cc44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C480u, 0x30CC40u, 0x30CC48u)) {
        return;
    }
    ctx->pc = 0x30CC48u;
label_30cc48:
    // 0x30cc48: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x30CC48u;
    {
        const bool branch_taken_0x30cc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC48u;
        // 0x30cc4c: 0x26440068  addiu       $a0, $s2, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc48) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CC50u;
    // 0x30cc50: 0xc0c31b0  jal         func_30C6C0
    ctx->pc = 0x30CC50u;
    SET_GPR_U32(ctx, 31, 0x30CC58u);
    ctx->pc = 0x30CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC50u;
    // 0x30cc54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C6C0u, 0x30CC50u, 0x30CC58u)) {
        return;
    }
    ctx->pc = 0x30CC58u;
label_30cc58:
    // 0x30cc58: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x30CC58u;
    {
        const bool branch_taken_0x30cc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC58u;
        // 0x30cc5c: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc58) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CC60u;
    // 0x30cc60: 0xc0c31b0  jal         func_30C6C0
    ctx->pc = 0x30CC60u;
    SET_GPR_U32(ctx, 31, 0x30CC68u);
    ctx->pc = 0x30CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC60u;
    // 0x30cc64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C6C0u, 0x30CC60u, 0x30CC68u)) {
        return;
    }
    ctx->pc = 0x30CC68u;
label_30cc68:
    // 0x30cc68: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x30CC68u;
    {
        const bool branch_taken_0x30cc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC68u;
        // 0x30cc6c: 0x26440074  addiu       $a0, $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc68) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CC70u;
    // 0x30cc70: 0xc0c31b0  jal         func_30C6C0
    ctx->pc = 0x30CC70u;
    SET_GPR_U32(ctx, 31, 0x30CC78u);
    ctx->pc = 0x30CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC70u;
    // 0x30cc74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C6C0u, 0x30CC70u, 0x30CC78u)) {
        return;
    }
    ctx->pc = 0x30CC78u;
label_30cc78:
    // 0x30cc78: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x30CC78u;
    {
        const bool branch_taken_0x30cc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC78u;
        // 0x30cc7c: 0x2651008c  addiu       $s1, $s2, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc78) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CC80u;
    // 0x30cc80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30cc84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30cc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30cc88: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CC88u;
    SET_GPR_U32(ctx, 31, 0x30CC90u);
    ctx->pc = 0x30CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC88u;
    // 0x30cc8c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CC88u, 0x30CC90u)) {
        return;
    }
    ctx->pc = 0x30CC90u;
label_30cc90:
    // 0x30cc90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CC90u;
    {
        const bool branch_taken_0x30cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC90u;
        // 0x30cc94: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc90) {
            ctx->pc = 0x30CCC8u;
            goto label_30ccc8;
        }
    }
    ctx->pc = 0x30CC98u;
    // 0x30cc98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30cc9c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30cca0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CCA0u;
    {
        const bool branch_taken_0x30cca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCA0u;
        // 0x30cca4: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cca0) {
            ctx->pc = 0x30CCC8u;
            goto label_30ccc8;
        }
    }
    ctx->pc = 0x30CCA8u;
    // 0x30cca8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CCA8u;
    {
        const bool branch_taken_0x30cca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCA8u;
        // 0x30ccac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cca8) {
            ctx->pc = 0x30CCC8u;
            goto label_30ccc8;
        }
    }
    ctx->pc = 0x30CCB0u;
    // 0x30ccb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ccb4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CCB4u;
    SET_GPR_U32(ctx, 31, 0x30CCBCu);
    ctx->pc = 0x30CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CCB4u;
    // 0x30ccb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CCB4u, 0x30CCBCu)) {
        return;
    }
    ctx->pc = 0x30CCBCu;
label_30ccbc:
    // 0x30ccbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CCBCu;
    {
        const bool branch_taken_0x30ccbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ccbc) {
            ctx->pc = 0x30CCD0u;
            goto label_30ccd0;
        }
    }
    ctx->pc = 0x30CCC4u;
    // 0x30ccc4: 0x0  nop
    ctx->pc = 0x30ccc4u;
    // NOP
label_30ccc8:
    // 0x30ccc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CCC8u;
    {
        const bool branch_taken_0x30ccc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCC8u;
        // 0x30cccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ccc8) {
            ctx->pc = 0x30CCE8u;
            goto label_30cce8;
        }
    }
    ctx->pc = 0x30CCD0u;
label_30ccd0:
    // 0x30ccd0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CCD0u;
    {
        const bool branch_taken_0x30ccd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCD0u;
        // 0x30ccd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ccd0) {
            ctx->pc = 0x30CCE8u;
            goto label_30cce8;
        }
    }
    ctx->pc = 0x30CCD8u;
    // 0x30ccd8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ccdc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30cce0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30cce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30cce8:
    // 0x30cce8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CCE8u;
    {
        const bool branch_taken_0x30cce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCE8u;
        // 0x30ccec: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cce8) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CCF0u;
    // 0x30ccf0: 0xc0c31b0  jal         func_30C6C0
    ctx->pc = 0x30CCF0u;
    SET_GPR_U32(ctx, 31, 0x30CCF8u);
    ctx->pc = 0x30CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CCF0u;
    // 0x30ccf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C6C0u, 0x30CCF0u, 0x30CCF8u)) {
        return;
    }
    ctx->pc = 0x30CCF8u;
label_30ccf8:
    // 0x30ccf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CCF8u;
    {
        const bool branch_taken_0x30ccf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCF8u;
        // 0x30ccfc: 0x264400a8  addiu       $a0, $s2, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ccf8) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CD00u;
    // 0x30cd00: 0xc0c31b0  jal         func_30C6C0
    ctx->pc = 0x30CD00u;
    SET_GPR_U32(ctx, 31, 0x30CD08u);
    ctx->pc = 0x30CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD00u;
    // 0x30cd04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C6C0u, 0x30CD00u, 0x30CD08u)) {
        return;
    }
    ctx->pc = 0x30CD08u;
label_30cd08:
    // 0x30cd08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CD08u;
    {
        const bool branch_taken_0x30cd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD08u;
        // 0x30cd0c: 0x2644009c  addiu       $a0, $s2, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd08) {
            ctx->pc = 0x30CD20u;
            goto label_30cd20;
        }
    }
    ctx->pc = 0x30CD10u;
    // 0x30cd10: 0xc0c31b0  jal         func_30C6C0
    ctx->pc = 0x30CD10u;
    SET_GPR_U32(ctx, 31, 0x30CD18u);
    ctx->pc = 0x30CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD10u;
    // 0x30cd14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30C6C0u, 0x30CD10u, 0x30CD18u)) {
        return;
    }
    ctx->pc = 0x30CD18u;
label_30cd18:
    // 0x30cd18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CD18u;
    {
        const bool branch_taken_0x30cd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cd18) {
            ctx->pc = 0x30CD28u;
            goto label_30cd28;
        }
    }
    ctx->pc = 0x30CD20u;
label_30cd20:
    // 0x30cd20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CD20u;
    {
        const bool branch_taken_0x30cd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD20u;
        // 0x30cd24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd20) {
            ctx->pc = 0x30CD40u;
            goto label_30cd40;
        }
    }
    ctx->pc = 0x30CD28u;
label_30cd28:
    // 0x30cd28: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CD28u;
    {
        const bool branch_taken_0x30cd28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD28u;
        // 0x30cd2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd28) {
            ctx->pc = 0x30CD40u;
            goto label_30cd40;
        }
    }
    ctx->pc = 0x30CD30u;
    // 0x30cd30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30cd34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30cd38: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30cd3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30cd40:
    // 0x30cd40: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x30cd40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30cd44: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x30cd44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30cd48: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x30cd48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30cd4c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x30cd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30cd50: 0x3e00008  jr          $ra
    ctx->pc = 0x30CD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD50u;
        // 0x30cd54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CD58u;
}
