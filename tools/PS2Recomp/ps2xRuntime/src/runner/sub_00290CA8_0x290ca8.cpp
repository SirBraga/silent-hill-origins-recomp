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

// Function: sub_00290CA8
// Address: 0x290ca8 - 0x290e20
void sub_00290CA8_0x290ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290CA8_0x290ca8");
#endif

    switch (ctx->pc) {
        case 0x290ca8u: goto label_290ca8;
        case 0x290cacu: goto label_290cac;
        case 0x290cb0u: goto label_290cb0;
        case 0x290cb4u: goto label_290cb4;
        case 0x290cb8u: goto label_290cb8;
        case 0x290cbcu: goto label_290cbc;
        case 0x290cc0u: goto label_290cc0;
        case 0x290cc4u: goto label_290cc4;
        case 0x290cc8u: goto label_290cc8;
        case 0x290cccu: goto label_290ccc;
        case 0x290cd0u: goto label_290cd0;
        case 0x290cd4u: goto label_290cd4;
        case 0x290cd8u: goto label_290cd8;
        case 0x290cdcu: goto label_290cdc;
        case 0x290ce0u: goto label_290ce0;
        case 0x290ce4u: goto label_290ce4;
        case 0x290ce8u: goto label_290ce8;
        case 0x290cecu: goto label_290cec;
        case 0x290cf0u: goto label_290cf0;
        case 0x290cf4u: goto label_290cf4;
        case 0x290cf8u: goto label_290cf8;
        case 0x290cfcu: goto label_290cfc;
        case 0x290d00u: goto label_290d00;
        case 0x290d04u: goto label_290d04;
        case 0x290d08u: goto label_290d08;
        case 0x290d0cu: goto label_290d0c;
        case 0x290d10u: goto label_290d10;
        case 0x290d14u: goto label_290d14;
        case 0x290d18u: goto label_290d18;
        case 0x290d1cu: goto label_290d1c;
        case 0x290d20u: goto label_290d20;
        case 0x290d24u: goto label_290d24;
        case 0x290d28u: goto label_290d28;
        case 0x290d2cu: goto label_290d2c;
        case 0x290d30u: goto label_290d30;
        case 0x290d34u: goto label_290d34;
        case 0x290d38u: goto label_290d38;
        case 0x290d3cu: goto label_290d3c;
        case 0x290d40u: goto label_290d40;
        case 0x290d44u: goto label_290d44;
        case 0x290d48u: goto label_290d48;
        case 0x290d4cu: goto label_290d4c;
        case 0x290d50u: goto label_290d50;
        case 0x290d54u: goto label_290d54;
        case 0x290d58u: goto label_290d58;
        case 0x290d5cu: goto label_290d5c;
        case 0x290d60u: goto label_290d60;
        case 0x290d64u: goto label_290d64;
        case 0x290d68u: goto label_290d68;
        case 0x290d6cu: goto label_290d6c;
        case 0x290d70u: goto label_290d70;
        case 0x290d74u: goto label_290d74;
        case 0x290d78u: goto label_290d78;
        case 0x290d7cu: goto label_290d7c;
        case 0x290d80u: goto label_290d80;
        case 0x290d84u: goto label_290d84;
        case 0x290d88u: goto label_290d88;
        case 0x290d8cu: goto label_290d8c;
        case 0x290d90u: goto label_290d90;
        case 0x290d94u: goto label_290d94;
        case 0x290d98u: goto label_290d98;
        case 0x290d9cu: goto label_290d9c;
        case 0x290da0u: goto label_290da0;
        case 0x290da4u: goto label_290da4;
        case 0x290da8u: goto label_290da8;
        case 0x290dacu: goto label_290dac;
        case 0x290db0u: goto label_290db0;
        case 0x290db4u: goto label_290db4;
        case 0x290db8u: goto label_290db8;
        case 0x290dbcu: goto label_290dbc;
        case 0x290dc0u: goto label_290dc0;
        case 0x290dc4u: goto label_290dc4;
        case 0x290dc8u: goto label_290dc8;
        case 0x290dccu: goto label_290dcc;
        case 0x290dd0u: goto label_290dd0;
        case 0x290dd4u: goto label_290dd4;
        case 0x290dd8u: goto label_290dd8;
        case 0x290ddcu: goto label_290ddc;
        case 0x290de0u: goto label_290de0;
        case 0x290de4u: goto label_290de4;
        case 0x290de8u: goto label_290de8;
        case 0x290decu: goto label_290dec;
        case 0x290df0u: goto label_290df0;
        case 0x290df4u: goto label_290df4;
        case 0x290df8u: goto label_290df8;
        case 0x290dfcu: goto label_290dfc;
        case 0x290e00u: goto label_290e00;
        case 0x290e04u: goto label_290e04;
        case 0x290e08u: goto label_290e08;
        case 0x290e0cu: goto label_290e0c;
        case 0x290e10u: goto label_290e10;
        case 0x290e14u: goto label_290e14;
        case 0x290e18u: goto label_290e18;
        case 0x290e1cu: goto label_290e1c;
        default: break;
    }

    ctx->pc = 0x290ca8u;

