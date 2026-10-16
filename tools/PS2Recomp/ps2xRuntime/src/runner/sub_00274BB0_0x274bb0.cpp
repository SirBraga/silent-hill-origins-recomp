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

// Function: sub_00274BB0
// Address: 0x274bb0 - 0x274d88
void sub_00274BB0_0x274bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274BB0_0x274bb0");
#endif

    switch (ctx->pc) {
        case 0x274bb0u: goto label_274bb0;
        case 0x274bb4u: goto label_274bb4;
        case 0x274bb8u: goto label_274bb8;
        case 0x274bbcu: goto label_274bbc;
        case 0x274bc0u: goto label_274bc0;
        case 0x274bc4u: goto label_274bc4;
        case 0x274bc8u: goto label_274bc8;
        case 0x274bccu: goto label_274bcc;
        case 0x274bd0u: goto label_274bd0;
        case 0x274bd4u: goto label_274bd4;
        case 0x274bd8u: goto label_274bd8;
        case 0x274bdcu: goto label_274bdc;
        case 0x274be0u: goto label_274be0;
        case 0x274be4u: goto label_274be4;
        case 0x274be8u: goto label_274be8;
        case 0x274becu: goto label_274bec;
        case 0x274bf0u: goto label_274bf0;
        case 0x274bf4u: goto label_274bf4;
        case 0x274bf8u: goto label_274bf8;
        case 0x274bfcu: goto label_274bfc;
        case 0x274c00u: goto label_274c00;
        case 0x274c04u: goto label_274c04;
        case 0x274c08u: goto label_274c08;
        case 0x274c0cu: goto label_274c0c;
        case 0x274c10u: goto label_274c10;
        case 0x274c14u: goto label_274c14;
        case 0x274c18u: goto label_274c18;
        case 0x274c1cu: goto label_274c1c;
        case 0x274c20u: goto label_274c20;
        case 0x274c24u: goto label_274c24;
        case 0x274c28u: goto label_274c28;
        case 0x274c2cu: goto label_274c2c;
        case 0x274c30u: goto label_274c30;
        case 0x274c34u: goto label_274c34;
        case 0x274c38u: goto label_274c38;
        case 0x274c3cu: goto label_274c3c;
        case 0x274c40u: goto label_274c40;
        case 0x274c44u: goto label_274c44;
        case 0x274c48u: goto label_274c48;
        case 0x274c4cu: goto label_274c4c;
        case 0x274c50u: goto label_274c50;
        case 0x274c54u: goto label_274c54;
        case 0x274c58u: goto label_274c58;
        case 0x274c5cu: goto label_274c5c;
        case 0x274c60u: goto label_274c60;
        case 0x274c64u: goto label_274c64;
        case 0x274c68u: goto label_274c68;
        case 0x274c6cu: goto label_274c6c;
        case 0x274c70u: goto label_274c70;
        case 0x274c74u: goto label_274c74;
        case 0x274c78u: goto label_274c78;
        case 0x274c7cu: goto label_274c7c;
        case 0x274c80u: goto label_274c80;
        case 0x274c84u: goto label_274c84;
        case 0x274c88u: goto label_274c88;
        case 0x274c8cu: goto label_274c8c;
        case 0x274c90u: goto label_274c90;
        case 0x274c94u: goto label_274c94;
        case 0x274c98u: goto label_274c98;
        case 0x274c9cu: goto label_274c9c;
        case 0x274ca0u: goto label_274ca0;
        case 0x274ca4u: goto label_274ca4;
        case 0x274ca8u: goto label_274ca8;
        case 0x274cacu: goto label_274cac;
        case 0x274cb0u: goto label_274cb0;
        case 0x274cb4u: goto label_274cb4;
        case 0x274cb8u: goto label_274cb8;
        case 0x274cbcu: goto label_274cbc;
        case 0x274cc0u: goto label_274cc0;
        case 0x274cc4u: goto label_274cc4;
        case 0x274cc8u: goto label_274cc8;
        case 0x274cccu: goto label_274ccc;
        case 0x274cd0u: goto label_274cd0;
        case 0x274cd4u: goto label_274cd4;
        case 0x274cd8u: goto label_274cd8;
        case 0x274cdcu: goto label_274cdc;
        case 0x274ce0u: goto label_274ce0;
        case 0x274ce4u: goto label_274ce4;
        case 0x274ce8u: goto label_274ce8;
        case 0x274cecu: goto label_274cec;
        case 0x274cf0u: goto label_274cf0;
        case 0x274cf4u: goto label_274cf4;
        case 0x274cf8u: goto label_274cf8;
        case 0x274cfcu: goto label_274cfc;
        case 0x274d00u: goto label_274d00;
        case 0x274d04u: goto label_274d04;
        case 0x274d08u: goto label_274d08;
        case 0x274d0cu: goto label_274d0c;
        case 0x274d10u: goto label_274d10;
        case 0x274d14u: goto label_274d14;
        case 0x274d18u: goto label_274d18;
        case 0x274d1cu: goto label_274d1c;
        case 0x274d20u: goto label_274d20;
        case 0x274d24u: goto label_274d24;
        case 0x274d28u: goto label_274d28;
        case 0x274d2cu: goto label_274d2c;
        case 0x274d30u: goto label_274d30;
        case 0x274d34u: goto label_274d34;
        case 0x274d38u: goto label_274d38;
        case 0x274d3cu: goto label_274d3c;
        case 0x274d40u: goto label_274d40;
        case 0x274d44u: goto label_274d44;
        case 0x274d48u: goto label_274d48;
        case 0x274d4cu: goto label_274d4c;
        case 0x274d50u: goto label_274d50;
        case 0x274d54u: goto label_274d54;
        case 0x274d58u: goto label_274d58;
        case 0x274d5cu: goto label_274d5c;
        case 0x274d60u: goto label_274d60;
        case 0x274d64u: goto label_274d64;
        case 0x274d68u: goto label_274d68;
        case 0x274d6cu: goto label_274d6c;
        case 0x274d70u: goto label_274d70;
        case 0x274d74u: goto label_274d74;
        case 0x274d78u: goto label_274d78;
        case 0x274d7cu: goto label_274d7c;
        case 0x274d80u: goto label_274d80;
        case 0x274d84u: goto label_274d84;
        default: break;
    }

    ctx->pc = 0x274bb0u;

