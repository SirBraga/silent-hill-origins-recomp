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

// Function: sub_00166FE0
// Address: 0x166fe0 - 0x167018
void sub_00166FE0_0x166fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166FE0_0x166fe0");
#endif

    switch (ctx->pc) {
        case 0x166ff4u: goto label_166ff4;
        case 0x167000u: goto label_167000;
        default: break;
    }

    ctx->pc = 0x166fe0u;

    // 0x166fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166fe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x166fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x166fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166fec: 0xc0a0b6e  jal         func_282DB8
    ctx->pc = 0x166FECu;
    SET_GPR_U32(ctx, 31, 0x166FF4u);
    ctx->pc = 0x166FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FECu;
    // 0x166ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282DB8u, 0x166FECu, 0x166FF4u)) {
        return;
    }
    ctx->pc = 0x166FF4u;
label_166ff4:
    // 0x166ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ff8: 0xc097b18  jal         func_25EC60
    ctx->pc = 0x166FF8u;
    SET_GPR_U32(ctx, 31, 0x167000u);
    ctx->pc = 0x166FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FF8u;
    // 0x166ffc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC60u, 0x166FF8u, 0x167000u)) {
        return;
    }
    ctx->pc = 0x167000u;
label_167000:
    // 0x167000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167008: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x167008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16700c: 0x3e00008  jr          $ra
    ctx->pc = 0x16700Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16700Cu;
        // 0x167010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16700Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167014u;
    // 0x167014: 0x0  nop
    ctx->pc = 0x167014u;
    // NOP
    ctx->pc = 0x167018u;
}
