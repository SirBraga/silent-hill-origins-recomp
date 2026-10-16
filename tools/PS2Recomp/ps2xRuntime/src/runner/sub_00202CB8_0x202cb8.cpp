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

// Function: sub_00202CB8
// Address: 0x202cb8 - 0x202d78
void sub_00202CB8_0x202cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202CB8_0x202cb8");
#endif

    switch (ctx->pc) {
        case 0x202ce0u: goto label_202ce0;
        case 0x202d28u: goto label_202d28;
        default: break;
    }

    ctx->pc = 0x202cb8u;

    // 0x202cb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202cbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x202cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x202cc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202ccc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x202cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x202cd0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202CD0u;
    {
        const bool branch_taken_0x202cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CD0u;
        // 0x202cd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cd0) {
            ctx->pc = 0x202CF4u;
            goto label_202cf4;
        }
    }
    ctx->pc = 0x202CD8u;
    // 0x202cd8: 0xc080b5e  jal         func_202D78
    ctx->pc = 0x202CD8u;
    SET_GPR_U32(ctx, 31, 0x202CE0u);
    ctx->pc = 0x202D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202D78u, 0x202CD8u, 0x202CE0u)) {
        return;
    }
    ctx->pc = 0x202CE0u;
label_202ce0:
    // 0x202ce0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x202ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x202ce4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x202CE4u;
    {
        const bool branch_taken_0x202ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202ce4) {
            ctx->pc = 0x202CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202CE4u;
            // 0x202ce8: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202CF8u;
            goto label_202cf8;
        }
    }
    ctx->pc = 0x202CECu;
    // 0x202cec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x202CECu;
    {
        const bool branch_taken_0x202cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CECu;
        // 0x202cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cec) {
            ctx->pc = 0x202D60u;
            goto label_202d60;
        }
    }
    ctx->pc = 0x202CF4u;
label_202cf4:
    // 0x202cf4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x202cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_202cf8:
    // 0x202cf8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x202cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x202cfc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x202cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x202d00: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x202d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x202d04: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x202d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x202d08: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x202d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x202d0c: 0xacd10004  sw          $s1, 0x4($a2)
    ctx->pc = 0x202d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
    // 0x202d10: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x202d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x202d14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x202d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202d18: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x202d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x202d1c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x202d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x202d20: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x202D20u;
    {
        const bool branch_taken_0x202d20 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x202D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D20u;
        // 0x202d24: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d20) {
            ctx->pc = 0x202D40u;
            goto label_202d40;
        }
    }
    ctx->pc = 0x202D28u;
label_202d28:
    // 0x202d28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x202d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x202d2c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x202d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x202d30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x202d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x202d34: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x202d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x202d38: 0x1ca0fffb  bgtz        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202D38u;
    {
        const bool branch_taken_0x202d38 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x202D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D38u;
        // 0x202d3c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d38) {
            ctx->pc = 0x202D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202d28;
        }
    }
    ctx->pc = 0x202D40u;
label_202d40:
    // 0x202d40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x202d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202d44: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x202d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d48: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x202d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x202d4c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x202d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x202d50: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x202d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x202d54: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x202d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x202d58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202d5c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x202d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_202d60:
    // 0x202d60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x202d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x202D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D6Cu;
        // 0x202d70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D74u;
    // 0x202d74: 0x0  nop
    ctx->pc = 0x202d74u;
    // NOP
    ctx->pc = 0x202d78u;
}
