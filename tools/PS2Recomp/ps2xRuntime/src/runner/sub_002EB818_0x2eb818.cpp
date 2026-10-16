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

// Function: sub_002EB818
// Address: 0x2eb818 - 0x2eb958
void sub_002EB818_0x2eb818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB818_0x2eb818");
#endif

    switch (ctx->pc) {
        case 0x2eb868u: goto label_2eb868;
        case 0x2eb8b4u: goto label_2eb8b4;
        case 0x2eb8e8u: goto label_2eb8e8;
        case 0x2eb8f8u: goto label_2eb8f8;
        case 0x2eb900u: goto label_2eb900;
        case 0x2eb924u: goto label_2eb924;
        default: break;
    }

    ctx->pc = 0x2eb818u;

    // 0x2eb818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eb818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eb81c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2eb81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2eb820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eb820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eb824: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x2eb824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2eb828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb82c: 0x8e021394  lw          $v0, 0x1394($s0)
    ctx->pc = 0x2eb82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
    // 0x2eb830: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2EB830u;
    {
        const bool branch_taken_0x2eb830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB830u;
        // 0x2eb834: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb830) {
            ctx->pc = 0x2EB930u;
            goto label_2eb930;
        }
    }
    ctx->pc = 0x2EB838u;
    // 0x2eb838: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eb838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eb83c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2EB83Cu;
    {
        const bool branch_taken_0x2eb83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB83Cu;
        // 0x2eb840: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb83c) {
            ctx->pc = 0x2EB8C4u;
            goto label_2eb8c4;
        }
    }
    ctx->pc = 0x2EB844u;
    // 0x2eb844: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2eb844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2eb848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb84c: 0x34c6080c  ori         $a2, $a2, 0x80C
    ctx->pc = 0x2eb84cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2060);
    // 0x2eb850: 0xae031388  sw          $v1, 0x1388($s0)
    ctx->pc = 0x2eb850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 3));
    // 0x2eb854: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2eb854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2eb858: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2eb858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb85c: 0xae02138c  sw          $v0, 0x138C($s0)
    ctx->pc = 0x2eb85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5004), GPR_U32(ctx, 2));
    // 0x2eb860: 0xc0b708c  jal         func_2DC230
    ctx->pc = 0x2EB860u;
    SET_GPR_U32(ctx, 31, 0x2EB868u);
    ctx->pc = 0x2EB864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB860u;
    // 0x2eb864: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2EB860u, 0x2EB868u)) {
        return;
    }
    ctx->pc = 0x2EB868u;
label_2eb868:
    // 0x2eb868: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2eb868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2eb86c: 0x2444003f  addiu       $a0, $v0, 0x3F
    ctx->pc = 0x2eb86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2eb870: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x2eb870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x2eb874: 0xae021394  sw          $v0, 0x1394($s0)
    ctx->pc = 0x2eb874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 2));
    // 0x2eb878: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2eb878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2eb87c: 0xae041390  sw          $a0, 0x1390($s0)
    ctx->pc = 0x2eb87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 4));
    // 0x2eb880: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2eb880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eb884: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EB884u;
    {
        const bool branch_taken_0x2eb884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB884u;
        // 0x2eb888: 0xae031384  sw          $v1, 0x1384($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb884) {
            ctx->pc = 0x2EB930u;
            goto label_2eb930;
        }
    }
    ctx->pc = 0x2EB88Cu;
    // 0x2eb88c: 0x8e0a138c  lw          $t2, 0x138C($s0)
    ctx->pc = 0x2eb88cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5004)));
    // 0x2eb890: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb898: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb89c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x2eb89cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2eb8a0: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2eb8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2eb8a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb8a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb8a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8ac: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EB8ACu;
    SET_GPR_U32(ctx, 31, 0x2EB8B4u);
    ctx->pc = 0x2EB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8ACu;
    // 0x2eb8b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EB8ACu, 0x2EB8B4u)) {
        return;
    }
    ctx->pc = 0x2EB8B4u;
