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

// Function: sub_0019ACC0
// Address: 0x19acc0 - 0x19ad08
void sub_0019ACC0_0x19acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ACC0_0x19acc0");
#endif

    switch (ctx->pc) {
        case 0x19acdcu: goto label_19acdc;
        case 0x19ace8u: goto label_19ace8;
        default: break;
    }

    ctx->pc = 0x19acc0u;

    // 0x19acc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19acc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19acc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19accc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19acccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19acd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19acd4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19ACD4u;
    SET_GPR_U32(ctx, 31, 0x19ACDCu);
    ctx->pc = 0x19ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACD4u;
    // 0x19acd8: 0x240400b4  addiu       $a0, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19ACD4u, 0x19ACDCu)) {
        return;
    }
    ctx->pc = 0x19ACDCu;
label_19acdc:
    // 0x19acdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19acdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ace0: 0xc06697e  jal         func_19A5F8
    ctx->pc = 0x19ACE0u;
    SET_GPR_U32(ctx, 31, 0x19ACE8u);
    ctx->pc = 0x19ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACE0u;
    // 0x19ace4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19A5F8u, 0x19ACE0u, 0x19ACE8u)) {
        return;
    }
    ctx->pc = 0x19ACE8u;
label_19ace8:
    // 0x19ace8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x19ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19acec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19acecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19acf0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x19acf0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x19acf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19acf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19acf8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19acf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acfc: 0x3e00008  jr          $ra
    ctx->pc = 0x19ACFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACFCu;
        // 0x19ad00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ACFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AD04u;
    // 0x19ad04: 0x0  nop
    ctx->pc = 0x19ad04u;
    // NOP
    ctx->pc = 0x19ad08u;
}
