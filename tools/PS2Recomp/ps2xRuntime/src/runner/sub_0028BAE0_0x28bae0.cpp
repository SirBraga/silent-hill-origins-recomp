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

// Function: sub_0028BAE0
// Address: 0x28bae0 - 0x28bb50
void sub_0028BAE0_0x28bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BAE0_0x28bae0");
#endif

    switch (ctx->pc) {
        case 0x28bafcu: goto label_28bafc;
        case 0x28bb14u: goto label_28bb14;
        case 0x28bb24u: goto label_28bb24;
        default: break;
    }

    ctx->pc = 0x28bae0u;

    // 0x28bae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28bae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28bae8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28baec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28baecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28baf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28baf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28baf4: 0xc0a2504  jal         func_289410
    ctx->pc = 0x28BAF4u;
    SET_GPR_U32(ctx, 31, 0x28BAFCu);
    ctx->pc = 0x28BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BAF4u;
    // 0x28baf8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289410u, 0x28BAF4u, 0x28BAFCu)) {
        return;
    }
    ctx->pc = 0x28BAFCu;
label_28bafc:
    // 0x28bafc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BAFCu;
    {
        const bool branch_taken_0x28bafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAFCu;
        // 0x28bb00: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bafc) {
            ctx->pc = 0x28BB1Cu;
            goto label_28bb1c;
        }
    }
    ctx->pc = 0x28BB04u;
    // 0x28bb04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28bb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb08: 0x24a5bae0  addiu       $a1, $a1, -0x4520
    ctx->pc = 0x28bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949600));
    // 0x28bb0c: 0xc0a2db6  jal         func_28B6D8
    ctx->pc = 0x28BB0Cu;
    SET_GPR_U32(ctx, 31, 0x28BB14u);
    ctx->pc = 0x28BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB0Cu;
    // 0x28bb10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B6D8u, 0x28BB0Cu, 0x28BB14u)) {
        return;
    }
    ctx->pc = 0x28BB14u;
label_28bb14:
    // 0x28bb14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28BB14u;
    {
        const bool branch_taken_0x28bb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB14u;
        // 0x28bb18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb14) {
            ctx->pc = 0x28BB3Cu;
            goto label_28bb3c;
        }
    }
    ctx->pc = 0x28BB1Cu;
label_28bb1c:
    // 0x28bb1c: 0xc0a2508  jal         func_289420
    ctx->pc = 0x28BB1Cu;
    SET_GPR_U32(ctx, 31, 0x28BB24u);
    ctx->pc = 0x28BB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB1Cu;
    // 0x28bb20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289420u, 0x28BB1Cu, 0x28BB24u)) {
        return;
    }
    ctx->pc = 0x28BB24u;
label_28bb24:
    // 0x28bb24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BB24u;
    {
        const bool branch_taken_0x28bb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB24u;
        // 0x28bb28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb24) {
            ctx->pc = 0x28BB3Cu;
            goto label_28bb3c;
        }
    }
    ctx->pc = 0x28BB2Cu;
    // 0x28bb2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28bb30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28bb34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x28bb38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28bb38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28bb3c:
    // 0x28bb3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28bb3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bb40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bb40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bb44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28bb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bb48: 0x3e00008  jr          $ra
    ctx->pc = 0x28BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB48u;
        // 0x28bb4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BB50u;
}
