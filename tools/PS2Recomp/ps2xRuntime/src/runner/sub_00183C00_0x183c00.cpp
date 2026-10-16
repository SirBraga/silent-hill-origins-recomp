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

// Function: sub_00183C00
// Address: 0x183c00 - 0x183c48
void sub_00183C00_0x183c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183C00_0x183c00");
#endif

    switch (ctx->pc) {
        case 0x183c1cu: goto label_183c1c;
        case 0x183c28u: goto label_183c28;
        default: break;
    }

    ctx->pc = 0x183c00u;

    // 0x183c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183c04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x183c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183c08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x183c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x183c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183c14: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x183C14u;
    SET_GPR_U32(ctx, 31, 0x183C1Cu);
    ctx->pc = 0x183C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C14u;
    // 0x183c18: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x183C14u, 0x183C1Cu)) {
        return;
    }
    ctx->pc = 0x183C1Cu;
label_183c1c:
    // 0x183c1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c20: 0xc060f12  jal         func_183C48
    ctx->pc = 0x183C20u;
    SET_GPR_U32(ctx, 31, 0x183C28u);
    ctx->pc = 0x183C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C20u;
    // 0x183c24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183C48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183C48u, 0x183C20u, 0x183C28u)) {
        return;
    }
    ctx->pc = 0x183C28u;
label_183c28:
    // 0x183c28: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x183c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x183c2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x183c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183c30: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x183c30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x183c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183c38: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x183c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x183C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C3Cu;
        // 0x183c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183C44u;
    // 0x183c44: 0x0  nop
    ctx->pc = 0x183c44u;
    // NOP
    ctx->pc = 0x183c48u;
}
