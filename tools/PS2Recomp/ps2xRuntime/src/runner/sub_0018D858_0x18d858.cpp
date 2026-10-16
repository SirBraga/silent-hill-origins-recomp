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

// Function: sub_0018D858
// Address: 0x18d858 - 0x18dac0
void sub_0018D858_0x18d858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D858_0x18d858");
#endif

    switch (ctx->pc) {
        case 0x18d8a8u: goto label_18d8a8;
        case 0x18d8c4u: goto label_18d8c4;
        case 0x18d8e8u: goto label_18d8e8;
        case 0x18d8fcu: goto label_18d8fc;
        case 0x18d924u: goto label_18d924;
        case 0x18d964u: goto label_18d964;
        case 0x18d9b0u: goto label_18d9b0;
        case 0x18d9bcu: goto label_18d9bc;
        case 0x18d9ecu: goto label_18d9ec;
        case 0x18d9f8u: goto label_18d9f8;
        case 0x18da18u: goto label_18da18;
        case 0x18da54u: goto label_18da54;
        default: break;
    }

    ctx->pc = 0x18d858u;

    // 0x18d858: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18d858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18d85c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x18d85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x18d860: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x18d860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x18d864: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18d864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d868: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x18d868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x18d86c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18d86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d870: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x18d870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x18d874: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d878: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x18d878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x18d87c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x18d87cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d880: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x18d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x18d884: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18d884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18d888: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x18d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x18d88c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x18d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x18d890: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d894: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D894u;
    {
        const bool branch_taken_0x18d894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D894u;
        // 0x18d898: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d894) {
            ctx->pc = 0x18D8B0u;
            goto label_18d8b0;
        }
    }
    ctx->pc = 0x18D89Cu;
    // 0x18d89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8a0: 0xc065c40  jal         func_197100
    ctx->pc = 0x18D8A0u;
    SET_GPR_U32(ctx, 31, 0x18D8A8u);
    ctx->pc = 0x18D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8A0u;
    // 0x18d8a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18D8A0u, 0x18D8A8u)) {
        return;
    }
    ctx->pc = 0x18D8A8u;
label_18d8a8:
    // 0x18d8a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D8A8u;
    {
        const bool branch_taken_0x18d8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8A8u;
        // 0x18d8ac: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8a8) {
            ctx->pc = 0x18D8B4u;
            goto label_18d8b4;
        }
    }
    ctx->pc = 0x18D8B0u;
label_18d8b0:
    // 0x18d8b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18d8b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d8b4:
    // 0x18d8b4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D8B4u;
    {
        const bool branch_taken_0x18d8b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8B4u;
        // 0x18d8b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8b4) {
            ctx->pc = 0x18D8CCu;
            goto label_18d8cc;
        }
    }
    ctx->pc = 0x18D8BCu;
    // 0x18d8bc: 0xc065c40  jal         func_197100
    ctx->pc = 0x18D8BCu;
    SET_GPR_U32(ctx, 31, 0x18D8C4u);
    ctx->pc = 0x18D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8BCu;
    // 0x18d8c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18D8BCu, 0x18D8C4u)) {
        return;
    }
    ctx->pc = 0x18D8C4u;
label_18d8c4:
    // 0x18d8c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D8C4u;
    {
        const bool branch_taken_0x18d8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8C4u;
        // 0x18d8c8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8c4) {
            ctx->pc = 0x18D8D0u;
            goto label_18d8d0;
        }
    }
    ctx->pc = 0x18D8CCu;
label_18d8cc:
    // 0x18d8cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18d8ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d8d0:
    // 0x18d8d0: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x18d8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18d8d4: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x18D8D4u;
    {
        const bool branch_taken_0x18d8d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8D4u;
        // 0x18d8d8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8d4) {
            ctx->pc = 0x18D948u;
            goto label_18d948;
        }
    }
    ctx->pc = 0x18D8DCu;
    // 0x18d8dc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x18d8dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d8e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18d8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d8e4: 0x0  nop
    ctx->pc = 0x18d8e4u;
    // NOP