label_274bb0:
    // 0x274bb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x274bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_274bb4:
    // 0x274bb4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x274bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_274bb8:
    // 0x274bb8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x274bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_274bbc:
    // 0x274bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274bc0:
    // 0x274bc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x274bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_274bc4:
    // 0x274bc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x274bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_274bc8:
    // 0x274bc8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x274bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_274bcc:
    // 0x274bcc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x274bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_274bd0:
    // 0x274bd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x274bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_274bd4:
    // 0x274bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_274bd8:
    // 0x274bd8: 0xc09cdd8  jal         func_273760
label_274bdc:
    if (ctx->pc == 0x274BDCu) {
        ctx->pc = 0x274BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BD8u;
        // 0x274bdc: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274BE0u;
        goto label_274be0;
    }
    ctx->pc = 0x274BD8u;
    SET_GPR_U32(ctx, 31, 0x274BE0u);
    ctx->pc = 0x274BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274BD8u;
    // 0x274bdc: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273760u, 0x274BD8u, 0x274BE0u)) {
        return;
    }
    ctx->pc = 0x274BE0u;
label_274be0:
    // 0x274be0: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_274be4:
    if (ctx->pc == 0x274BE4u) {
        ctx->pc = 0x274BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BE0u;
        // 0x274be4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274BE8u;
        goto label_274be8;
    }
    ctx->pc = 0x274BE0u;
    {
        const bool branch_taken_0x274be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BE0u;
        // 0x274be4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274be0) {
            ctx->pc = 0x274D68u;
            goto label_274d68;
        }
    }
    ctx->pc = 0x274BE8u;
label_274be8:
    // 0x274be8: 0xc09cdee  jal         func_2737B8
label_274bec:
    if (ctx->pc == 0x274BECu) {
        ctx->pc = 0x274BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BE8u;
        // 0x274bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274BF0u;
        goto label_274bf0;
    }
    ctx->pc = 0x274BE8u;
    SET_GPR_U32(ctx, 31, 0x274BF0u);
    ctx->pc = 0x274BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274BE8u;
    // 0x274bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2737B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2737B8u, 0x274BE8u, 0x274BF0u)) {
        return;
    }
    ctx->pc = 0x274BF0u;
