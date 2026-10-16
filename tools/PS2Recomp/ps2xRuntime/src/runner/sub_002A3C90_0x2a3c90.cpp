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

// Function: sub_002A3C90
// Address: 0x2a3c90 - 0x2a3cf8
void sub_002A3C90_0x2a3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3C90_0x2a3c90");
#endif

    switch (ctx->pc) {
        case 0x2a3c90u: goto label_2a3c90;
        case 0x2a3c94u: goto label_2a3c94;
        case 0x2a3c98u: goto label_2a3c98;
        case 0x2a3c9cu: goto label_2a3c9c;
        case 0x2a3ca0u: goto label_2a3ca0;
        case 0x2a3ca4u: goto label_2a3ca4;
        case 0x2a3ca8u: goto label_2a3ca8;
        case 0x2a3cacu: goto label_2a3cac;
        case 0x2a3cb0u: goto label_2a3cb0;
        case 0x2a3cb4u: goto label_2a3cb4;
        case 0x2a3cb8u: goto label_2a3cb8;
        case 0x2a3cbcu: goto label_2a3cbc;
        case 0x2a3cc0u: goto label_2a3cc0;
        case 0x2a3cc4u: goto label_2a3cc4;
        case 0x2a3cc8u: goto label_2a3cc8;
        case 0x2a3cccu: goto label_2a3ccc;
        case 0x2a3cd0u: goto label_2a3cd0;
        case 0x2a3cd4u: goto label_2a3cd4;
        case 0x2a3cd8u: goto label_2a3cd8;
        case 0x2a3cdcu: goto label_2a3cdc;
        case 0x2a3ce0u: goto label_2a3ce0;
        case 0x2a3ce4u: goto label_2a3ce4;
        case 0x2a3ce8u: goto label_2a3ce8;
        case 0x2a3cecu: goto label_2a3cec;
        case 0x2a3cf0u: goto label_2a3cf0;
        case 0x2a3cf4u: goto label_2a3cf4;
        default: break;
    }

    ctx->pc = 0x2a3c90u;

label_2a3c90:
    // 0x2a3c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a3c94:
    // 0x2a3c94: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a3c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3c98:
    // 0x2a3c98: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2a3c9c:
    if (ctx->pc == 0x2A3C9Cu) {
        ctx->pc = 0x2A3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C98u;
        // 0x2a3c9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CA0u;
        goto label_2a3ca0;
    }
    ctx->pc = 0x2A3C98u;
    {
        const bool branch_taken_0x2a3c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C98u;
        // 0x2a3c9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c98) {
            ctx->pc = 0x2A3CBCu;
            goto label_2a3cbc;
        }
    }
    ctx->pc = 0x2A3CA0u;
label_2a3ca0:
    // 0x2a3ca0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2a3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a3ca4:
    // 0x2a3ca4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2a3ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2a3ca8:
    // 0x2a3ca8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2a3cac:
    if (ctx->pc == 0x2A3CACu) {
        ctx->pc = 0x2A3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CA8u;
        // 0x2a3cac: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CB0u;
        goto label_2a3cb0;
    }
    ctx->pc = 0x2A3CA8u;
    {
        const bool branch_taken_0x2a3ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CA8u;
        // 0x2a3cac: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ca8) {
            ctx->pc = 0x2A3CE8u;
            goto label_2a3ce8;
        }
    }
    ctx->pc = 0x2A3CB0u;
label_2a3cb0:
    // 0x2a3cb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a3cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a3cb4:
    // 0x2a3cb4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2a3cb8:
    if (ctx->pc == 0x2A3CB8u) {
        ctx->pc = 0x2A3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CB4u;
        // 0x2a3cb8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CBCu;
        goto label_2a3cbc;
    }
    ctx->pc = 0x2A3CB4u;
    {
        const bool branch_taken_0x2a3cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CB4u;
        // 0x2a3cb8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3cb4) {
            ctx->pc = 0x2A3CE8u;
            goto label_2a3ce8;
        }
    }
    ctx->pc = 0x2A3CBCu;
label_2a3cbc:
    // 0x2a3cbc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a3cc0:
    // 0x2a3cc0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a3cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2a3cc4:
    // 0x2a3cc4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2a3cc8:
    if (ctx->pc == 0x2A3CC8u) {
        ctx->pc = 0x2A3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CC4u;
        // 0x2a3cc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CCCu;
        goto label_2a3ccc;
    }
    ctx->pc = 0x2A3CC4u;
    {
        const bool branch_taken_0x2a3cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CC4u;
        // 0x2a3cc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3cc4) {
            ctx->pc = 0x2A3CECu;
            goto label_2a3cec;
        }
    }
    ctx->pc = 0x2A3CCCu;
label_2a3ccc:
    // 0x2a3ccc: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x2a3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_2a3cd0:
    // 0x2a3cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3cd4:
    // 0x2a3cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3cd8:
    // 0x2a3cd8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2a3cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2a3cdc:
    // 0x2a3cdc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2a3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2a3ce0:
    // 0x2a3ce0: 0x40f809  jalr        $v0
label_2a3ce4:
    if (ctx->pc == 0x2A3CE4u) {
        ctx->pc = 0x2A3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CE0u;
        // 0x2a3ce4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CE8u;
        goto label_2a3ce8;
    }
    ctx->pc = 0x2A3CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3CE8u);
        ctx->pc = 0x2A3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CE0u;
        // 0x2a3ce4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3CE0u, 0x2A3CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3CE8u;
label_2a3ce8:
    // 0x2a3ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3cec:
    // 0x2a3cec: 0x3e00008  jr          $ra
label_2a3cf0:
    if (ctx->pc == 0x2A3CF0u) {
        ctx->pc = 0x2A3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CECu;
        // 0x2a3cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CF4u;
        goto label_2a3cf4;
    }
    ctx->pc = 0x2A3CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CECu;
        // 0x2a3cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3CF4u;
label_2a3cf4:
    // 0x2a3cf4: 0x0  nop
    ctx->pc = 0x2a3cf4u;
    // NOP
    ctx->pc = 0x2a3cf8u;
}
