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

// Function: sub_00295E28
// Address: 0x295e28 - 0x295e80
void sub_00295E28_0x295e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295E28_0x295e28");
#endif

    switch (ctx->pc) {
        case 0x295e28u: goto label_295e28;
        case 0x295e2cu: goto label_295e2c;
        case 0x295e30u: goto label_295e30;
        case 0x295e34u: goto label_295e34;
        case 0x295e38u: goto label_295e38;
        case 0x295e3cu: goto label_295e3c;
        case 0x295e40u: goto label_295e40;
        case 0x295e44u: goto label_295e44;
        case 0x295e48u: goto label_295e48;
        case 0x295e4cu: goto label_295e4c;
        case 0x295e50u: goto label_295e50;
        case 0x295e54u: goto label_295e54;
        case 0x295e58u: goto label_295e58;
        case 0x295e5cu: goto label_295e5c;
        case 0x295e60u: goto label_295e60;
        case 0x295e64u: goto label_295e64;
        case 0x295e68u: goto label_295e68;
        case 0x295e6cu: goto label_295e6c;
        case 0x295e70u: goto label_295e70;
        case 0x295e74u: goto label_295e74;
        case 0x295e78u: goto label_295e78;
        case 0x295e7cu: goto label_295e7c;
        default: break;
    }

    ctx->pc = 0x295e28u;

label_295e28:
    // 0x295e28: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x295e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_295e2c:
    // 0x295e2c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_295e30:
    // 0x295e30: 0x8c457948  lw          $a1, 0x7948($v0)
    ctx->pc = 0x295e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31048)));
label_295e34:
    // 0x295e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_295e38:
    // 0x295e38: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_295e3c:
    if (ctx->pc == 0x295E3Cu) {
        ctx->pc = 0x295E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E38u;
        // 0x295e3c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295E40u;
        goto label_295e40;
    }
    ctx->pc = 0x295E38u;
    {
        const bool branch_taken_0x295e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x295E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E38u;
        // 0x295e3c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e38) {
            ctx->pc = 0x295E6Cu;
            goto label_295e6c;
        }
    }
    ctx->pc = 0x295E40u;
label_295e40:
    // 0x295e40: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x295e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_295e44:
    // 0x295e44: 0x8c43e7e4  lw          $v1, -0x181C($v0)
    ctx->pc = 0x295e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961124)));
label_295e48:
    // 0x295e48: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_295e4c:
    if (ctx->pc == 0x295E4Cu) {
        ctx->pc = 0x295E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E48u;
        // 0x295e4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295E50u;
        goto label_295e50;
    }
    ctx->pc = 0x295E48u;
    {
        const bool branch_taken_0x295e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E48u;
        // 0x295e4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e48) {
            ctx->pc = 0x295E70u;
            goto label_295e70;
        }
    }
    ctx->pc = 0x295E50u;
label_295e50:
    // 0x295e50: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x295e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_295e54:
    // 0x295e54: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x295e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_295e58:
    // 0x295e58: 0x8c5c794c  lw          $gp, 0x794C($v0)
    ctx->pc = 0x295e58u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31052)));
label_295e5c:
    // 0x295e5c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x295e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_295e60:
    // 0x295e60: 0xa0f809  jalr        $a1
label_295e64:
    if (ctx->pc == 0x295E64u) {
        ctx->pc = 0x295E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E60u;
        // 0x295e64: 0x8c647950  lw          $a0, 0x7950($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295E68u;
        goto label_295e68;
    }
    ctx->pc = 0x295E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x295E68u);
        ctx->pc = 0x295E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E60u;
        // 0x295e64: 0x8c647950  lw          $a0, 0x7950($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31056)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295E60u, 0x295E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295E68u;
label_295e68:
    // 0x295e68: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x295e68u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295e6c:
    // 0x295e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x295e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_295e70:
    // 0x295e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_295e74:
    // 0x295e74: 0x3e00008  jr          $ra
label_295e78:
    if (ctx->pc == 0x295E78u) {
        ctx->pc = 0x295E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E74u;
        // 0x295e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295E7Cu;
        goto label_295e7c;
    }
    ctx->pc = 0x295E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E74u;
        // 0x295e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295E7Cu;
label_295e7c:
    // 0x295e7c: 0x0  nop
    ctx->pc = 0x295e7cu;
    // NOP
    ctx->pc = 0x295e80u;
}
