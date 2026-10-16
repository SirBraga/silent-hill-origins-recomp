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

// Function: sub_0024EC68
// Address: 0x24ec68 - 0x24eca8
void sub_0024EC68_0x24ec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EC68_0x24ec68");
#endif

    switch (ctx->pc) {
        case 0x24ec68u: goto label_24ec68;
        case 0x24ec6cu: goto label_24ec6c;
        case 0x24ec70u: goto label_24ec70;
        case 0x24ec74u: goto label_24ec74;
        case 0x24ec78u: goto label_24ec78;
        case 0x24ec7cu: goto label_24ec7c;
        case 0x24ec80u: goto label_24ec80;
        case 0x24ec84u: goto label_24ec84;
        case 0x24ec88u: goto label_24ec88;
        case 0x24ec8cu: goto label_24ec8c;
        case 0x24ec90u: goto label_24ec90;
        case 0x24ec94u: goto label_24ec94;
        case 0x24ec98u: goto label_24ec98;
        case 0x24ec9cu: goto label_24ec9c;
        case 0x24eca0u: goto label_24eca0;
        case 0x24eca4u: goto label_24eca4;
        default: break;
    }

    ctx->pc = 0x24ec68u;

label_24ec68:
    // 0x24ec68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24ec6c:
    // 0x24ec6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24ec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_24ec70:
    // 0x24ec70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24ec74:
    // 0x24ec74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24ec78:
    // 0x24ec78: 0x8c633f80  lw          $v1, 0x3F80($v1)
    ctx->pc = 0x24ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16256)));
label_24ec7c:
    // 0x24ec7c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24ec80:
    // 0x24ec80: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24ec84:
    // 0x24ec84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24ec88:
    // 0x24ec88: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x24ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_24ec8c:
    // 0x24ec8c: 0x40f809  jalr        $v0
label_24ec90:
    if (ctx->pc == 0x24EC90u) {
        ctx->pc = 0x24EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC8Cu;
        // 0x24ec90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC94u;
        goto label_24ec94;
    }
    ctx->pc = 0x24EC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24EC94u);
        ctx->pc = 0x24EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC8Cu;
        // 0x24ec90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EC8Cu, 0x24EC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24EC94u;
label_24ec94:
    // 0x24ec94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24ec94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ec98:
    // 0x24ec98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24ec98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24ec9c:
    // 0x24ec9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24eca0:
    // 0x24eca0: 0x3e00008  jr          $ra
label_24eca4:
    if (ctx->pc == 0x24ECA4u) {
        ctx->pc = 0x24ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECA0u;
        // 0x24eca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECA8u;
        goto label_fallthrough_0x24eca0;
    }
    ctx->pc = 0x24ECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECA0u;
        // 0x24eca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ECA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24eca0:
    ctx->pc = 0x24ECA8u;
}