label_2eb8b4:
    // 0x2eb8b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb8b8: 0xaf828c9c  sw          $v0, -0x7364($gp)
    ctx->pc = 0x2eb8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
    // 0x2eb8bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2EB8BCu;
    {
        const bool branch_taken_0x2eb8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8BCu;
        // 0x2eb8c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8bc) {
            ctx->pc = 0x2EB934u;
            goto label_2eb934;
        }
    }
    ctx->pc = 0x2EB8C4u;
label_2eb8c4:
    // 0x2eb8c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8d0: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2eb8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2eb8d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb8d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb8d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2eb8dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8e0: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EB8E0u;
    SET_GPR_U32(ctx, 31, 0x2EB8E8u);
    ctx->pc = 0x2EB8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8E0u;
    // 0x2eb8e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EB8E0u, 0x2EB8E8u)) {
        return;
    }
    ctx->pc = 0x2EB8E8u;
label_2eb8e8:
    // 0x2eb8e8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x2eb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
    // 0x2eb8ec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EB8ECu;
    {
        const bool branch_taken_0x2eb8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb8ec) {
            ctx->pc = 0x2EB8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB8ECu;
            // 0x2eb8f0: 0x8e041394  lw          $a0, 0x1394($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB910u;
            goto label_2eb910;
        }
    }
    ctx->pc = 0x2EB8F4u;
    // 0x2eb8f4: 0x0  nop
    ctx->pc = 0x2eb8f4u;
    // NOP
label_2eb8f8:
    // 0x2eb8f8: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x2EB8F8u;
    SET_GPR_U32(ctx, 31, 0x2EB900u);
    ctx->pc = 0x2EB8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8F8u;
    // 0x2eb8fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2EB8F8u, 0x2EB900u)) {
        return;
    }
    ctx->pc = 0x2EB900u;
label_2eb900:
    // 0x2eb900: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x2eb900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
    // 0x2eb904: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2EB904u;
    {
        const bool branch_taken_0x2eb904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb904) {
            ctx->pc = 0x2EB8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb8f8;
        }
    }
    ctx->pc = 0x2EB90Cu;
    // 0x2eb90c: 0x8e041394  lw          $a0, 0x1394($s0)
    ctx->pc = 0x2eb90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
label_2eb910:
    // 0x2eb910: 0xae001388  sw          $zero, 0x1388($s0)
    ctx->pc = 0x2eb910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 0));
    // 0x2eb914: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB914u;
    {
        const bool branch_taken_0x2eb914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB914u;
        // 0x2eb918: 0xae00138c  sw          $zero, 0x138C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb914) {
            ctx->pc = 0x2EB924u;
            goto label_2eb924;
        }
    }
    ctx->pc = 0x2EB91Cu;
    // 0x2eb91c: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2EB91Cu;
    SET_GPR_U32(ctx, 31, 0x2EB924u);
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2EB91Cu, 0x2EB924u)) {
        return;
    }
    ctx->pc = 0x2EB924u;
label_2eb924:
    // 0x2eb924: 0xae001384  sw          $zero, 0x1384($s0)
    ctx->pc = 0x2eb924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 0));
    // 0x2eb928: 0xae001394  sw          $zero, 0x1394($s0)
    ctx->pc = 0x2eb928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 0));
    // 0x2eb92c: 0xae001390  sw          $zero, 0x1390($s0)
    ctx->pc = 0x2eb92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 0));
label_2eb930:
    // 0x2eb930: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2eb930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2eb934:
    // 0x2eb934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eb934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb93c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB93Cu;
        // 0x2eb940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB944u;
    // 0x2eb944: 0x0  nop
    ctx->pc = 0x2eb944u;
    // NOP
    // 0x2eb948: 0xaf80c018  sw          $zero, -0x3FE8($gp)
    ctx->pc = 0x2eb948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950936), GPR_U32(ctx, 0));
    // 0x2eb94c: 0x0  nop
    ctx->pc = 0x2eb94cu;
    // NOP
    // 0x2eb950: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2eb950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb954: 0x0  nop
    ctx->pc = 0x2eb954u;
    // NOP
    ctx->pc = 0x2eb958u;
}
