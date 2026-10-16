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

// Function: sub_00281F80
// Address: 0x281f80 - 0x281fe0
void sub_00281F80_0x281f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281F80_0x281f80");
#endif

    switch (ctx->pc) {
        case 0x281f80u: goto label_281f80;
        case 0x281f84u: goto label_281f84;
        case 0x281f88u: goto label_281f88;
        case 0x281f8cu: goto label_281f8c;
        case 0x281f90u: goto label_281f90;
        case 0x281f94u: goto label_281f94;
        case 0x281f98u: goto label_281f98;
        case 0x281f9cu: goto label_281f9c;
        case 0x281fa0u: goto label_281fa0;
        case 0x281fa4u: goto label_281fa4;
        case 0x281fa8u: goto label_281fa8;
        case 0x281facu: goto label_281fac;
        case 0x281fb0u: goto label_281fb0;
        case 0x281fb4u: goto label_281fb4;
        case 0x281fb8u: goto label_281fb8;
        case 0x281fbcu: goto label_281fbc;
        case 0x281fc0u: goto label_281fc0;
        case 0x281fc4u: goto label_281fc4;
        case 0x281fc8u: goto label_281fc8;
        case 0x281fccu: goto label_281fcc;
        case 0x281fd0u: goto label_281fd0;
        case 0x281fd4u: goto label_281fd4;
        case 0x281fd8u: goto label_281fd8;
        case 0x281fdcu: goto label_281fdc;
        default: break;
    }

    ctx->pc = 0x281f80u;

label_281f80:
    // 0x281f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_281f84:
    // 0x281f84: 0x8f838840  lw          $v1, -0x77C0($gp)
    ctx->pc = 0x281f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
label_281f88:
    // 0x281f88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x281f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_281f8c:
    // 0x281f8c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x281f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_281f90:
    // 0x281f90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_281f94:
    // 0x281f94: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x281f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_281f98:
    // 0x281f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_281f9c:
    // 0x281f9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x281f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281fa0:
    // 0x281fa0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x281fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_281fa4:
    // 0x281fa4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x281fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_281fa8:
    // 0x281fa8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_281fac:
    if (ctx->pc == 0x281FACu) {
        ctx->pc = 0x281FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FA8u;
        // 0x281fac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281FB0u;
        goto label_281fb0;
    }
    ctx->pc = 0x281FA8u;
    {
        const bool branch_taken_0x281fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x281FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FA8u;
        // 0x281fac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fa8) {
            ctx->pc = 0x281FCCu;
            goto label_281fcc;
        }
    }
    ctx->pc = 0x281FB0u;
label_281fb0:
    // 0x281fb0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x281fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_281fb4:
    // 0x281fb4: 0x60f809  jalr        $v1
label_281fb8:
    if (ctx->pc == 0x281FB8u) {
        ctx->pc = 0x281FBCu;
        goto label_281fbc;
    }
    ctx->pc = 0x281FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x281FBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281FB4u, 0x281FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281FBCu;
label_281fbc:
    // 0x281fbc: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x281fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
label_281fc0:
    // 0x281fc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x281fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_281fc4:
    // 0x281fc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x281fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_281fc8:
    // 0x281fc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x281fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281fcc:
    // 0x281fcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x281fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_281fd0:
    // 0x281fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281fd4:
    // 0x281fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_281fd8:
    // 0x281fd8: 0x3e00008  jr          $ra
label_281fdc:
    if (ctx->pc == 0x281FDCu) {
        ctx->pc = 0x281FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FD8u;
        // 0x281fdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281FE0u;
        goto label_fallthrough_0x281fd8;
    }
    ctx->pc = 0x281FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FD8u;
        // 0x281fdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x281fd8:
    ctx->pc = 0x281FE0u;
}
