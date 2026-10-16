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

// Function: sub_0017CE68
// Address: 0x17ce68 - 0x17cea8
void sub_0017CE68_0x17ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CE68_0x17ce68");
#endif

    switch (ctx->pc) {
        case 0x17ce84u: goto label_17ce84;
        case 0x17ce8cu: goto label_17ce8c;
        default: break;
    }

    ctx->pc = 0x17ce68u;

    // 0x17ce68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ce68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ce6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17ce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ce70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ce70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ce74: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x17ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17ce78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ce7c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17CE7Cu;
    SET_GPR_U32(ctx, 31, 0x17CE84u);
    ctx->pc = 0x17CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE7Cu;
    // 0x17ce80: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17CE7Cu, 0x17CE84u)) {
        return;
    }
    ctx->pc = 0x17CE84u;
label_17ce84:
    // 0x17ce84: 0xc05f1b2  jal         func_17C6C8
    ctx->pc = 0x17CE84u;
    SET_GPR_U32(ctx, 31, 0x17CE8Cu);
    ctx->pc = 0x17CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE84u;
    // 0x17ce88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17C6C8u, 0x17CE84u, 0x17CE8Cu)) {
        return;
    }
    ctx->pc = 0x17CE8Cu;
label_17ce8c:
    // 0x17ce8c: 0xae028754  sw          $v0, -0x78AC($s0)
    ctx->pc = 0x17ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936404), GPR_U32(ctx, 2));
    // 0x17ce90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ce90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ce94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ce94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ce98: 0x3e00008  jr          $ra
    ctx->pc = 0x17CE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE98u;
        // 0x17ce9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CEA0u;
    // 0x17cea0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17cea4: 0x0  nop
    ctx->pc = 0x17cea4u;
    // NOP
    ctx->pc = 0x17cea8u;
}