label_274bf0:
    // 0x274bf0: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_274bf4:
    if (ctx->pc == 0x274BF4u) {
        ctx->pc = 0x274BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BF0u;
        // 0x274bf4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274BF8u;
        goto label_274bf8;
    }
    ctx->pc = 0x274BF0u;
    {
        const bool branch_taken_0x274bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BF0u;
        // 0x274bf4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bf0) {
            ctx->pc = 0x274D68u;
            goto label_274d68;
        }
    }
    ctx->pc = 0x274BF8u;
label_274bf8:
    // 0x274bf8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x274bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_274bfc:
    // 0x274bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274c00:
    // 0x274c00: 0x8c621094  lw          $v0, 0x1094($v1)
    ctx->pc = 0x274c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4244)));
label_274c04:
    // 0x274c04: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x274c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_274c08:
    // 0x274c08: 0x40f809  jalr        $v0
label_274c0c:
    if (ctx->pc == 0x274C0Cu) {
        ctx->pc = 0x274C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C08u;
        // 0x274c0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C10u;
        goto label_274c10;
    }
    ctx->pc = 0x274C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274C10u);
        ctx->pc = 0x274C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C08u;
        // 0x274c0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274C08u, 0x274C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274C10u;
label_274c10:
    // 0x274c10: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x274c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_274c14:
    // 0x274c14: 0x1a400047  blez        $s2, . + 4 + (0x47 << 2)
label_274c18:
    if (ctx->pc == 0x274C18u) {
        ctx->pc = 0x274C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C14u;
        // 0x274c18: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C1Cu;
        goto label_274c1c;
    }
    ctx->pc = 0x274C14u;
    {
        const bool branch_taken_0x274c14 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x274C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C14u;
        // 0x274c18: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c14) {
            ctx->pc = 0x274D34u;
            goto label_274d34;
        }
    }
    ctx->pc = 0x274C1Cu;
label_274c1c:
    // 0x274c1c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x274c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274c20:
    // 0x274c20: 0x1a400018  blez        $s2, . + 4 + (0x18 << 2)
label_274c24:
    if (ctx->pc == 0x274C24u) {
        ctx->pc = 0x274C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C20u;
        // 0x274c24: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C28u;
        goto label_274c28;
    }
    ctx->pc = 0x274C20u;
    {
        const bool branch_taken_0x274c20 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x274C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C20u;
        // 0x274c24: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c20) {
            ctx->pc = 0x274C84u;
            goto label_274c84;
        }
    }
    ctx->pc = 0x274C28u;
label_274c28:
    // 0x274c28: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
label_274c2c:
    if (ctx->pc == 0x274C2Cu) {
        ctx->pc = 0x274C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C28u;
        // 0x274c2c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C30u;
        goto label_274c30;
    }
    ctx->pc = 0x274C28u;
    {
        const bool branch_taken_0x274c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c28) {
            ctx->pc = 0x274C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274C28u;
            // 0x274c2c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274CB4u;
            goto label_274cb4;
        }
    }
    ctx->pc = 0x274C30u;
label_274c30:
    // 0x274c30: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x274c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_274c34:
    // 0x274c34: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_274c38:
    if (ctx->pc == 0x274C38u) {
        ctx->pc = 0x274C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C34u;
        // 0x274c38: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C3Cu;
        goto label_274c3c;
    }
    ctx->pc = 0x274C34u;
    {
        const bool branch_taken_0x274c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274c34) {
            ctx->pc = 0x274C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274C34u;
            // 0x274c38: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C88u;
            goto label_274c88;
        }
    }
    ctx->pc = 0x274C3Cu;
label_274c3c:
    // 0x274c3c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x274c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_274c40:
    // 0x274c40: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_274c44:
    if (ctx->pc == 0x274C44u) {
        ctx->pc = 0x274C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C40u;
        // 0x274c44: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C48u;
        goto label_274c48;
    }
    ctx->pc = 0x274C40u;
    {
        const bool branch_taken_0x274c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C40u;
        // 0x274c44: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c40) {
            ctx->pc = 0x274C68u;
            goto label_274c68;
        }
    }
    ctx->pc = 0x274C48u;
label_274c48:
    // 0x274c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274c4c:
    // 0x274c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274c50:
    // 0x274c50: 0x40f809  jalr        $v0
label_274c54:
    if (ctx->pc == 0x274C54u) {
        ctx->pc = 0x274C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C50u;
        // 0x274c54: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C58u;
        goto label_274c58;
    }
    ctx->pc = 0x274C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274C58u);
        ctx->pc = 0x274C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C50u;
        // 0x274c54: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274C50u, 0x274C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274C58u;
