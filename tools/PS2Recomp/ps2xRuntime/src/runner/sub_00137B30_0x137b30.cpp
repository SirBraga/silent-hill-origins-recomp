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

// Function: sub_00137B30
// Address: 0x137b30 - 0x137bd0
void sub_00137B30_0x137b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137B30_0x137b30");
#endif

    switch (ctx->pc) {
        case 0x137b80u: goto label_137b80;
        case 0x137b90u: goto label_137b90;
        case 0x137ba4u: goto label_137ba4;
        case 0x137bb4u: goto label_137bb4;
        default: break;
    }

    ctx->pc = 0x137b30u;

    // 0x137b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137b34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x137b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x137b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137b3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137b40: 0x8c821bb0  lw          $v0, 0x1BB0($a0)
    ctx->pc = 0x137b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7088)));
    // 0x137b44: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x137B44u;
    {
        const bool branch_taken_0x137b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B44u;
        // 0x137b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b44) {
            ctx->pc = 0x137BB8u;
            goto label_137bb8;
        }
    }
    ctx->pc = 0x137B4Cu;
    // 0x137b4c: 0x24910320  addiu       $s1, $a0, 0x320
    ctx->pc = 0x137b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x137b50: 0x8e23083c  lw          $v1, 0x83C($s1)
    ctx->pc = 0x137b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
    // 0x137b54: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x137b54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
    // 0x137b58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x137b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x137b5c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x137B5Cu;
    {
        const bool branch_taken_0x137b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B5Cu;
        // 0x137b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b5c) {
            ctx->pc = 0x137BB8u;
            goto label_137bb8;
        }
    }
    ctx->pc = 0x137B64u;
    // 0x137b64: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x137b64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x137b68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x137b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x137b6c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x137B6Cu;
    {
        const bool branch_taken_0x137b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B6Cu;
        // 0x137b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b6c) {
            ctx->pc = 0x137BB8u;
            goto label_137bb8;
        }
    }
    ctx->pc = 0x137B74u;
    // 0x137b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b78: 0xc068218  jal         func_1A0860
    ctx->pc = 0x137B78u;
    SET_GPR_U32(ctx, 31, 0x137B80u);
    ctx->pc = 0x137B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B78u;
    // 0x137b7c: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x137B78u, 0x137B80u)) {
        return;
    }
    ctx->pc = 0x137B80u;
label_137b80:
    // 0x137b80: 0x8e0483c8  lw          $a0, -0x7C38($s0)
    ctx->pc = 0x137b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935496)));
    // 0x137b84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x137b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b88: 0xc065c7c  jal         func_1971F0
    ctx->pc = 0x137B88u;
    SET_GPR_U32(ctx, 31, 0x137B90u);
    ctx->pc = 0x137B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B88u;
    // 0x137b8c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971F0u, 0x137B88u, 0x137B90u)) {
        return;
    }
    ctx->pc = 0x137B90u;
label_137b90:
    // 0x137b90: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x137B90u;
    {
        const bool branch_taken_0x137b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137b90) {
            ctx->pc = 0x137B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137B90u;
            // 0x137b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137BB8u;
            goto label_137bb8;
        }
    }
    ctx->pc = 0x137B98u;
    // 0x137b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b9c: 0xc068218  jal         func_1A0860
    ctx->pc = 0x137B9Cu;
    SET_GPR_U32(ctx, 31, 0x137BA4u);
    ctx->pc = 0x137BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B9Cu;
    // 0x137ba0: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x137B9Cu, 0x137BA4u)) {
        return;
    }
    ctx->pc = 0x137BA4u;
label_137ba4:
    // 0x137ba4: 0x8e0483cc  lw          $a0, -0x7C34($s0)
    ctx->pc = 0x137ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935500)));
    // 0x137ba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x137ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137bac: 0xc065c7c  jal         func_1971F0
    ctx->pc = 0x137BACu;
    SET_GPR_U32(ctx, 31, 0x137BB4u);
    ctx->pc = 0x137BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137BACu;
    // 0x137bb0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971F0u, 0x137BACu, 0x137BB4u)) {
        return;
    }
    ctx->pc = 0x137BB4u;
label_137bb4:
    // 0x137bb4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x137bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_137bb8:
    // 0x137bb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x137bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137bbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x137BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BC4u;
        // 0x137bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137BCCu;
    // 0x137bcc: 0x0  nop
    ctx->pc = 0x137bccu;
    // NOP
    ctx->pc = 0x137bd0u;
}
