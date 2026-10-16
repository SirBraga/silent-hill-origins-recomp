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

// Function: sub_001F9BE0
// Address: 0x1f9be0 - 0x1f9ce0
void sub_001F9BE0_0x1f9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9BE0_0x1f9be0");
#endif

    switch (ctx->pc) {
        case 0x1f9c38u: goto label_1f9c38;
        case 0x1f9c78u: goto label_1f9c78;
        default: break;
    }

    ctx->pc = 0x1f9be0u;

    // 0x1f9be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f9be4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f9be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f9be8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f9be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f9bec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9bf4: 0x8cb80004  lw          $t8, 0x4($a1)
    ctx->pc = 0x1f9bf4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f9bf8: 0x13000033  beqz        $t8, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F9BF8u;
    {
        const bool branch_taken_0x1f9bf8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BF8u;
        // 0x1f9bfc: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bf8) {
            ctx->pc = 0x1F9CC8u;
            goto label_1f9cc8;
        }
    }
    ctx->pc = 0x1F9C00u;
    // 0x1f9c00: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1f9c00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f9c04: 0x182080  sll         $a0, $t8, 2
    ctx->pc = 0x1f9c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x1f9c08: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f9c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9c0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9c10: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f9c14: 0x320782d  daddu       $t7, $t9, $zero
    ctx->pc = 0x1f9c14u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c18: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1f9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1f9c1c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1f9c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f9c20: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x1f9c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c24: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1f9c24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c28: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1f9c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1f9c2c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f9c2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c30: 0x4f5821  addu        $t3, $v0, $t7
    ctx->pc = 0x1f9c30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x1f9c34: 0x0  nop
    ctx->pc = 0x1f9c34u;
    // NOP
label_1f9c38:
    // 0x1f9c38: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x1f9c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1f9c3c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1f9c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1f9c40: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x1f9c40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9c44: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F9C44u;
    {
        const bool branch_taken_0x1f9c44 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C44u;
        // 0x1f9c48: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c44) {
            ctx->pc = 0x1F9CACu;
            goto label_1f9cac;
        }
    }
    ctx->pc = 0x1F9C4Cu;
    // 0x1f9c4c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1f9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1f9c50: 0x8dc60008  lw          $a2, 0x8($t6)
    ctx->pc = 0x1f9c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x1f9c54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f9c58: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f9c5c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F9C5Cu;
    {
        const bool branch_taken_0x1f9c5c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C5Cu;
        // 0x1f9c60: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c5c) {
            ctx->pc = 0x1F9CACu;
            goto label_1f9cac;
        }
    }
    ctx->pc = 0x1F9C64u;
    // 0x1f9c64: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x1f9c64u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c68: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x1f9c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f9c6c: 0x1593821  addu        $a3, $t2, $t9
    ctx->pc = 0x1f9c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x1f9c70: 0x1523021  addu        $a2, $t2, $s2
    ctx->pc = 0x1f9c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x1f9c74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f9c78:
    // 0x1f9c78: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1f9c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x1f9c7c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x1f9c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1f9c80: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x1f9c80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x1f9c84: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1f9c84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1f9c88: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x1f9c88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x1f9c8c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1f9c8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1f9c90: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9C90u;
    {
        const bool branch_taken_0x1f9c90 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C90u;
        // 0x1f9c94: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c90) {
            ctx->pc = 0x1F9CACu;
            goto label_1f9cac;
        }
    }
    ctx->pc = 0x1F9C98u;
    // 0x1f9c98: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1f9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f9c9c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f9ca0: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x1f9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1f9ca4: 0x5c40fff4  bgtzl       $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F9CA4u;
    {
        const bool branch_taken_0x1f9ca4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1f9ca4) {
            ctx->pc = 0x1F9CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9CA4u;
            // 0x1f9ca8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9c78;
        }
    }
    ctx->pc = 0x1F9CACu;
label_1f9cac:
    // 0x1f9cac: 0x12d1021  addu        $v0, $t1, $t5
    ctx->pc = 0x1f9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x1f9cb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9cb4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x1f9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x1f9cb8: 0x15a0ffdf  bnez        $t5, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1F9CB8u;
    {
        const bool branch_taken_0x1f9cb8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CB8u;
        // 0x1f9cbc: 0xac4e0000  sw          $t6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cb8) {
            ctx->pc = 0x1F9C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9c38;
        }
    }
    ctx->pc = 0x1F9CC0u;
    // 0x1f9cc0: 0x2181021  addu        $v0, $s0, $t8
    ctx->pc = 0x1f9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x1f9cc4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f9cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1f9cc8:
    // 0x1f9cc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f9cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ccc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f9cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CD4u;
        // 0x1f9cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9CDCu;
    // 0x1f9cdc: 0x0  nop
    ctx->pc = 0x1f9cdcu;
    // NOP
    ctx->pc = 0x1f9ce0u;
}
