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

// Function: sub_002E83A8
// Address: 0x2e83a8 - 0x2e8418
void sub_002E83A8_0x2e83a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E83A8_0x2e83a8");
#endif

    switch (ctx->pc) {
        case 0x2e83e4u: goto label_2e83e4;
        case 0x2e8400u: goto label_2e8400;
        default: break;
    }

    ctx->pc = 0x2e83a8u;

    // 0x2e83a8: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x2e83a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2e83ac: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2e83acu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2e83b0: 0x73e03  sra         $a3, $a3, 24
    ctx->pc = 0x2e83b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
    // 0x2e83b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e83b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e83b8: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x2e83b8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e83bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e83bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e83c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e83c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e83c4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E83C4u;
    {
        const bool branch_taken_0x2e83c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e83c4) {
            ctx->pc = 0x2E83C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E83C4u;
            // 0x2e83c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E83CCu;
            goto label_2e83cc;
        }
    }
    ctx->pc = 0x2E83CCu;
label_2e83cc:
    // 0x2e83cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e83d0: 0x4012  mflo        $t0
    ctx->pc = 0x2e83d0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x2e83d4: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E83D4u;
    {
        const bool branch_taken_0x2e83d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83D4u;
        // 0x2e83d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83d4) {
            ctx->pc = 0x2E83ECu;
            goto label_2e83ec;
        }
    }
    ctx->pc = 0x2E83DCu;
    // 0x2e83dc: 0xc0ba1e4  jal         func_2E8790
    ctx->pc = 0x2E83DCu;
    SET_GPR_U32(ctx, 31, 0x2E83E4u);
    ctx->pc = 0x2E83E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E83DCu;
    // 0x2e83e0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8790u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8790u, 0x2E83DCu, 0x2E83E4u)) {
        return;
    }
    ctx->pc = 0x2E83E4u;
label_2e83e4:
    // 0x2e83e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E83E4u;
    {
        const bool branch_taken_0x2e83e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83E4u;
        // 0x2e83e8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83e4) {
            ctx->pc = 0x2E8404u;
            goto label_2e8404;
        }
    }
    ctx->pc = 0x2E83ECu;
label_2e83ec:
    // 0x2e83ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e83f0: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E83F0u;
    {
        const bool branch_taken_0x2e83f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83F0u;
        // 0x2e83f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83f0) {
            ctx->pc = 0x2E8408u;
            goto label_2e8408;
        }
    }
    ctx->pc = 0x2E83F8u;
    // 0x2e83f8: 0xc0ba230  jal         func_2E88C0
    ctx->pc = 0x2E83F8u;
    SET_GPR_U32(ctx, 31, 0x2E8400u);
    ctx->pc = 0x2E83FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E83F8u;
    // 0x2e83fc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E88C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E88C0u, 0x2E83F8u, 0x2E8400u)) {
        return;
    }
    ctx->pc = 0x2E8400u;
label_2e8400:
    // 0x2e8400: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e8400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e8404:
    // 0x2e8404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8408:
    // 0x2e8408: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e8408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e840c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E840Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E840Cu;
        // 0x2e8410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E840Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8414u;
    // 0x2e8414: 0x0  nop
    ctx->pc = 0x2e8414u;
    // NOP
    ctx->pc = 0x2e8418u;
}