label_18d8e8:
    // 0x18d8e8: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x18d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x18d8ec: 0x56a20014  bnel        $s5, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18D8ECu;
    {
        const bool branch_taken_0x18d8ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d8ec) {
            ctx->pc = 0x18D8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D8ECu;
            // 0x18d8f0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D940u;
            goto label_18d940;
        }
    }
    ctx->pc = 0x18D8F4u;
    // 0x18d8f4: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18D8F4u;
    SET_GPR_U32(ctx, 31, 0x18D8FCu);
    ctx->pc = 0x18D8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8F4u;
    // 0x18d8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18D8F4u, 0x18D8FCu)) {
        return;
    }
    ctx->pc = 0x18D8FCu;
label_18d8fc:
    // 0x18d8fc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x18D8FCu;
    {
        const bool branch_taken_0x18d8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d8fc) {
            ctx->pc = 0x18D900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D8FCu;
            // 0x18d900: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D940u;
            goto label_18d940;
        }
    }
    ctx->pc = 0x18D904u;
    // 0x18d904: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x18D904u;
    {
        const bool branch_taken_0x18d904 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D904u;
        // 0x18d908: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d904) {
            ctx->pc = 0x18D930u;
            goto label_18d930;
        }
    }
    ctx->pc = 0x18D90Cu;
    // 0x18d90c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d910: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x18d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x18d914: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18D914u;
    {
        const bool branch_taken_0x18d914 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D914u;
        // 0x18d918: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d914) {
            ctx->pc = 0x18D934u;
            goto label_18d934;
        }
    }
    ctx->pc = 0x18D91Cu;
    // 0x18d91c: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18D91Cu;
    SET_GPR_U32(ctx, 31, 0x18D924u);
    ctx->pc = 0x18D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D91Cu;
    // 0x18d920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18D91Cu, 0x18D924u)) {
        return;
    }
    ctx->pc = 0x18D924u;
label_18d924:
    // 0x18d924: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18d924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D928u;
    {
        const bool branch_taken_0x18d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D928u;
        // 0x18d92c: 0x2e2180b  movn        $v1, $s7, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d928) {
            ctx->pc = 0x18D934u;
            goto label_18d934;
        }
    }
    ctx->pc = 0x18D930u;
label_18d930:
    // 0x18d930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d934:
    // 0x18d934: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D934u;
    {
        const bool branch_taken_0x18d934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d934) {
            ctx->pc = 0x18D938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D934u;
            // 0x18d938: 0x8e360000  lw          $s6, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D948u;
            goto label_18d948;
        }
    }
    ctx->pc = 0x18D93Cu;
    // 0x18d93c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x18d93cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18d940:
    // 0x18d940: 0x5620ffe9  bnel        $s1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x18D940u;
    {
        const bool branch_taken_0x18d940 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d940) {
            ctx->pc = 0x18D944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D940u;
            // 0x18d944: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d8e8;
        }
    }
    ctx->pc = 0x18D948u;
label_18d948:
    // 0x18d948: 0x13c00051  beqz        $fp, . + 4 + (0x51 << 2)
    ctx->pc = 0x18D948u;
    {
        const bool branch_taken_0x18d948 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D948u;
        // 0x18d94c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d948) {
            ctx->pc = 0x18DA90u;
            goto label_18da90;
        }
    }
    ctx->pc = 0x18D950u;
    // 0x18d950: 0x56c00050  bnel        $s6, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x18D950u;
    {
        const bool branch_taken_0x18d950 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d950) {
            ctx->pc = 0x18D954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D950u;
            // 0x18d954: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA94u;
            goto label_18da94;
        }
    }
    ctx->pc = 0x18D958u;
    // 0x18d958: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x18d958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x18d95c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x18D95Cu;
    SET_GPR_U32(ctx, 31, 0x18D964u);
    ctx->pc = 0x18D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D95Cu;
    // 0x18d960: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x18D95Cu, 0x18D964u)) {
        return;
    }
    ctx->pc = 0x18D964u;