label_274c58:
    // 0x274c58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x274c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_274c5c:
    // 0x274c5c: 0xac530038  sw          $s3, 0x38($v0)
    ctx->pc = 0x274c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
label_274c60:
    // 0x274c60: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x274c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_274c64:
    // 0x274c64: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x274c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_274c68:
    // 0x274c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274c6c:
    // 0x274c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274c70:
    // 0x274c70: 0x40f809  jalr        $v0
label_274c74:
    if (ctx->pc == 0x274C74u) {
        ctx->pc = 0x274C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C70u;
        // 0x274c74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C78u;
        goto label_274c78;
    }
    ctx->pc = 0x274C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274C78u);
        ctx->pc = 0x274C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C70u;
        // 0x274c74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274C70u, 0x274C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274C78u;
label_274c78:
    // 0x274c78: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x274c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_274c7c:
    // 0x274c7c: 0xac530038  sw          $s3, 0x38($v0)
    ctx->pc = 0x274c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
label_274c80:
    // 0x274c80: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x274c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_274c84:
    // 0x274c84: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x274c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_274c88:
    // 0x274c88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274c8c:
    // 0x274c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274c90:
    // 0x274c90: 0x40f809  jalr        $v0
label_274c94:
    if (ctx->pc == 0x274C94u) {
        ctx->pc = 0x274C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C90u;
        // 0x274c94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C98u;
        goto label_274c98;
    }
    ctx->pc = 0x274C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274C98u);
        ctx->pc = 0x274C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C90u;
        // 0x274c94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274C90u, 0x274C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274C98u;
label_274c98:
    // 0x274c98: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x274c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_274c9c:
    // 0x274c9c: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x274c9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_274ca0:
    // 0x274ca0: 0xac530038  sw          $s3, 0x38($v0)
    ctx->pc = 0x274ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
label_274ca4:
    // 0x274ca4: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_274ca8:
    if (ctx->pc == 0x274CA8u) {
        ctx->pc = 0x274CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CA4u;
        // 0x274ca8: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274CACu;
        goto label_274cac;
    }
    ctx->pc = 0x274CA4u;
    {
        const bool branch_taken_0x274ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CA4u;
        // 0x274ca8: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ca4) {
            ctx->pc = 0x274D34u;
            goto label_274d34;
        }
    }
    ctx->pc = 0x274CACu;
label_274cac:
    // 0x274cac: 0x0  nop
    ctx->pc = 0x274cacu;
    // NOP
label_274cb0:
    // 0x274cb0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x274cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_274cb4:
    // 0x274cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274cb8:
    // 0x274cb8: 0x40f809  jalr        $v0
label_274cbc:
    if (ctx->pc == 0x274CBCu) {
        ctx->pc = 0x274CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CB8u;
        // 0x274cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274CC0u;
        goto label_274cc0;
    }
    ctx->pc = 0x274CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274CC0u);
        ctx->pc = 0x274CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CB8u;
        // 0x274cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274CB8u, 0x274CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274CC0u;
label_274cc0:
    // 0x274cc0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x274cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_274cc4:
    // 0x274cc4: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x274cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_274cc8:
    // 0x274cc8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x274cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_274ccc:
    // 0x274ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274cd0:
    // 0x274cd0: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x274cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_274cd4:
    // 0x274cd4: 0xc0f809  jalr        $a2
label_274cd8:
    if (ctx->pc == 0x274CD8u) {
        ctx->pc = 0x274CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CD4u;
        // 0x274cd8: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274CDCu;
        goto label_274cdc;
    }
    ctx->pc = 0x274CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x274CDCu);
        ctx->pc = 0x274CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CD4u;
        // 0x274cd8: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274CD4u, 0x274CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274CDCu;
label_274cdc:
    // 0x274cdc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x274cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_274ce0:
    // 0x274ce0: 0x26250002  addiu       $a1, $s1, 0x2
    ctx->pc = 0x274ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_274ce4:
    // 0x274ce4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x274ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_274ce8:
    // 0x274ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274cec:
    // 0x274cec: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x274cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_274cf0:
    // 0x274cf0: 0xc0f809  jalr        $a2
label_274cf4:
    if (ctx->pc == 0x274CF4u) {
        ctx->pc = 0x274CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CF0u;
        // 0x274cf4: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274CF8u;
        goto label_274cf8;
    }
    ctx->pc = 0x274CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x274CF8u);
        ctx->pc = 0x274CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CF0u;
        // 0x274cf4: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274CF0u, 0x274CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274CF8u;