label_290ca8:
    // 0x290ca8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_290cac:
    // 0x290cac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x290cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_290cb0:
    // 0x290cb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x290cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_290cb4:
    // 0x290cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290cb8:
    // 0x290cb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_290cbc:
    // 0x290cbc: 0xc0a25ba  jal         func_2896E8
label_290cc0:
    if (ctx->pc == 0x290CC0u) {
        ctx->pc = 0x290CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CBCu;
        // 0x290cc0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CC4u;
        goto label_290cc4;
    }
    ctx->pc = 0x290CBCu;
    SET_GPR_U32(ctx, 31, 0x290CC4u);
    ctx->pc = 0x290CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290CBCu;
    // 0x290cc0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2896E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2896E8u, 0x290CBCu, 0x290CC4u)) {
        return;
    }
    ctx->pc = 0x290CC4u;
label_290cc4:
    // 0x290cc4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_290cc8:
    if (ctx->pc == 0x290CC8u) {
        ctx->pc = 0x290CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CC4u;
        // 0x290cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CCCu;
        goto label_290ccc;
    }
    ctx->pc = 0x290CC4u;
    {
        const bool branch_taken_0x290cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CC4u;
        // 0x290cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cc4) {
            ctx->pc = 0x290DF4u;
            goto label_290df4;
        }
    }
    ctx->pc = 0x290CCCu;
label_290ccc:
    // 0x290ccc: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x290cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_290cd0:
    // 0x290cd0: 0xc0a3f78  jal         func_28FDE0
label_290cd4:
    if (ctx->pc == 0x290CD4u) {
        ctx->pc = 0x290CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CD0u;
        // 0x290cd4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CD8u;
        goto label_290cd8;
    }
    ctx->pc = 0x290CD0u;
    SET_GPR_U32(ctx, 31, 0x290CD8u);
    ctx->pc = 0x290CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290CD0u;
    // 0x290cd4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FDE0u, 0x290CD0u, 0x290CD8u)) {
        return;
    }
    ctx->pc = 0x290CD8u;
label_290cd8:
    // 0x290cd8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_290cdc:
    if (ctx->pc == 0x290CDCu) {
        ctx->pc = 0x290CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CD8u;
        // 0x290cdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CE0u;
        goto label_290ce0;
    }
    ctx->pc = 0x290CD8u;
    {
        const bool branch_taken_0x290cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CD8u;
        // 0x290cdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cd8) {
            ctx->pc = 0x290D18u;
            goto label_290d18;
        }
    }
    ctx->pc = 0x290CE0u;
label_290ce0:
    // 0x290ce0: 0x10000002  b           . + 4 + (0x2 << 2)
label_290ce4:
    if (ctx->pc == 0x290CE4u) {
        ctx->pc = 0x290CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CE0u;
        // 0x290ce4: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CE8u;
        goto label_290ce8;
    }
    ctx->pc = 0x290CE0u;
    {
        const bool branch_taken_0x290ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CE0u;
        // 0x290ce4: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ce0) {
            ctx->pc = 0x290CECu;
            goto label_290cec;
        }
    }
    ctx->pc = 0x290CE8u;
label_290ce8:
    // 0x290ce8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x290ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_290cec:
    // 0x290cec: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x290cecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_290cf0:
    // 0x290cf0: 0x0  nop
    ctx->pc = 0x290cf0u;
    // NOP
label_290cf4:
    // 0x290cf4: 0x0  nop
    ctx->pc = 0x290cf4u;
    // NOP