label_18d964:
    // 0x18d964: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18d964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d968: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x18d968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x18d96c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18d970: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x18d970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x18d974: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x18d974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x18d978: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x18d978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x18d97c: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x18d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x18d980: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x18d980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x18d984: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x18d984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x18d988: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x18d988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x18d98c: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x18d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x18d990: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x18D990u;
    {
        const bool branch_taken_0x18d990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D990u;
        // 0x18d994: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d990) {
            ctx->pc = 0x18D9C4u;
            goto label_18d9c4;
        }
    }
    ctx->pc = 0x18D998u;
    // 0x18d998: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x18d998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18d99c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18D99Cu;
    {
        const bool branch_taken_0x18d99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D99Cu;
        // 0x18d9a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d99c) {
            ctx->pc = 0x18D9C4u;
            goto label_18d9c4;
        }
    }
    ctx->pc = 0x18D9A4u;
    // 0x18d9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9a8: 0xc081b9a  jal         func_206E68
    ctx->pc = 0x18D9A8u;
    SET_GPR_U32(ctx, 31, 0x18D9B0u);
    ctx->pc = 0x18D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9A8u;
    // 0x18d9ac: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x18D9A8u, 0x18D9B0u)) {
        return;
    }
    ctx->pc = 0x18D9B0u;
label_18d9b0:
    // 0x18d9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9b4: 0xc065c40  jal         func_197100
    ctx->pc = 0x18D9B4u;
    SET_GPR_U32(ctx, 31, 0x18D9BCu);
    ctx->pc = 0x18D9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9B4u;
    // 0x18d9b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18D9B4u, 0x18D9BCu)) {
        return;
    }
    ctx->pc = 0x18D9BCu;
label_18d9bc:
    // 0x18d9bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D9BCu;
    {
        const bool branch_taken_0x18d9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9BCu;
        // 0x18d9c0: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9bc) {
            ctx->pc = 0x18D9C8u;
            goto label_18d9c8;
        }
    }
    ctx->pc = 0x18D9C4u;
label_18d9c4:
    // 0x18d9c4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x18d9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_18d9c8:
    // 0x18d9c8: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x18D9C8u;
    {
        const bool branch_taken_0x18d9c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9c8) {
            ctx->pc = 0x18D9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D9C8u;
            // 0x18d9cc: 0xa2200028  sb          $zero, 0x28($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA04u;
            goto label_18da04;
        }
    }
    ctx->pc = 0x18D9D0u;
    // 0x18d9d0: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x18d9d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18d9d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18D9D4u;
    {
        const bool branch_taken_0x18d9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9D4u;
        // 0x18d9d8: 0x26300028  addiu       $s0, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9d4) {
            ctx->pc = 0x18DA00u;
            goto label_18da00;
        }
    }
    ctx->pc = 0x18D9DCu;
    // 0x18d9dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9e4: 0xc081b9a  jal         func_206E68
    ctx->pc = 0x18D9E4u;
    SET_GPR_U32(ctx, 31, 0x18D9ECu);
    ctx->pc = 0x18D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9E4u;
    // 0x18d9e8: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x18D9E4u, 0x18D9ECu)) {
        return;
    }
    ctx->pc = 0x18D9ECu;
label_18d9ec:
    // 0x18d9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9f0: 0xc065c40  jal         func_197100
    ctx->pc = 0x18D9F0u;
    SET_GPR_U32(ctx, 31, 0x18D9F8u);
    ctx->pc = 0x18D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9F0u;
    // 0x18d9f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18D9F0u, 0x18D9F8u)) {
        return;
    }
    ctx->pc = 0x18D9F8u;
