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

// Function: sub_00170C58
// Address: 0x170c58 - 0x170d58
void sub_00170C58_0x170c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170C58_0x170c58");
#endif

    switch (ctx->pc) {
        case 0x170c58u: goto label_170c58;
        case 0x170c5cu: goto label_170c5c;
        case 0x170c60u: goto label_170c60;
        case 0x170c64u: goto label_170c64;
        case 0x170c68u: goto label_170c68;
        case 0x170c6cu: goto label_170c6c;
        case 0x170c70u: goto label_170c70;
        case 0x170c74u: goto label_170c74;
        case 0x170c78u: goto label_170c78;
        case 0x170c7cu: goto label_170c7c;
        case 0x170c80u: goto label_170c80;
        case 0x170c84u: goto label_170c84;
        case 0x170c88u: goto label_170c88;
        case 0x170c8cu: goto label_170c8c;
        case 0x170c90u: goto label_170c90;
        case 0x170c94u: goto label_170c94;
        case 0x170c98u: goto label_170c98;
        case 0x170c9cu: goto label_170c9c;
        case 0x170ca0u: goto label_170ca0;
        case 0x170ca4u: goto label_170ca4;
        case 0x170ca8u: goto label_170ca8;
        case 0x170cacu: goto label_170cac;
        case 0x170cb0u: goto label_170cb0;
        case 0x170cb4u: goto label_170cb4;
        case 0x170cb8u: goto label_170cb8;
        case 0x170cbcu: goto label_170cbc;
        case 0x170cc0u: goto label_170cc0;
        case 0x170cc4u: goto label_170cc4;
        case 0x170cc8u: goto label_170cc8;
        case 0x170cccu: goto label_170ccc;
        case 0x170cd0u: goto label_170cd0;
        case 0x170cd4u: goto label_170cd4;
        case 0x170cd8u: goto label_170cd8;
        case 0x170cdcu: goto label_170cdc;
        case 0x170ce0u: goto label_170ce0;
        case 0x170ce4u: goto label_170ce4;
        case 0x170ce8u: goto label_170ce8;
        case 0x170cecu: goto label_170cec;
        case 0x170cf0u: goto label_170cf0;
        case 0x170cf4u: goto label_170cf4;
        case 0x170cf8u: goto label_170cf8;
        case 0x170cfcu: goto label_170cfc;
        case 0x170d00u: goto label_170d00;
        case 0x170d04u: goto label_170d04;
        case 0x170d08u: goto label_170d08;
        case 0x170d0cu: goto label_170d0c;
        case 0x170d10u: goto label_170d10;
        case 0x170d14u: goto label_170d14;
        case 0x170d18u: goto label_170d18;
        case 0x170d1cu: goto label_170d1c;
        case 0x170d20u: goto label_170d20;
        case 0x170d24u: goto label_170d24;
        case 0x170d28u: goto label_170d28;
        case 0x170d2cu: goto label_170d2c;
        case 0x170d30u: goto label_170d30;
        case 0x170d34u: goto label_170d34;
        case 0x170d38u: goto label_170d38;
        case 0x170d3cu: goto label_170d3c;
        case 0x170d40u: goto label_170d40;
        case 0x170d44u: goto label_170d44;
        case 0x170d48u: goto label_170d48;
        case 0x170d4cu: goto label_170d4c;
        case 0x170d50u: goto label_170d50;
        case 0x170d54u: goto label_170d54;
        default: break;
    }

    ctx->pc = 0x170c58u;

label_170c58:
    // 0x170c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_170c5c:
    // 0x170c5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_170c60:
    // 0x170c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_170c64:
    // 0x170c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170c68:
    // 0x170c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_170c6c:
    // 0x170c6c: 0x8e0600d0  lw          $a2, 0xD0($s0)
    ctx->pc = 0x170c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_170c70:
    // 0x170c70: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_170c74:
    if (ctx->pc == 0x170C74u) {
        ctx->pc = 0x170C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C70u;
        // 0x170c74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C78u;
        goto label_170c78;
    }
    ctx->pc = 0x170C70u;
    {
        const bool branch_taken_0x170c70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C70u;
        // 0x170c74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c70) {
            ctx->pc = 0x170C94u;
            goto label_170c94;
        }
    }
    ctx->pc = 0x170C78u;