label_274cf8:
    // 0x274cf8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x274cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_274cfc:
    // 0x274cfc: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x274cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_274d00:
    // 0x274d00: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x274d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_274d04:
    // 0x274d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274d08:
    // 0x274d08: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x274d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_274d0c:
    // 0x274d0c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x274d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_274d10:
    // 0x274d10: 0xc0f809  jalr        $a2
label_274d14:
    if (ctx->pc == 0x274D14u) {
        ctx->pc = 0x274D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D10u;
        // 0x274d14: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274D18u;
        goto label_274d18;
    }
    ctx->pc = 0x274D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x274D18u);
        ctx->pc = 0x274D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D10u;
        // 0x274d14: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274D10u, 0x274D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274D18u;
label_274d18:
    // 0x274d18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x274d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_274d1c:
    // 0x274d1c: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x274d1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_274d20:
    // 0x274d20: 0xac530038  sw          $s3, 0x38($v0)
    ctx->pc = 0x274d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
label_274d24:
    // 0x274d24: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
label_274d28:
    if (ctx->pc == 0x274D28u) {
        ctx->pc = 0x274D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D24u;
        // 0x274d28: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274D2Cu;
        goto label_274d2c;
    }
    ctx->pc = 0x274D24u;
    {
        const bool branch_taken_0x274d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x274D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D24u;
        // 0x274d28: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d24) {
            ctx->pc = 0x274CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274cb0;
        }
    }
    ctx->pc = 0x274D2Cu;
label_274d2c:
    // 0x274d2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_274d30:
    if (ctx->pc == 0x274D30u) {
        ctx->pc = 0x274D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D2Cu;
        // 0x274d30: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274D34u;
        goto label_274d34;
    }
    ctx->pc = 0x274D2Cu;
    {
        const bool branch_taken_0x274d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D2Cu;
        // 0x274d30: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d2c) {
            ctx->pc = 0x274D38u;
            goto label_274d38;
        }
    }
    ctx->pc = 0x274D34u;
label_274d34:
    // 0x274d34: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x274d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_274d38:
    // 0x274d38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x274d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_274d3c:
    // 0x274d3c: 0xc09d42c  jal         func_2750B0
label_274d40:
    if (ctx->pc == 0x274D40u) {
        ctx->pc = 0x274D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D3Cu;
        // 0x274d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274D44u;
        goto label_274d44;
    }
    ctx->pc = 0x274D3Cu;
    SET_GPR_U32(ctx, 31, 0x274D44u);
    ctx->pc = 0x274D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D3Cu;
    // 0x274d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2750B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2750B0u, 0x274D3Cu, 0x274D44u)) {
        return;
    }
    ctx->pc = 0x274D44u;
label_274d44:
    // 0x274d44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x274d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274d48:
    // 0x274d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274d4c:
    // 0x274d4c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_274d50:
    if (ctx->pc == 0x274D50u) {
        ctx->pc = 0x274D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D4Cu;
        // 0x274d50: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274D54u;
        goto label_274d54;
    }
    ctx->pc = 0x274D4Cu;
    {
        const bool branch_taken_0x274d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D4Cu;
        // 0x274d50: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d4c) {
            ctx->pc = 0x274D68u;
            goto label_274d68;
        }
    }
    ctx->pc = 0x274D54u;
label_274d54:
    // 0x274d54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_274d58:
    // 0x274d58: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x274d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_274d5c:
    // 0x274d5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x274d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_274d60:
    // 0x274d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274d64:
    // 0x274d64: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x274d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_274d68:
    // 0x274d68: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x274d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_274d6c:
    // 0x274d6c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x274d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_274d70:
    // 0x274d70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x274d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_274d74:
    // 0x274d74: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x274d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_274d78:
    // 0x274d78: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x274d78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_274d7c:
    // 0x274d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_274d80:
    // 0x274d80: 0x3e00008  jr          $ra
label_274d84:
    if (ctx->pc == 0x274D84u) {
        ctx->pc = 0x274D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D80u;
        // 0x274d84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274D88u;
        goto label_fallthrough_0x274d80;
    }
    ctx->pc = 0x274D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D80u;
        // 0x274d84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x274d80:
    ctx->pc = 0x274D88u;
}
