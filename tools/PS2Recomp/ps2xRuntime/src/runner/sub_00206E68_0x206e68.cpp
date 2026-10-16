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

// Function: sub_00206E68
// Address: 0x206e68 - 0x206ea8
void sub_00206E68_0x206e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206E68_0x206e68");
#endif

    switch (ctx->pc) {
        case 0x206e68u: goto label_206e68;
        case 0x206e6cu: goto label_206e6c;
        case 0x206e70u: goto label_206e70;
        case 0x206e74u: goto label_206e74;
        case 0x206e78u: goto label_206e78;
        case 0x206e7cu: goto label_206e7c;
        case 0x206e80u: goto label_206e80;
        case 0x206e84u: goto label_206e84;
        case 0x206e88u: goto label_206e88;
        case 0x206e8cu: goto label_206e8c;
        case 0x206e90u: goto label_206e90;
        case 0x206e94u: goto label_206e94;
        case 0x206e98u: goto label_206e98;
        case 0x206e9cu: goto label_206e9c;
        case 0x206ea0u: goto label_206ea0;
        case 0x206ea4u: goto label_206ea4;
        default: break;
    }

    ctx->pc = 0x206e68u;

label_206e68:
    // 0x206e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206e6c:
    // 0x206e6c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x206e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_206e70:
    // 0x206e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206e74:
    // 0x206e74: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x206e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_206e78:
    // 0x206e78: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x206e78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_206e7c:
    // 0x206e7c: 0x8c621098  lw          $v0, 0x1098($v1)
    ctx->pc = 0x206e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4248)));
label_206e80:
    // 0x206e80: 0x40f809  jalr        $v0
label_206e84:
    if (ctx->pc == 0x206E84u) {
        ctx->pc = 0x206E88u;
        goto label_206e88;
    }
    ctx->pc = 0x206E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206E88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E80u, 0x206E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206E88u;
label_206e88:
    // 0x206e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206e8c:
    // 0x206e8c: 0x3e00008  jr          $ra
label_206e90:
    if (ctx->pc == 0x206E90u) {
        ctx->pc = 0x206E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E8Cu;
        // 0x206e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E94u;
        goto label_206e94;
    }
    ctx->pc = 0x206E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E8Cu;
        // 0x206e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206E94u;
label_206e94:
    // 0x206e94: 0x0  nop
    ctx->pc = 0x206e94u;
    // NOP
label_206e98:
    // 0x206e98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x206e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_206e9c:
    // 0x206e9c: 0x0  nop
    ctx->pc = 0x206e9cu;
    // NOP
label_206ea0:
    // 0x206ea0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x206ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_206ea4:
    // 0x206ea4: 0x0  nop
    ctx->pc = 0x206ea4u;
    // NOP
    ctx->pc = 0x206ea8u;
}
