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

// Function: sub_001F8AF8
// Address: 0x1f8af8 - 0x1f8b80
void sub_001F8AF8_0x1f8af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8AF8_0x1f8af8");
#endif

    switch (ctx->pc) {
        case 0x1f8b28u: goto label_1f8b28;
        case 0x1f8b74u: goto label_1f8b74;
        default: break;
    }

    ctx->pc = 0x1f8af8u;

    // 0x1f8af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8afc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f8afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8b04: 0x24a8029c  addiu       $t0, $a1, 0x29C
    ctx->pc = 0x1f8b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 668));
    // 0x1f8b08: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x1f8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1f8b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8b10: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x1f8b10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8b14: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8B14u;
    {
        const bool branch_taken_0x1f8b14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B14u;
        // 0x1f8b18: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b14) {
            ctx->pc = 0x1F8B48u;
            goto label_1f8b48;
        }
    }
    ctx->pc = 0x1F8B1Cu;
    // 0x1f8b1c: 0x24a70018  addiu       $a3, $a1, 0x18
    ctx->pc = 0x1f8b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x1f8b20: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1f8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1f8b24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f8b28:
    // 0x1f8b28: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1f8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1f8b2c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1f8b2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8b30: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1f8b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f8b34: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1f8b34u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1f8b38: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x1f8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1f8b3c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1f8b3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8b40: 0x5064fff9  beql        $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F8B40u;
    {
        const bool branch_taken_0x1f8b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f8b40) {
            ctx->pc = 0x1F8B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8B40u;
            // 0x1f8b44: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8b28;
        }
    }
    ctx->pc = 0x1F8B48u;
label_1f8b48:
    // 0x1f8b48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f8b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8b4c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1f8b4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8b50: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8B50u;
    {
        const bool branch_taken_0x1f8b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B50u;
        // 0x1f8b54: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b50) {
            ctx->pc = 0x1F8B6Cu;
            goto label_1f8b6c;
        }
    }
    ctx->pc = 0x1F8B58u;
    // 0x1f8b58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f8b5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1f8b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1f8b60: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1f8b64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8B64u;
    {
        const bool branch_taken_0x1f8b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B64u;
        // 0x1f8b68: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b64) {
            ctx->pc = 0x1F8B74u;
            goto label_1f8b74;
        }
    }
    ctx->pc = 0x1F8B6Cu;
label_1f8b6c:
    // 0x1f8b6c: 0xc0c53aa  jal         func_314EA8
    ctx->pc = 0x1F8B6Cu;
    SET_GPR_U32(ctx, 31, 0x1F8B74u);
    ctx->pc = 0x314EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EA8u, 0x1F8B6Cu, 0x1F8B74u)) {
        return;
    }
    ctx->pc = 0x1F8B74u;
label_1f8b74:
    // 0x1f8b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B78u;
        // 0x1f8b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8B80u;
}
