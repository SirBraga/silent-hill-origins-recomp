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

// Function: sub_00190828
// Address: 0x190828 - 0x1908a0
void sub_00190828_0x190828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190828_0x190828");
#endif

    switch (ctx->pc) {
        case 0x190868u: goto label_190868;
        case 0x190878u: goto label_190878;
        case 0x190888u: goto label_190888;
        case 0x190898u: goto label_190898;
        default: break;
    }

    ctx->pc = 0x190828u;

    // 0x190828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19082c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190834: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x190834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x190838: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x190838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x19083c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19083Cu;
    {
        const bool branch_taken_0x19083c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19083Cu;
        // 0x190840: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19083c) {
            ctx->pc = 0x1908B8u;
            return;
        }
    }
    ctx->pc = 0x190844u;
    // 0x190844: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x190844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x190848: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x190848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19084c: 0x24429520  addiu       $v0, $v0, -0x6AE0
    ctx->pc = 0x19084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939936));
    // 0x190850: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190854: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x190854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190858: 0x800008  jr          $a0
    ctx->pc = 0x190858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190860u: goto label_190860;
            case 0x190870u: goto label_190870;
            case 0x190880u: goto label_190880;
            case 0x190890u: goto label_190890;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190858u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x190860u;
label_190860:
    // 0x190860: 0xc064266  jal         func_190998
    ctx->pc = 0x190860u;
    SET_GPR_U32(ctx, 31, 0x190868u);
    ctx->pc = 0x190864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190860u;
    // 0x190864: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190998u, 0x190860u, 0x190868u)) {
        return;
    }
    ctx->pc = 0x190868u;
label_190868:
    // 0x190868: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x190868u;
    {
        const bool branch_taken_0x190868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190868u;
        // 0x19086c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190868) {
            ctx->pc = 0x1908BCu;
            return;
        }
    }
    ctx->pc = 0x190870u;
label_190870:
    // 0x190870: 0xc064232  jal         func_1908C8
    ctx->pc = 0x190870u;
    SET_GPR_U32(ctx, 31, 0x190878u);
    ctx->pc = 0x190874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190870u;
    // 0x190874: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1908C8u, 0x190870u, 0x190878u)) {
        return;
    }
    ctx->pc = 0x190878u;
label_190878:
    // 0x190878: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x190878u;
    {
        const bool branch_taken_0x190878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190878u;
        // 0x19087c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190878) {
            ctx->pc = 0x1908BCu;
            return;
        }
    }
    ctx->pc = 0x190880u;
label_190880:
    // 0x190880: 0xc06429a  jal         func_190A68
    ctx->pc = 0x190880u;
    SET_GPR_U32(ctx, 31, 0x190888u);
    ctx->pc = 0x190884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190880u;
    // 0x190884: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190A68u, 0x190880u, 0x190888u)) {
        return;
    }
    ctx->pc = 0x190888u;
label_190888:
    // 0x190888: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x190888u;
    {
        const bool branch_taken_0x190888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190888u;
        // 0x19088c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190888) {
            ctx->pc = 0x1908BCu;
            return;
        }
    }
    ctx->pc = 0x190890u;
label_190890:
    // 0x190890: 0xc0642d6  jal         func_190B58
    ctx->pc = 0x190890u;
    SET_GPR_U32(ctx, 31, 0x190898u);
    ctx->pc = 0x190894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190890u;
    // 0x190894: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190B58u, 0x190890u, 0x190898u)) {
        return;
    }
    ctx->pc = 0x190898u;
label_190898:
    // 0x190898: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x190898u;
    {
        const bool branch_taken_0x190898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190898u;
        // 0x19089c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190898) {
            ctx->pc = 0x1908BCu;
            return;
        }
    }
    ctx->pc = 0x1908A0u;
}