label_170c78:
    // 0x170c78: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x170c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_170c7c:
    // 0x170c7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x170c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_170c80:
    // 0x170c80: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x170c80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_170c84:
    // 0x170c84: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x170c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_170c88:
    // 0x170c88: 0x60f809  jalr        $v1
label_170c8c:
    if (ctx->pc == 0x170C8Cu) {
        ctx->pc = 0x170C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C88u;
        // 0x170c8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C90u;
        goto label_170c90;
    }
    ctx->pc = 0x170C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x170C90u);
        ctx->pc = 0x170C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C88u;
        // 0x170c8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170C88u, 0x170C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170C90u;
label_170c90:
    // 0x170c90: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x170c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_170c94:
    // 0x170c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170c98:
    // 0x170c98: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
label_170c9c:
    if (ctx->pc == 0x170C9Cu) {
        ctx->pc = 0x170C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C98u;
        // 0x170c9c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CA0u;
        goto label_170ca0;
    }
    ctx->pc = 0x170C98u;
    {
        const bool branch_taken_0x170c98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x170C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C98u;
        // 0x170c9c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c98) {
            ctx->pc = 0x170CECu;
            goto label_170cec;
        }
    }
    ctx->pc = 0x170CA0u;
label_170ca0:
    // 0x170ca0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_170ca4:
    if (ctx->pc == 0x170CA4u) {
        ctx->pc = 0x170CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CA0u;
        // 0x170ca4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CA8u;
        goto label_170ca8;
    }
    ctx->pc = 0x170CA0u;
    {
        const bool branch_taken_0x170ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ca0) {
            ctx->pc = 0x170CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170CA0u;
            // 0x170ca4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170CB8u;
            goto label_170cb8;
        }
    }
    ctx->pc = 0x170CA8u;
label_170ca8:
    // 0x170ca8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_170cac:
    if (ctx->pc == 0x170CACu) {
        ctx->pc = 0x170CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CA8u;
        // 0x170cac: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CB0u;
        goto label_170cb0;
    }
    ctx->pc = 0x170CA8u;
    {
        const bool branch_taken_0x170ca8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CA8u;
        // 0x170cac: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ca8) {
            ctx->pc = 0x170CD0u;
            goto label_170cd0;
        }
    }
    ctx->pc = 0x170CB0u;
label_170cb0:
    // 0x170cb0: 0x10000025  b           . + 4 + (0x25 << 2)
label_170cb4:
    if (ctx->pc == 0x170CB4u) {
        ctx->pc = 0x170CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CB0u;
        // 0x170cb4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CB8u;
        goto label_170cb8;
    }
    ctx->pc = 0x170CB0u;
    {
        const bool branch_taken_0x170cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CB0u;
        // 0x170cb4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cb0) {
            ctx->pc = 0x170D48u;
            goto label_170d48;
        }
    }
    ctx->pc = 0x170CB8u;
label_170cb8:
    // 0x170cb8: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
label_170cbc:
    if (ctx->pc == 0x170CBCu) {
        ctx->pc = 0x170CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CB8u;
        // 0x170cbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CC0u;
        goto label_170cc0;
    }
    ctx->pc = 0x170CB8u;
    {
        const bool branch_taken_0x170cb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x170CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CB8u;
        // 0x170cbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cb8) {
            ctx->pc = 0x170D0Cu;
            goto label_170d0c;
        }
    }
    ctx->pc = 0x170CC0u;
label_170cc0:
    // 0x170cc0: 0x1222001a  beq         $s1, $v0, . + 4 + (0x1A << 2)
