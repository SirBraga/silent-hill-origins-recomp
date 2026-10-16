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

// Function: sub_00216F28
// Address: 0x216f28 - 0x216f90
void sub_00216F28_0x216f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216F28_0x216f28");
#endif

    switch (ctx->pc) {
        case 0x216f68u: goto label_216f68;
        case 0x216f74u: goto label_216f74;
        default: break;
    }

    ctx->pc = 0x216f28u;

    // 0x216f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216f2c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x216f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x216f30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x216f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x216f34: 0x8c432d34  lw          $v1, 0x2D34($v0)
    ctx->pc = 0x216f34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x702D34u));
    // 0x216f38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216f40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x216F40u;
    {
        const bool branch_taken_0x216f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F40u;
        // 0x216f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f40) {
            ctx->pc = 0x216F50u;
            goto label_216f50;
        }
    }
    ctx->pc = 0x216F48u;
    // 0x216f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x216F48u;
    {
        const bool branch_taken_0x216f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F48u;
        // 0x216f4c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f48) {
            ctx->pc = 0x216F54u;
            goto label_216f54;
        }
    }
    ctx->pc = 0x216F50u;
label_216f50:
    // 0x216f50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x216f50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216f54:
    // 0x216f54: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x216F54u;
    {
        const bool branch_taken_0x216f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x216f54) {
            ctx->pc = 0x216F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216F54u;
            // 0x216f58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216F5Cu;
    // 0x216f5c: 0x2404029c  addiu       $a0, $zero, 0x29C
    ctx->pc = 0x216f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x216f60: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x216F60u;
    SET_GPR_U32(ctx, 31, 0x216F68u);
    ctx->pc = 0x216F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F60u;
    // 0x216f64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x216F60u, 0x216F68u)) {
        return;
    }
    ctx->pc = 0x216F68u;
label_216f68:
    // 0x216f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x216f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f6c: 0xc0852a4  jal         func_214A90
    ctx->pc = 0x216F6Cu;
    SET_GPR_U32(ctx, 31, 0x216F74u);
    ctx->pc = 0x216F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F6Cu;
    // 0x216f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x214A90u, 0x216F6Cu, 0x216F74u)) {
        return;
    }
    ctx->pc = 0x216F74u;
label_216f74:
    // 0x216f74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x216f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_216f78:
    // 0x216f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x216F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F7Cu;
        // 0x216f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216F84u;
    // 0x216f84: 0x0  nop
    ctx->pc = 0x216f84u;
    // NOP
    // 0x216f88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x216f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x216f8c: 0x0  nop
    ctx->pc = 0x216f8cu;
    // NOP
    ctx->pc = 0x216f90u;
}
