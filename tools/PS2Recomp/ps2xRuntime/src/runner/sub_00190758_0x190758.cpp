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

// Function: sub_00190758
// Address: 0x190758 - 0x190800
void sub_00190758_0x190758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190758_0x190758");
#endif

    switch (ctx->pc) {
        case 0x19078cu: goto label_19078c;
        case 0x19079cu: goto label_19079c;
        case 0x1907b8u: goto label_1907b8;
        case 0x1907d0u: goto label_1907d0;
        default: break;
    }

    ctx->pc = 0x190758u;

    // 0x190758: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x190758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19075c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x190760: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x190760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x190764: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x190764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190768: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x190768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x19076c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19076cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190770: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x190770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x190774: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x190774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x190778: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x190778u;
    {
        const bool branch_taken_0x190778 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190778u;
        // 0x19077c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190778) {
            ctx->pc = 0x1907A4u;
            goto label_1907a4;
        }
    }
    ctx->pc = 0x190780u;
    // 0x190780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190784: 0xc065c40  jal         func_197100
    ctx->pc = 0x190784u;
    SET_GPR_U32(ctx, 31, 0x19078Cu);
    ctx->pc = 0x190788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190784u;
    // 0x190788: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x190784u, 0x19078Cu)) {
        return;
    }
    ctx->pc = 0x19078Cu;
label_19078c:
    // 0x19078c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19078Cu;
    {
        const bool branch_taken_0x19078c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x190790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19078Cu;
        // 0x190790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19078c) {
            ctx->pc = 0x1907A4u;
            goto label_1907a4;
        }
    }
    ctx->pc = 0x190794u;
    // 0x190794: 0xc065c40  jal         func_197100
    ctx->pc = 0x190794u;
    SET_GPR_U32(ctx, 31, 0x19079Cu);
    ctx->pc = 0x190798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190794u;
    // 0x190798: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x190794u, 0x19079Cu)) {
        return;
    }
    ctx->pc = 0x19079Cu;
label_19079c:
    // 0x19079c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19079Cu;
    {
        const bool branch_taken_0x19079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1907A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19079Cu;
        // 0x1907a0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19079c) {
            ctx->pc = 0x1907A8u;
            goto label_1907a8;
        }
    }
    ctx->pc = 0x1907A4u;
label_1907a4:
    // 0x1907a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1907a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1907a8:
    // 0x1907a8: 0x8e900020  lw          $s0, 0x20($s4)
    ctx->pc = 0x1907a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1907ac: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1907ACu;
    {
        const bool branch_taken_0x1907ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1907B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907ACu;
        // 0x1907b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907ac) {
            ctx->pc = 0x1907E4u;
            goto label_1907e4;
        }
    }
    ctx->pc = 0x1907B4u;
    // 0x1907b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1907b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1907b8:
    // 0x1907b8: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x1907b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x1907bc: 0x56420007  bnel        $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1907BCu;
    {
        const bool branch_taken_0x1907bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1907bc) {
            ctx->pc = 0x1907C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1907BCu;
            // 0x1907c0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1907DCu;
            goto label_1907dc;
        }
    }
    ctx->pc = 0x1907C4u;
    // 0x1907c4: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x1907c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x1907c8: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x1907C8u;
    SET_GPR_U32(ctx, 31, 0x1907D0u);
    ctx->pc = 0x1907CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1907C8u;
    // 0x1907cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1907C8u, 0x1907D0u)) {
        return;
    }
    ctx->pc = 0x1907D0u;
label_1907d0:
    // 0x1907d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1907D0u;
    {
        const bool branch_taken_0x1907d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1907d0) {
            ctx->pc = 0x1907D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1907D0u;
            // 0x1907d4: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1907E4u;
            goto label_1907e4;
        }
    }
    ctx->pc = 0x1907D8u;
    // 0x1907d8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1907d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1907dc:
    // 0x1907dc: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1907DCu;
    {
        const bool branch_taken_0x1907dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1907dc) {
            ctx->pc = 0x1907E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1907DCu;
            // 0x1907e0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1907B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1907b8;
        }
    }
    ctx->pc = 0x1907E4u;
label_1907e4:
    // 0x1907e4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1907E4u;
    {
        const bool branch_taken_0x1907e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1907E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907E4u;
        // 0x1907e8: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907e4) {
            ctx->pc = 0x1907F4u;
            goto label_1907f4;
        }
    }
    ctx->pc = 0x1907ECu;
    // 0x1907ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1907ECu;
    {
        const bool branch_taken_0x1907ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1907F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907ECu;
        // 0x1907f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907ec) {
            ctx->pc = 0x190804u;
            return;
        }
    }
    ctx->pc = 0x1907F4u;
label_1907f4:
    // 0x1907f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1907f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907f8: 0xc064266  jal         func_190998
    ctx->pc = 0x1907F8u;
    SET_GPR_U32(ctx, 31, 0x190800u);
    ctx->pc = 0x1907FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1907F8u;
    // 0x1907fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190998u, 0x1907F8u, 0x190800u)) {
        return;
    }
    ctx->pc = 0x190800u;
}
