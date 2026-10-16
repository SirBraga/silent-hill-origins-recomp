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

// Function: sub_002A3BE8
// Address: 0x2a3be8 - 0x2a3c38
void sub_002A3BE8_0x2a3be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3BE8_0x2a3be8");
#endif

    switch (ctx->pc) {
        case 0x2a3c04u: goto label_2a3c04;
        case 0x2a3c20u: goto label_2a3c20;
        default: break;
    }

    ctx->pc = 0x2a3be8u;

    // 0x2a3be8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a3bec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a3becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a3bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3bf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a3bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3bfc: 0xc0a7cee  jal         func_29F3B8
    ctx->pc = 0x2A3BFCu;
    SET_GPR_U32(ctx, 31, 0x2A3C04u);
    ctx->pc = 0x2A3C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3BFCu;
    // 0x2a3c00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F3B8u, 0x2A3BFCu, 0x2A3C04u)) {
        return;
    }
    ctx->pc = 0x2A3C04u;
label_2a3c04:
    // 0x2a3c04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3c08: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3C08u;
    {
        const bool branch_taken_0x2a3c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C08u;
        // 0x2a3c0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c08) {
            ctx->pc = 0x2A3C20u;
            goto label_2a3c20;
        }
    }
    ctx->pc = 0x2A3C10u;
    // 0x2a3c10: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3C10u;
    {
        const bool branch_taken_0x2a3c10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C10u;
        // 0x2a3c14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c10) {
            ctx->pc = 0x2A3C20u;
            goto label_2a3c20;
        }
    }
    ctx->pc = 0x2A3C18u;
    // 0x2a3c18: 0xc0c4c8a  jal         func_313228
    ctx->pc = 0x2A3C18u;
    SET_GPR_U32(ctx, 31, 0x2A3C20u);
    ctx->pc = 0x2A3C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C18u;
    // 0x2a3c1c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x2A3C18u, 0x2A3C20u)) {
        return;
    }
    ctx->pc = 0x2A3C20u;
label_2a3c20:
    // 0x2a3c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3c24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a3c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C2Cu;
        // 0x2a3c30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3C34u;
    // 0x2a3c34: 0x0  nop
    ctx->pc = 0x2a3c34u;
    // NOP
    ctx->pc = 0x2a3c38u;
}