label_290cf8:
    // 0x290cf8: 0x0  nop
    ctx->pc = 0x290cf8u;
    // NOP
label_290cfc:
    // 0x290cfc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_290d00:
    if (ctx->pc == 0x290D00u) {
        ctx->pc = 0x290D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CFCu;
        // 0x290d00: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D04u;
        goto label_290d04;
    }
    ctx->pc = 0x290CFCu;
    {
        const bool branch_taken_0x290cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290cfc) {
            ctx->pc = 0x290D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290CFCu;
            // 0x290d00: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290ce8;
        }
    }
    ctx->pc = 0x290D04u;
label_290d04:
    // 0x290d04: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x290d04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_290d08:
    // 0x290d08: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_290d0c:
    if (ctx->pc == 0x290D0Cu) {
        ctx->pc = 0x290D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D08u;
        // 0x290d0c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D10u;
        goto label_290d10;
    }
    ctx->pc = 0x290D08u;
    {
        const bool branch_taken_0x290d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D08u;
        // 0x290d0c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d08) {
            ctx->pc = 0x290CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290ce8;
        }
    }
    ctx->pc = 0x290D10u;
label_290d10:
    // 0x290d10: 0x10000006  b           . + 4 + (0x6 << 2)
label_290d14:
    if (ctx->pc == 0x290D14u) {
        ctx->pc = 0x290D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D10u;
        // 0x290d14: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D18u;
        goto label_290d18;
    }
    ctx->pc = 0x290D10u;
    {
        const bool branch_taken_0x290d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D10u;
        // 0x290d14: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d10) {
            ctx->pc = 0x290D2Cu;
            goto label_290d2c;
        }
    }
    ctx->pc = 0x290D18u;
label_290d18:
    // 0x290d18: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x290d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_290d1c:
    // 0x290d1c: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x290d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_290d20:
    // 0x290d20: 0x40f809  jalr        $v0
label_290d24:
    if (ctx->pc == 0x290D24u) {
        ctx->pc = 0x290D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D20u;
        // 0x290d24: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D28u;
        goto label_290d28;
    }
    ctx->pc = 0x290D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290D28u);
        ctx->pc = 0x290D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D20u;
        // 0x290d24: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290D20u, 0x290D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290D28u;
label_290d28:
    // 0x290d28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x290d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_290d2c:
    // 0x290d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_290d30:
    // 0x290d30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x290d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_290d34:
    // 0x290d34: 0xc092782  jal         func_249E08
label_290d38:
    if (ctx->pc == 0x290D38u) {
        ctx->pc = 0x290D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D34u;
        // 0x290d38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D3Cu;
        goto label_290d3c;
    }
    ctx->pc = 0x290D34u;
    SET_GPR_U32(ctx, 31, 0x290D3Cu);
    ctx->pc = 0x290D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D34u;
    // 0x290d38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x290D34u, 0x290D3Cu)) {
        return;
    }
    ctx->pc = 0x290D3Cu;
label_290d3c:
    // 0x290d3c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_290d40:
    if (ctx->pc == 0x290D40u) {
        ctx->pc = 0x290D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D3Cu;
        // 0x290d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D44u;
        goto label_290d44;
    }
    ctx->pc = 0x290D3Cu;
    {
        const bool branch_taken_0x290d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D3Cu;
        // 0x290d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d3c) {
            ctx->pc = 0x290DD8u;
            goto label_290dd8;
        }
    }
    ctx->pc = 0x290D44u;
label_290d44:
    // 0x290d44: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x290d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290d48:
    // 0x290d48: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x290d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_290d4c:
    // 0x290d4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x290d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_290d50:
    // 0x290d50: 0xc0935aa  jal         func_24D6A8
label_290d54:
    if (ctx->pc == 0x290D54u) {
        ctx->pc = 0x290D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D50u;
        // 0x290d54: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D58u;
        goto label_290d58;
    }
    ctx->pc = 0x290D50u;
    SET_GPR_U32(ctx, 31, 0x290D58u);
    ctx->pc = 0x290D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D50u;
    // 0x290d54: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x290D50u, 0x290D58u)) {
        return;
    }
    ctx->pc = 0x290D58u;
