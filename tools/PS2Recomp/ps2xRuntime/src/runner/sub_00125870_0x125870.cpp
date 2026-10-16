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

// Function: sub_00125870
// Address: 0x125870 - 0x125910
void sub_00125870_0x125870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125870_0x125870");
#endif

    switch (ctx->pc) {
        case 0x1258b0u: goto label_1258b0;
        case 0x1258c8u: goto label_1258c8;
        default: break;
    }

    ctx->pc = 0x125870u;

    // 0x125870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x125870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x125874: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x125874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x125878: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x125878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x12587c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12587cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125880: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x125880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x125884: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x125884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
    // 0x125888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x125888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12588c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12588cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125890: 0x8c820804  lw          $v0, 0x804($a0)
    ctx->pc = 0x125890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x125894: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x125894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125898: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x125898u;
    {
        const bool branch_taken_0x125898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125898u;
        // 0x12589c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125898) {
            ctx->pc = 0x1258F0u;
            goto label_1258f0;
        }
    }
    ctx->pc = 0x1258A0u;
    // 0x1258a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1258a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1258a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258a8: 0x8e220804  lw          $v0, 0x804($s1)
    ctx->pc = 0x1258a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x1258ac: 0x0  nop
    ctx->pc = 0x1258acu;
    // NOP
label_1258b0:
    // 0x1258b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1258b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258b4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1258b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1258b8: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x1258b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1258bc: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1258bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1258c0: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x1258C0u;
    SET_GPR_U32(ctx, 31, 0x1258C8u);
    ctx->pc = 0x1258C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1258C0u;
    // 0x1258c4: 0x26520098  addiu       $s2, $s2, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x1258C0u, 0x1258C8u)) {
        return;
    }
    ctx->pc = 0x1258C8u;
label_1258c8:
    // 0x1258c8: 0x8e240848  lw          $a0, 0x848($s1)
    ctx->pc = 0x1258c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x1258cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1258ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1258d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1258d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1258d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1258d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1258d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1258d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1258dc: 0x8e240804  lw          $a0, 0x804($s1)
    ctx->pc = 0x1258dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x1258e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1258e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1258e4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1258e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1258e8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1258E8u;
    {
        const bool branch_taken_0x1258e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1258e8) {
            ctx->pc = 0x1258ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1258E8u;
            // 0x1258ec: 0x8e220804  lw          $v0, 0x804($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1258B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1258b0;
        }
    }
    ctx->pc = 0x1258F0u;
label_1258f0:
    // 0x1258f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1258f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1258f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1258f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1258f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1258f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1258fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1258fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125904: 0x3e00008  jr          $ra
    ctx->pc = 0x125904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125904u;
        // 0x125908: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12590Cu;
    // 0x12590c: 0x0  nop
    ctx->pc = 0x12590cu;
    // NOP
    ctx->pc = 0x125910u;
}