label_170cc4:
    if (ctx->pc == 0x170CC4u) {
        ctx->pc = 0x170CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CC0u;
        // 0x170cc4: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CC8u;
        goto label_170cc8;
    }
    ctx->pc = 0x170CC0u;
    {
        const bool branch_taken_0x170cc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x170CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CC0u;
        // 0x170cc4: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cc0) {
            ctx->pc = 0x170D2Cu;
            goto label_170d2c;
        }
    }
    ctx->pc = 0x170CC8u;
label_170cc8:
    // 0x170cc8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_170ccc:
    if (ctx->pc == 0x170CCCu) {
        ctx->pc = 0x170CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CC8u;
        // 0x170ccc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CD0u;
        goto label_170cd0;
    }
    ctx->pc = 0x170CC8u;
    {
        const bool branch_taken_0x170cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CC8u;
        // 0x170ccc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cc8) {
            ctx->pc = 0x170D48u;
            goto label_170d48;
        }
    }
    ctx->pc = 0x170CD0u;
label_170cd0:
    // 0x170cd0: 0xc0808f0  jal         func_2023C0
label_170cd4:
    if (ctx->pc == 0x170CD4u) {
        ctx->pc = 0x170CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CD0u;
        // 0x170cd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CD8u;
        goto label_170cd8;
    }
    ctx->pc = 0x170CD0u;
    SET_GPR_U32(ctx, 31, 0x170CD8u);
    ctx->pc = 0x170CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CD0u;
    // 0x170cd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x170CD0u, 0x170CD8u)) {
        return;
    }
    ctx->pc = 0x170CD8u;
label_170cd8:
    // 0x170cd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170cdc:
    // 0x170cdc: 0xc05c734  jal         func_171CD0
label_170ce0:
    if (ctx->pc == 0x170CE0u) {
        ctx->pc = 0x170CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CDCu;
        // 0x170ce0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CE4u;
        goto label_170ce4;
    }
    ctx->pc = 0x170CDCu;
    SET_GPR_U32(ctx, 31, 0x170CE4u);
    ctx->pc = 0x170CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CDCu;
    // 0x170ce0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171CD0u, 0x170CDCu, 0x170CE4u)) {
        return;
    }
    ctx->pc = 0x170CE4u;
label_170ce4:
    // 0x170ce4: 0x10000017  b           . + 4 + (0x17 << 2)
label_170ce8:
    if (ctx->pc == 0x170CE8u) {
        ctx->pc = 0x170CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CE4u;
        // 0x170ce8: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CECu;
        goto label_170cec;
    }
    ctx->pc = 0x170CE4u;
    {
        const bool branch_taken_0x170ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CE4u;
        // 0x170ce8: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ce4) {
            ctx->pc = 0x170D44u;
            goto label_170d44;
        }
    }
    ctx->pc = 0x170CECu;
label_170cec:
    // 0x170cec: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x170cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_170cf0:
    // 0x170cf0: 0xc0808f0  jal         func_2023C0
label_170cf4:
    if (ctx->pc == 0x170CF4u) {
        ctx->pc = 0x170CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CF0u;
        // 0x170cf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CF8u;
        goto label_170cf8;
    }
    ctx->pc = 0x170CF0u;
    SET_GPR_U32(ctx, 31, 0x170CF8u);
    ctx->pc = 0x170CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CF0u;
    // 0x170cf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x170CF0u, 0x170CF8u)) {
        return;
    }
    ctx->pc = 0x170CF8u;
label_170cf8:
    // 0x170cf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170cfc:
    // 0x170cfc: 0xc05c77e  jal         func_171DF8
label_170d00:
    if (ctx->pc == 0x170D00u) {
        ctx->pc = 0x170D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CFCu;
        // 0x170d00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D04u;
        goto label_170d04;
    }
    ctx->pc = 0x170CFCu;
    SET_GPR_U32(ctx, 31, 0x170D04u);
    ctx->pc = 0x170D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CFCu;
    // 0x170d00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171DF8u, 0x170CFCu, 0x170D04u)) {
        return;
    }
    ctx->pc = 0x170D04u;
label_170d04:
    // 0x170d04: 0x1000000f  b           . + 4 + (0xF << 2)
