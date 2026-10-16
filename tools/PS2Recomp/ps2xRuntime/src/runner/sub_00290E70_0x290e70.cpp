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

// Function: sub_00290E70
// Address: 0x290e70 - 0x290ed0
void sub_00290E70_0x290e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290E70_0x290e70");
#endif

    switch (ctx->pc) {
        case 0x290e70u: goto label_290e70;
        case 0x290e74u: goto label_290e74;
        case 0x290e78u: goto label_290e78;
        case 0x290e7cu: goto label_290e7c;
        case 0x290e80u: goto label_290e80;
        case 0x290e84u: goto label_290e84;
        case 0x290e88u: goto label_290e88;
        case 0x290e8cu: goto label_290e8c;
        case 0x290e90u: goto label_290e90;
        case 0x290e94u: goto label_290e94;
        case 0x290e98u: goto label_290e98;
        case 0x290e9cu: goto label_290e9c;
        case 0x290ea0u: goto label_290ea0;
        case 0x290ea4u: goto label_290ea4;
        case 0x290ea8u: goto label_290ea8;
        case 0x290eacu: goto label_290eac;
        case 0x290eb0u: goto label_290eb0;
        case 0x290eb4u: goto label_290eb4;
        case 0x290eb8u: goto label_290eb8;
        case 0x290ebcu: goto label_290ebc;
        case 0x290ec0u: goto label_290ec0;
        case 0x290ec4u: goto label_290ec4;
        case 0x290ec8u: goto label_290ec8;
        case 0x290eccu: goto label_290ecc;
        default: break;
    }

    ctx->pc = 0x290e70u;

label_290e70:
    // 0x290e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_290e74:
    // 0x290e74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x290e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_290e78:
    // 0x290e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_290e7c:
    // 0x290e7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290e80:
    // 0x290e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_290e84:
    // 0x290e84: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x290e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_290e88:
    // 0x290e88: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_290e8c:
    if (ctx->pc == 0x290E8Cu) {
        ctx->pc = 0x290E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E88u;
        // 0x290e8c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E90u;
        goto label_290e90;
    }
    ctx->pc = 0x290E88u;
    {
        const bool branch_taken_0x290e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E88u;
        // 0x290e8c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e88) {
            ctx->pc = 0x290EA0u;
            goto label_290ea0;
        }
    }
    ctx->pc = 0x290E90u;
label_290e90:
    // 0x290e90: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x290e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_290e94:
    // 0x290e94: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x290e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_290e98:
    // 0x290e98: 0x40f809  jalr        $v0
label_290e9c:
    if (ctx->pc == 0x290E9Cu) {
        ctx->pc = 0x290EA0u;
        goto label_290ea0;
    }
    ctx->pc = 0x290E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290EA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290E98u, 0x290EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290EA0u;
label_290ea0:
    // 0x290ea0: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x290ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_290ea4:
    // 0x290ea4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_290ea8:
    if (ctx->pc == 0x290EA8u) {
        ctx->pc = 0x290EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EA4u;
        // 0x290ea8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290EACu;
        goto label_290eac;
    }
    ctx->pc = 0x290EA4u;
    {
        const bool branch_taken_0x290ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EA4u;
        // 0x290ea8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ea4) {
            ctx->pc = 0x290EBCu;
            goto label_290ebc;
        }
    }
    ctx->pc = 0x290EACu;
label_290eac:
    // 0x290eac: 0xc0a3c0c  jal         func_28F030
label_290eb0:
    if (ctx->pc == 0x290EB0u) {
        ctx->pc = 0x290EB4u;
        goto label_290eb4;
    }
    ctx->pc = 0x290EACu;
    SET_GPR_U32(ctx, 31, 0x290EB4u);
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x290EACu, 0x290EB4u)) {
        return;
    }
    ctx->pc = 0x290EB4u;
label_290eb4:
    // 0x290eb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x290eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290eb8:
    // 0x290eb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x290eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_290ebc:
    // 0x290ebc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x290ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_290ec0:
    // 0x290ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_290ec4:
    // 0x290ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290ec8:
    // 0x290ec8: 0x3e00008  jr          $ra
label_290ecc:
    if (ctx->pc == 0x290ECCu) {
        ctx->pc = 0x290ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EC8u;
        // 0x290ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290ED0u;
        goto label_fallthrough_0x290ec8;
    }
    ctx->pc = 0x290EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EC8u;
        // 0x290ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x290ec8:
    ctx->pc = 0x290ED0u;
}