label_290d58:
    // 0x290d58: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_290d5c:
    if (ctx->pc == 0x290D5Cu) {
        ctx->pc = 0x290D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D58u;
        // 0x290d5c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D60u;
        goto label_290d60;
    }
    ctx->pc = 0x290D58u;
    {
        const bool branch_taken_0x290d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D58u;
        // 0x290d5c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d58) {
            ctx->pc = 0x290DD8u;
            goto label_290dd8;
        }
    }
    ctx->pc = 0x290D60u;
label_290d60:
    // 0x290d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_290d64:
    // 0x290d64: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x290d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_290d68:
    // 0x290d68: 0xc0935aa  jal         func_24D6A8
label_290d6c:
    if (ctx->pc == 0x290D6Cu) {
        ctx->pc = 0x290D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D68u;
        // 0x290d6c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D70u;
        goto label_290d70;
    }
    ctx->pc = 0x290D68u;
    SET_GPR_U32(ctx, 31, 0x290D70u);
    ctx->pc = 0x290D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D68u;
    // 0x290d6c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x290D68u, 0x290D70u)) {
        return;
    }
    ctx->pc = 0x290D70u;
label_290d70:
    // 0x290d70: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_290d74:
    if (ctx->pc == 0x290D74u) {
        ctx->pc = 0x290D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D70u;
        // 0x290d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D78u;
        goto label_290d78;
    }
    ctx->pc = 0x290D70u;
    {
        const bool branch_taken_0x290d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D70u;
        // 0x290d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d70) {
            ctx->pc = 0x290DF4u;
            goto label_290df4;
        }
    }
    ctx->pc = 0x290D78u;
label_290d78:
    // 0x290d78: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x290d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_290d7c:
    // 0x290d7c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_290d80:
    if (ctx->pc == 0x290D80u) {
        ctx->pc = 0x290D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D7Cu;
        // 0x290d80: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D84u;
        goto label_290d84;
    }
    ctx->pc = 0x290D7Cu;
    {
        const bool branch_taken_0x290d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D7Cu;
        // 0x290d80: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d7c) {
            ctx->pc = 0x290D98u;
            goto label_290d98;
        }
    }
    ctx->pc = 0x290D84u;
label_290d84:
    // 0x290d84: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x290d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_290d88:
    // 0x290d88: 0x40f809  jalr        $v0
label_290d8c:
    if (ctx->pc == 0x290D8Cu) {
        ctx->pc = 0x290D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D88u;
        // 0x290d8c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D90u;
        goto label_290d90;
    }
    ctx->pc = 0x290D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290D90u);
        ctx->pc = 0x290D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D88u;
        // 0x290d8c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290D88u, 0x290D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290D90u;
label_290d90:
    // 0x290d90: 0x10000002  b           . + 4 + (0x2 << 2)
label_290d94:
    if (ctx->pc == 0x290D94u) {
        ctx->pc = 0x290D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D90u;
        // 0x290d94: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D98u;
        goto label_290d98;
    }
    ctx->pc = 0x290D90u;
    {
        const bool branch_taken_0x290d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D90u;
        // 0x290d94: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d90) {
            ctx->pc = 0x290D9Cu;
            goto label_290d9c;
        }
    }
    ctx->pc = 0x290D98u;
label_290d98:
    // 0x290d98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x290d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_290d9c:
    // 0x290d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_290da0:
    // 0x290da0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x290da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_290da4:
    // 0x290da4: 0xc0935aa  jal         func_24D6A8
label_290da8:
    if (ctx->pc == 0x290DA8u) {
        ctx->pc = 0x290DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DA4u;
        // 0x290da8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DACu;
        goto label_290dac;
    }
    ctx->pc = 0x290DA4u;
    SET_GPR_U32(ctx, 31, 0x290DACu);
    ctx->pc = 0x290DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290DA4u;
    // 0x290da8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x290DA4u, 0x290DACu)) {
        return;
    }
    ctx->pc = 0x290DACu;
label_290dac:
    // 0x290dac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_290db0:
    if (ctx->pc == 0x290DB0u) {
        ctx->pc = 0x290DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DACu;
        // 0x290db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DB4u;
        goto label_290db4;
    }
    ctx->pc = 0x290DACu;
    {
        const bool branch_taken_0x290dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DACu;
        // 0x290db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290dac) {
            ctx->pc = 0x290DF4u;
            goto label_290df4;
        }
    }
    ctx->pc = 0x290DB4u;