label_18d9f8:
    // 0x18d9f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D9F8u;
    {
        const bool branch_taken_0x18d9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9F8u;
        // 0x18d9fc: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9f8) {
            ctx->pc = 0x18DA04u;
            goto label_18da04;
        }
    }
    ctx->pc = 0x18DA00u;
label_18da00:
    // 0x18da00: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x18da00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
label_18da04:
    // 0x18da04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18da04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18da08: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18DA08u;
    {
        const bool branch_taken_0x18da08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA08u;
        // 0x18da0c: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da08) {
            ctx->pc = 0x18DA4Cu;
            goto label_18da4c;
        }
    }
    ctx->pc = 0x18DA10u;
    // 0x18da10: 0xc080858  jal         func_202160
    ctx->pc = 0x18DA10u;
    SET_GPR_U32(ctx, 31, 0x18DA18u);
    ctx->pc = 0x18DA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA10u;
    // 0x18da14: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x18DA10u, 0x18DA18u)) {
        return;
    }
    ctx->pc = 0x18DA18u;
label_18da18:
    // 0x18da18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18da18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18da20: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x18da20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x18da24: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x18da24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x18da28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18DA28u;
    {
        const bool branch_taken_0x18da28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA28u;
        // 0x18da2c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da28) {
            ctx->pc = 0x18DA34u;
            goto label_18da34;
        }
    }
    ctx->pc = 0x18DA30u;
    // 0x18da30: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x18da30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_18da34:
    // 0x18da34: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x18da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18da38: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18DA38u;
    {
        const bool branch_taken_0x18da38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da38) {
            ctx->pc = 0x18DA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DA38u;
            // 0x18da3c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA40u;
            goto label_18da40;
        }
    }
    ctx->pc = 0x18DA40u;
label_18da40:
    // 0x18da40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x18da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18da44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18DA44u;
    {
        const bool branch_taken_0x18da44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA44u;
        // 0x18da48: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da44) {
            ctx->pc = 0x18DA84u;
            goto label_18da84;
        }
    }
    ctx->pc = 0x18DA4Cu;
label_18da4c:
    // 0x18da4c: 0xc080858  jal         func_202160
    ctx->pc = 0x18DA4Cu;
    SET_GPR_U32(ctx, 31, 0x18DA54u);
    ctx->pc = 0x18DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA4Cu;
    // 0x18da50: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x18DA4Cu, 0x18DA54u)) {
        return;
    }
    ctx->pc = 0x18DA54u;
label_18da54:
    // 0x18da54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18da54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da58: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x18da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18da5c: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x18da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x18da60: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18da60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x18da64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18DA64u;
    {
        const bool branch_taken_0x18da64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA64u;
        // 0x18da68: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da64) {
            ctx->pc = 0x18DA70u;
            goto label_18da70;
        }
    }
    ctx->pc = 0x18DA6Cu;
    // 0x18da6c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x18da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_18da70:
    // 0x18da70: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18da74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18DA74u;
    {
        const bool branch_taken_0x18da74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da74) {
            ctx->pc = 0x18DA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DA74u;
            // 0x18da78: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA7Cu;
            goto label_18da7c;
        }
    }
    ctx->pc = 0x18DA7Cu;
label_18da7c:
    // 0x18da7c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x18da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18da80: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x18da80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_18da84:
    // 0x18da84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18da88: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x18da88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x18da8c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x18da8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18da90:
    // 0x18da90: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x18da90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18da94:
    // 0x18da94: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x18da94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18da98: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x18da98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18da9c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x18da9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18daa0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18daa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18daa4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18daa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18daa8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x18daa8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18daac: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x18daacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18dab0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x18dab0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18dab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dab8: 0x3e00008  jr          $ra
    ctx->pc = 0x18DAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAB8u;
        // 0x18dabc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DAC0u;
}
