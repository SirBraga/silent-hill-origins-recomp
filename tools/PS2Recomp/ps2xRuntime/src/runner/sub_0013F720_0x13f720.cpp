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

// Function: sub_0013F720
// Address: 0x13f720 - 0x13f768
void sub_0013F720_0x13f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F720_0x13f720");
#endif

    switch (ctx->pc) {
        case 0x13f73cu: goto label_13f73c;
        case 0x13f748u: goto label_13f748;
        default: break;
    }

    ctx->pc = 0x13f720u;

    // 0x13f720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f724: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f728: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f734: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x13F734u;
    SET_GPR_U32(ctx, 31, 0x13F73Cu);
    ctx->pc = 0x13F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F734u;
    // 0x13f738: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x13F734u, 0x13F73Cu)) {
        return;
    }
    ctx->pc = 0x13F73Cu;
label_13f73c:
    // 0x13f73c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13f73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f740: 0xc04fdda  jal         func_13F768
    ctx->pc = 0x13F740u;
    SET_GPR_U32(ctx, 31, 0x13F748u);
    ctx->pc = 0x13F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F740u;
    // 0x13f744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13F768u, 0x13F740u, 0x13F748u)) {
        return;
    }
    ctx->pc = 0x13F748u;
label_13f748:
    // 0x13f748: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x13f748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13f74c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f750: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x13f750u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x13f754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f758: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13f758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f75c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F75Cu;
        // 0x13f760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F764u;
    // 0x13f764: 0x0  nop
    ctx->pc = 0x13f764u;
    // NOP
    ctx->pc = 0x13f768u;
}