label_290db4:
    // 0x290db4: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x290db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_290db8:
    // 0x290db8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_290dbc:
    if (ctx->pc == 0x290DBCu) {
        ctx->pc = 0x290DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DB8u;
        // 0x290dbc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DC0u;
        goto label_290dc0;
    }
    ctx->pc = 0x290DB8u;
    {
        const bool branch_taken_0x290db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DB8u;
        // 0x290dbc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290db8) {
            ctx->pc = 0x290DE0u;
            goto label_290de0;
        }
    }
    ctx->pc = 0x290DC0u;
label_290dc0:
    // 0x290dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_290dc4:
    // 0x290dc4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x290dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_290dc8:
    // 0x290dc8: 0xc0935aa  jal         func_24D6A8
label_290dcc:
    if (ctx->pc == 0x290DCCu) {
        ctx->pc = 0x290DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DC8u;
        // 0x290dcc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DD0u;
        goto label_290dd0;
    }
    ctx->pc = 0x290DC8u;
    SET_GPR_U32(ctx, 31, 0x290DD0u);
    ctx->pc = 0x290DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290DC8u;
    // 0x290dcc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x290DC8u, 0x290DD0u)) {
        return;
    }
    ctx->pc = 0x290DD0u;
label_290dd0:
    // 0x290dd0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_290dd4:
    if (ctx->pc == 0x290DD4u) {
        ctx->pc = 0x290DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DD0u;
        // 0x290dd4: 0x8e0400b4  lw          $a0, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DD8u;
        goto label_290dd8;
    }
    ctx->pc = 0x290DD0u;
    {
        const bool branch_taken_0x290dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290dd0) {
            ctx->pc = 0x290DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290DD0u;
            // 0x290dd4: 0x8e0400b4  lw          $a0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290DE4u;
            goto label_290de4;
        }
    }
    ctx->pc = 0x290DD8u;
label_290dd8:
    // 0x290dd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_290ddc:
    if (ctx->pc == 0x290DDCu) {
        ctx->pc = 0x290DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DD8u;
        // 0x290ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DE0u;
        goto label_290de0;
    }
    ctx->pc = 0x290DD8u;
    {
        const bool branch_taken_0x290dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DD8u;
        // 0x290ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290dd8) {
            ctx->pc = 0x290DF4u;
            goto label_290df4;
        }
    }
    ctx->pc = 0x290DE0u;
label_290de0:
    // 0x290de0: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x290de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_290de4:
    // 0x290de4: 0xc0a3afc  jal         func_28EBF0
label_290de8:
    if (ctx->pc == 0x290DE8u) {
        ctx->pc = 0x290DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DE4u;
        // 0x290de8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DECu;
        goto label_290dec;
    }
    ctx->pc = 0x290DE4u;
    SET_GPR_U32(ctx, 31, 0x290DECu);
    ctx->pc = 0x290DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290DE4u;
    // 0x290de8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28EBF0u, 0x290DE4u, 0x290DECu)) {
        return;
    }
    ctx->pc = 0x290DECu;
label_290dec:
    // 0x290dec: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x290decu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_290df0:
    // 0x290df0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x290df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290df4:
    // 0x290df4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x290df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_290df8:
    // 0x290df8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x290df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_290dfc:
    // 0x290dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_290e00:
    // 0x290e00: 0x3e00008  jr          $ra
label_290e04:
    if (ctx->pc == 0x290E04u) {
        ctx->pc = 0x290E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E00u;
        // 0x290e04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E08u;
        goto label_290e08;
    }
    ctx->pc = 0x290E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E00u;
        // 0x290e04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290E08u;
label_290e08:
    // 0x290e08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x290e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_290e0c:
    // 0x290e0c: 0x0  nop
    ctx->pc = 0x290e0cu;
    // NOP
label_290e10:
    // 0x290e10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x290e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_290e14:
    // 0x290e14: 0x0  nop
    ctx->pc = 0x290e14u;
    // NOP
label_290e18:
    // 0x290e18: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x290e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_290e1c:
    // 0x290e1c: 0x0  nop
    ctx->pc = 0x290e1cu;
    // NOP
    ctx->pc = 0x290e20u;
}
