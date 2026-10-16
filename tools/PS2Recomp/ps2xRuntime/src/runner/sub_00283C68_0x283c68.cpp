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

// Function: sub_00283C68
// Address: 0x283c68 - 0x283d20
void sub_00283C68_0x283c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283C68_0x283c68");
#endif

    switch (ctx->pc) {
        case 0x283c94u: goto label_283c94;
        case 0x283ca8u: goto label_283ca8;
        case 0x283cbcu: goto label_283cbc;
        case 0x283cf8u: goto label_283cf8;
        default: break;
    }

    ctx->pc = 0x283c68u;

    // 0x283c68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x283c6c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x283c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x283c70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x283c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x283c74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x283c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283c78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x283c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x283c7c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x283c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x283c80: 0x2611002c  addiu       $s1, $s0, 0x2C
    ctx->pc = 0x283c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x283c84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x283c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283c8c: 0xc092782  jal         func_249E08
    ctx->pc = 0x283C8Cu;
    SET_GPR_U32(ctx, 31, 0x283C94u);
    ctx->pc = 0x283C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283C8Cu;
    // 0x283c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x283C8Cu, 0x283C94u)) {
        return;
    }
    ctx->pc = 0x283C94u;
label_283c94:
    // 0x283c94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283C94u;
    {
        const bool branch_taken_0x283c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C94u;
        // 0x283c98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c94) {
            ctx->pc = 0x283CC4u;
            goto label_283cc4;
        }
    }
    ctx->pc = 0x283C9Cu;
    // 0x283c9c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x283c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x283ca0: 0xc092782  jal         func_249E08
    ctx->pc = 0x283CA0u;
    SET_GPR_U32(ctx, 31, 0x283CA8u);
    ctx->pc = 0x283CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CA0u;
    // 0x283ca4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x283CA0u, 0x283CA8u)) {
        return;
    }
    ctx->pc = 0x283CA8u;
label_283ca8:
    // 0x283ca8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283CA8u;
    {
        const bool branch_taken_0x283ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CA8u;
        // 0x283cac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ca8) {
            ctx->pc = 0x283CC4u;
            goto label_283cc4;
        }
    }
    ctx->pc = 0x283CB0u;
    // 0x283cb0: 0x26050034  addiu       $a1, $s0, 0x34
    ctx->pc = 0x283cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x283cb4: 0xc092782  jal         func_249E08
    ctx->pc = 0x283CB4u;
    SET_GPR_U32(ctx, 31, 0x283CBCu);
    ctx->pc = 0x283CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CB4u;
    // 0x283cb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x283CB4u, 0x283CBCu)) {
        return;
    }
    ctx->pc = 0x283CBCu;
label_283cbc:
    // 0x283cbc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x283CBCu;
    {
        const bool branch_taken_0x283cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283cbc) {
            ctx->pc = 0x283CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283CBCu;
            // 0x283cc0: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283CCCu;
            goto label_283ccc;
        }
    }
    ctx->pc = 0x283CC4u;
label_283cc4:
    // 0x283cc4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283CC4u;
    {
        const bool branch_taken_0x283cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CC4u;
        // 0x283cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cc4) {
            ctx->pc = 0x283D08u;
            goto label_283d08;
        }
    }
    ctx->pc = 0x283CCCu;
label_283ccc:
    // 0x283ccc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x283CCCu;
    {
        const bool branch_taken_0x283ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CCCu;
        // 0x283cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ccc) {
            ctx->pc = 0x283D04u;
            goto label_283d04;
        }
    }
    ctx->pc = 0x283CD4u;
    // 0x283cd4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x283cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x283cd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x283cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x283cdc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x283cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x283ce0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x283ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x283ce4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x283ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x283ce8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x283ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x283cec: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x283cecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x283cf0: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x283CF0u;
    SET_GPR_U32(ctx, 31, 0x283CF8u);
    ctx->pc = 0x283CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CF0u;
    // 0x283cf4: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x283CF0u, 0x283CF8u)) {
        return;
    }
    ctx->pc = 0x283CF8u;
label_283cf8:
    // 0x283cf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x283cf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283cfc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x283CFCu;
    {
        const bool branch_taken_0x283cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CFCu;
        // 0x283d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cfc) {
            ctx->pc = 0x283D08u;
            goto label_283d08;
        }
    }
    ctx->pc = 0x283D04u;
label_283d04:
    // 0x283d04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x283d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_283d08:
    // 0x283d08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x283d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283d0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x283d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283d10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x283d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283d18: 0x3e00008  jr          $ra
    ctx->pc = 0x283D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D18u;
        // 0x283d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283D20u;
}
