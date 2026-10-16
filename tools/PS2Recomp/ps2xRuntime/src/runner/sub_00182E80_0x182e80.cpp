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

// Function: sub_00182E80
// Address: 0x182e80 - 0x182ed0
void sub_00182E80_0x182e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182E80_0x182e80");
#endif

    switch (ctx->pc) {
        case 0x182ea4u: goto label_182ea4;
        case 0x182eacu: goto label_182eac;
        case 0x182ebcu: goto label_182ebc;
        default: break;
    }

    ctx->pc = 0x182e80u;

    // 0x182e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182e84: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x182e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x182e88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x182e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x182e8c: 0x8c623bc0  lw          $v0, 0x3BC0($v1)
    ctx->pc = 0x182e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C3BC0u));
    // 0x182e90: 0x24703bc0  addiu       $s0, $v1, 0x3BC0
    ctx->pc = 0x182e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15296));
    // 0x182e94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x182E94u;
    {
        const bool branch_taken_0x182e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E94u;
        // 0x182e98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e94) {
            ctx->pc = 0x182EB4u;
            goto label_182eb4;
        }
    }
    ctx->pc = 0x182E9Cu;
    // 0x182e9c: 0xc0a5bca  jal         func_296F28
    ctx->pc = 0x182E9Cu;
    SET_GPR_U32(ctx, 31, 0x182EA4u);
    ctx->pc = 0x296F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296F28u, 0x182E9Cu, 0x182EA4u)) {
        return;
    }
    ctx->pc = 0x182EA4u;
label_182ea4:
    // 0x182ea4: 0xc0c99e6  jal         func_326798
    ctx->pc = 0x182EA4u;
    SET_GPR_U32(ctx, 31, 0x182EACu);
    ctx->pc = 0x182EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182EA4u;
    // 0x182ea8: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326798u, 0x182EA4u, 0x182EACu)) {
        return;
    }
    ctx->pc = 0x182EACu;
label_182eac:
    // 0x182eac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182EACu;
    {
        const bool branch_taken_0x182eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182EACu;
        // 0x182eb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182eac) {
            ctx->pc = 0x182EC0u;
            goto label_182ec0;
        }
    }
    ctx->pc = 0x182EB4u;
label_182eb4:
    // 0x182eb4: 0xc0c969a  jal         func_325A68
    ctx->pc = 0x182EB4u;
    SET_GPR_U32(ctx, 31, 0x182EBCu);
    ctx->pc = 0x182EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182EB4u;
    // 0x182eb8: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x325A68u, 0x182EB4u, 0x182EBCu)) {
        return;
    }
    ctx->pc = 0x182EBCu;
label_182ebc:
    // 0x182ebc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x182ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_182ec0:
    // 0x182ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x182EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182EC8u;
        // 0x182ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182ED0u;
}