label_170d08:
    if (ctx->pc == 0x170D08u) {
        ctx->pc = 0x170D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D04u;
        // 0x170d08: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D0Cu;
        goto label_170d0c;
    }
    ctx->pc = 0x170D04u;
    {
        const bool branch_taken_0x170d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D04u;
        // 0x170d08: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d04) {
            ctx->pc = 0x170D44u;
            goto label_170d44;
        }
    }
    ctx->pc = 0x170D0Cu;
label_170d0c:
    // 0x170d0c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x170d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_170d10:
    // 0x170d10: 0xc0808f0  jal         func_2023C0
label_170d14:
    if (ctx->pc == 0x170D14u) {
        ctx->pc = 0x170D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D10u;
        // 0x170d14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D18u;
        goto label_170d18;
    }
    ctx->pc = 0x170D10u;
    SET_GPR_U32(ctx, 31, 0x170D18u);
    ctx->pc = 0x170D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D10u;
    // 0x170d14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x170D10u, 0x170D18u)) {
        return;
    }
    ctx->pc = 0x170D18u;
label_170d18:
    // 0x170d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170d1c:
    // 0x170d1c: 0xc05c7f4  jal         func_171FD0
label_170d20:
    if (ctx->pc == 0x170D20u) {
        ctx->pc = 0x170D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D1Cu;
        // 0x170d20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D24u;
        goto label_170d24;
    }
    ctx->pc = 0x170D1Cu;
    SET_GPR_U32(ctx, 31, 0x170D24u);
    ctx->pc = 0x170D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D1Cu;
    // 0x170d20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171FD0u, 0x170D1Cu, 0x170D24u)) {
        return;
    }
    ctx->pc = 0x170D24u;
label_170d24:
    // 0x170d24: 0x10000007  b           . + 4 + (0x7 << 2)
label_170d28:
    if (ctx->pc == 0x170D28u) {
        ctx->pc = 0x170D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D24u;
        // 0x170d28: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D2Cu;
        goto label_170d2c;
    }
    ctx->pc = 0x170D24u;
    {
        const bool branch_taken_0x170d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D24u;
        // 0x170d28: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d24) {
            ctx->pc = 0x170D44u;
            goto label_170d44;
        }
    }
    ctx->pc = 0x170D2Cu;
label_170d2c:
    // 0x170d2c: 0xc0808f0  jal         func_2023C0
label_170d30:
    if (ctx->pc == 0x170D30u) {
        ctx->pc = 0x170D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D2Cu;
        // 0x170d30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D34u;
        goto label_170d34;
    }
    ctx->pc = 0x170D2Cu;
    SET_GPR_U32(ctx, 31, 0x170D34u);
    ctx->pc = 0x170D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D2Cu;
    // 0x170d30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x170D2Cu, 0x170D34u)) {
        return;
    }
    ctx->pc = 0x170D34u;
label_170d34:
    // 0x170d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170d38:
    // 0x170d38: 0xc05c832  jal         func_1720C8
label_170d3c:
    if (ctx->pc == 0x170D3Cu) {
        ctx->pc = 0x170D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D38u;
        // 0x170d3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D40u;
        goto label_170d40;
    }
    ctx->pc = 0x170D38u;
    SET_GPR_U32(ctx, 31, 0x170D40u);
    ctx->pc = 0x170D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D38u;
    // 0x170d3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1720C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1720C8u, 0x170D38u, 0x170D40u)) {
        return;
    }
    ctx->pc = 0x170D40u;
label_170d40:
    // 0x170d40: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x170d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_170d44:
    // 0x170d44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_170d48:
    // 0x170d48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_170d4c:
    // 0x170d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170d50:
    // 0x170d50: 0x3e00008  jr          $ra
label_170d54:
    if (ctx->pc == 0x170D54u) {
        ctx->pc = 0x170D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D50u;
        // 0x170d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D58u;
        goto label_fallthrough_0x170d50;
    }
    ctx->pc = 0x170D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D50u;
        // 0x170d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x170d50:
    ctx->pc = 0x170D58u;
}
