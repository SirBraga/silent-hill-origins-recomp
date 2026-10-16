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

// Function: sub_003051B0
// Address: 0x3051b0 - 0x305208
void sub_003051B0_0x3051b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003051B0_0x3051b0");
#endif

    switch (ctx->pc) {
        case 0x3051c8u: goto label_3051c8;
        default: break;
    }

    ctx->pc = 0x3051b0u;

    // 0x3051b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3051b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3051b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3051b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3051b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3051b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3051bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3051bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3051c0: 0xc0c0cdc  jal         func_303370
    ctx->pc = 0x3051C0u;
    SET_GPR_U32(ctx, 31, 0x3051C8u);
    ctx->pc = 0x3051C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051C0u;
    // 0x3051c4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303370u, 0x3051C0u, 0x3051C8u)) {
        return;
    }
    ctx->pc = 0x3051C8u;
label_3051c8:
    // 0x3051c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3051c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3051cc: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3051CCu;
    {
        const bool branch_taken_0x3051cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3051cc) {
            ctx->pc = 0x3051D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3051CCu;
            // 0x3051d0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3051DCu;
            goto label_3051dc;
        }
    }
    ctx->pc = 0x3051D4u;
    // 0x3051d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3051D4u;
    {
        const bool branch_taken_0x3051d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051D4u;
        // 0x3051d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051d4) {
            ctx->pc = 0x3051F4u;
            goto label_3051f4;
        }
    }
    ctx->pc = 0x3051DCu;
label_3051dc:
    // 0x3051dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3051dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3051e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3051e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3051e4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3051e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3051e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3051e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3051ec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3051ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3051f0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3051f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3051f4:
    // 0x3051f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3051f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3051f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3051f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3051fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3051FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051FCu;
        // 0x305200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3051FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305204u;
    // 0x305204: 0x0  nop
    ctx->pc = 0x305204u;
    // NOP
    ctx->pc = 0x305208u;
}
