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

// Function: sub_002E8C50
// Address: 0x2e8c50 - 0x2e8e00
void sub_002E8C50_0x2e8c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8C50_0x2e8c50");
#endif

    switch (ctx->pc) {
        case 0x2e8c50u: goto label_2e8c50;
        case 0x2e8c54u: goto label_2e8c54;
        case 0x2e8c58u: goto label_2e8c58;
        case 0x2e8c5cu: goto label_2e8c5c;
        case 0x2e8c60u: goto label_2e8c60;
        case 0x2e8c64u: goto label_2e8c64;
        case 0x2e8c68u: goto label_2e8c68;
        case 0x2e8c6cu: goto label_2e8c6c;
        case 0x2e8c70u: goto label_2e8c70;
        case 0x2e8c74u: goto label_2e8c74;
        case 0x2e8c78u: goto label_2e8c78;
        case 0x2e8c7cu: goto label_2e8c7c;
        case 0x2e8c80u: goto label_2e8c80;
        case 0x2e8c84u: goto label_2e8c84;
        case 0x2e8c88u: goto label_2e8c88;
        case 0x2e8c8cu: goto label_2e8c8c;
        case 0x2e8c90u: goto label_2e8c90;
        case 0x2e8c94u: goto label_2e8c94;
        case 0x2e8c98u: goto label_2e8c98;
        case 0x2e8c9cu: goto label_2e8c9c;
        case 0x2e8ca0u: goto label_2e8ca0;
        case 0x2e8ca4u: goto label_2e8ca4;
        case 0x2e8ca8u: goto label_2e8ca8;
        case 0x2e8cacu: goto label_2e8cac;
        case 0x2e8cb0u: goto label_2e8cb0;
        case 0x2e8cb4u: goto label_2e8cb4;
        case 0x2e8cb8u: goto label_2e8cb8;
        case 0x2e8cbcu: goto label_2e8cbc;
        case 0x2e8cc0u: goto label_2e8cc0;
        case 0x2e8cc4u: goto label_2e8cc4;
        case 0x2e8cc8u: goto label_2e8cc8;
        case 0x2e8cccu: goto label_2e8ccc;
        case 0x2e8cd0u: goto label_2e8cd0;
        case 0x2e8cd4u: goto label_2e8cd4;
        case 0x2e8cd8u: goto label_2e8cd8;
        case 0x2e8cdcu: goto label_2e8cdc;
        case 0x2e8ce0u: goto label_2e8ce0;
        case 0x2e8ce4u: goto label_2e8ce4;
        case 0x2e8ce8u: goto label_2e8ce8;
        case 0x2e8cecu: goto label_2e8cec;
        case 0x2e8cf0u: goto label_2e8cf0;
        case 0x2e8cf4u: goto label_2e8cf4;
        case 0x2e8cf8u: goto label_2e8cf8;
        case 0x2e8cfcu: goto label_2e8cfc;
        case 0x2e8d00u: goto label_2e8d00;
        case 0x2e8d04u: goto label_2e8d04;
        case 0x2e8d08u: goto label_2e8d08;
        case 0x2e8d0cu: goto label_2e8d0c;
        case 0x2e8d10u: goto label_2e8d10;
        case 0x2e8d14u: goto label_2e8d14;
        case 0x2e8d18u: goto label_2e8d18;
        case 0x2e8d1cu: goto label_2e8d1c;
        case 0x2e8d20u: goto label_2e8d20;
        case 0x2e8d24u: goto label_2e8d24;
        case 0x2e8d28u: goto label_2e8d28;
        case 0x2e8d2cu: goto label_2e8d2c;
        case 0x2e8d30u: goto label_2e8d30;
        case 0x2e8d34u: goto label_2e8d34;
        case 0x2e8d38u: goto label_2e8d38;
        case 0x2e8d3cu: goto label_2e8d3c;
        case 0x2e8d40u: goto label_2e8d40;
        case 0x2e8d44u: goto label_2e8d44;
        case 0x2e8d48u: goto label_2e8d48;
        case 0x2e8d4cu: goto label_2e8d4c;
        case 0x2e8d50u: goto label_2e8d50;
        case 0x2e8d54u: goto label_2e8d54;
        case 0x2e8d58u: goto label_2e8d58;
        case 0x2e8d5cu: goto label_2e8d5c;
        case 0x2e8d60u: goto label_2e8d60;
        case 0x2e8d64u: goto label_2e8d64;
        case 0x2e8d68u: goto label_2e8d68;
        case 0x2e8d6cu: goto label_2e8d6c;
        case 0x2e8d70u: goto label_2e8d70;
        case 0x2e8d74u: goto label_2e8d74;
        case 0x2e8d78u: goto label_2e8d78;
        case 0x2e8d7cu: goto label_2e8d7c;
        case 0x2e8d80u: goto label_2e8d80;
        case 0x2e8d84u: goto label_2e8d84;
        case 0x2e8d88u: goto label_2e8d88;
        case 0x2e8d8cu: goto label_2e8d8c;
        case 0x2e8d90u: goto label_2e8d90;
        case 0x2e8d94u: goto label_2e8d94;
        case 0x2e8d98u: goto label_2e8d98;
        case 0x2e8d9cu: goto label_2e8d9c;
        case 0x2e8da0u: goto label_2e8da0;
        case 0x2e8da4u: goto label_2e8da4;
        case 0x2e8da8u: goto label_2e8da8;
        case 0x2e8dacu: goto label_2e8dac;
        case 0x2e8db0u: goto label_2e8db0;
        case 0x2e8db4u: goto label_2e8db4;
        case 0x2e8db8u: goto label_2e8db8;
        case 0x2e8dbcu: goto label_2e8dbc;
        case 0x2e8dc0u: goto label_2e8dc0;
        case 0x2e8dc4u: goto label_2e8dc4;
        case 0x2e8dc8u: goto label_2e8dc8;
        case 0x2e8dccu: goto label_2e8dcc;
        case 0x2e8dd0u: goto label_2e8dd0;
        case 0x2e8dd4u: goto label_2e8dd4;
        case 0x2e8dd8u: goto label_2e8dd8;
        case 0x2e8ddcu: goto label_2e8ddc;
        case 0x2e8de0u: goto label_2e8de0;
        case 0x2e8de4u: goto label_2e8de4;
        case 0x2e8de8u: goto label_2e8de8;
        case 0x2e8decu: goto label_2e8dec;
        case 0x2e8df0u: goto label_2e8df0;
        case 0x2e8df4u: goto label_2e8df4;
        case 0x2e8df8u: goto label_2e8df8;
        case 0x2e8dfcu: goto label_2e8dfc;
        default: break;
    }

    ctx->pc = 0x2e8c50u;

label_2e8c50:
    // 0x2e8c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e8c54:
    // 0x2e8c54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e8c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e8c58:
    // 0x2e8c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e8c5c:
    // 0x2e8c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c60:
    // 0x2e8c60: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2e8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e8c64:
    // 0x2e8c64: 0x24a3fff7  addiu       $v1, $a1, -0x9
    ctx->pc = 0x2e8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967287));
label_2e8c68:
    // 0x2e8c68: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2e8c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2e8c6c:
    // 0x2e8c6c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2e8c70:
    if (ctx->pc == 0x2E8C70u) {
        ctx->pc = 0x2E8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C6Cu;
        // 0x2e8c70: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C74u;
        goto label_2e8c74;
    }
    ctx->pc = 0x2E8C6Cu;
    {
        const bool branch_taken_0x2e8c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C6Cu;
        // 0x2e8c70: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c6c) {
            ctx->pc = 0x2E8D2Cu;
            goto label_2e8d2c;
        }
    }
    ctx->pc = 0x2E8C74u;
label_2e8c74:
    // 0x2e8c74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e8c78:
    // 0x2e8c78: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x2e8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_2e8c7c:
    // 0x2e8c7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e8c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e8c80:
    // 0x2e8c80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e8c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e8c84:
    // 0x2e8c84: 0x800008  jr          $a0
label_2e8c88:
    if (ctx->pc == 0x2E8C88u) {
        ctx->pc = 0x2E8C8Cu;
        goto label_2e8c8c;
    }
    ctx->pc = 0x2E8C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E8C8Cu: goto label_2e8c8c;
            case 0x2E8C9Cu: goto label_2e8c9c;
            case 0x2E8CA8u: goto label_2e8ca8;
            case 0x2E8CC8u: goto label_2e8cc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8C84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E8C8Cu;
label_2e8c8c:
    // 0x2e8c8c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2e8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2e8c90:
    // 0x2e8c90: 0xaf828c6c  sw          $v0, -0x7394($gp)
    ctx->pc = 0x2e8c90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937708), GPR_U32(ctx, 2));
label_2e8c94:
    // 0x2e8c94: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2e8c98:
    if (ctx->pc == 0x2E8C98u) {
        ctx->pc = 0x2E8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C94u;
        // 0x2e8c98: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C9Cu;
        goto label_2e8c9c;
    }
    ctx->pc = 0x2E8C94u;
    {
        const bool branch_taken_0x2e8c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C94u;
        // 0x2e8c98: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c94) {
            ctx->pc = 0x2E8D4Cu;
            goto label_2e8d4c;
        }
    }
    ctx->pc = 0x2E8C9Cu;
label_2e8c9c:
    // 0x2e8c9c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2e8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2e8ca0:
    // 0x2e8ca0: 0x10000029  b           . + 4 + (0x29 << 2)
label_2e8ca4:
    if (ctx->pc == 0x2E8CA4u) {
        ctx->pc = 0x2E8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CA0u;
        // 0x2e8ca4: 0xaf828c68  sw          $v0, -0x7398($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CA8u;
        goto label_2e8ca8;
    }
    ctx->pc = 0x2E8CA0u;
    {
        const bool branch_taken_0x2e8ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CA0u;
        // 0x2e8ca4: 0xaf828c68  sw          $v0, -0x7398($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ca0) {
            ctx->pc = 0x2E8D48u;
            goto label_2e8d48;
        }
    }
    ctx->pc = 0x2E8CA8u;
label_2e8ca8:
    // 0x2e8ca8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2e8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2e8cac:
    // 0x2e8cac: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_2e8cb0:
    if (ctx->pc == 0x2E8CB0u) {
        ctx->pc = 0x2E8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CACu;
        // 0x2e8cb0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CB4u;
        goto label_2e8cb4;
    }
    ctx->pc = 0x2E8CACu;
    {
        const bool branch_taken_0x2e8cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CACu;
        // 0x2e8cb0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cac) {
            ctx->pc = 0x2E8DECu;
            goto label_2e8dec;
        }
    }
    ctx->pc = 0x2E8CB4u;
label_2e8cb4:
    // 0x2e8cb4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e8cb8:
    // 0x2e8cb8: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_2e8cbc:
    if (ctx->pc == 0x2E8CBCu) {
        ctx->pc = 0x2E8CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CB8u;
        // 0x2e8cbc: 0xaf808c60  sw          $zero, -0x73A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CC0u;
        goto label_2e8cc0;
    }
    ctx->pc = 0x2E8CB8u;
    {
        const bool branch_taken_0x2e8cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8cb8) {
            ctx->pc = 0x2E8CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8CB8u;
            // 0x2e8cbc: 0xaf808c60  sw          $zero, -0x73A0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8CC0u;
            goto label_2e8cc0;
        }
    }
    ctx->pc = 0x2E8CC0u;
label_2e8cc0:
    // 0x2e8cc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e8cc4:
    if (ctx->pc == 0x2E8CC4u) {
        ctx->pc = 0x2E8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CC0u;
        // 0x2e8cc4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CC8u;
        goto label_2e8cc8;
    }
    ctx->pc = 0x2E8CC0u;
    {
        const bool branch_taken_0x2e8cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CC0u;
        // 0x2e8cc4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cc0) {
            ctx->pc = 0x2E8CDCu;
            goto label_2e8cdc;
        }
    }
    ctx->pc = 0x2E8CC8u;
label_2e8cc8:
    // 0x2e8cc8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2e8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2e8ccc:
    // 0x2e8ccc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2e8cd0:
    if (ctx->pc == 0x2E8CD0u) {
        ctx->pc = 0x2E8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CCCu;
        // 0x2e8cd0: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CD4u;
        goto label_2e8cd4;
    }
    ctx->pc = 0x2E8CCCu;
    {
        const bool branch_taken_0x2e8ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8ccc) {
            ctx->pc = 0x2E8CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8CCCu;
            // 0x2e8cd0: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8CF8u;
            goto label_2e8cf8;
        }
    }
    ctx->pc = 0x2E8CD4u;
label_2e8cd4:
    // 0x2e8cd4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2e8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2e8cd8:
    // 0x2e8cd8: 0xaf808c60  sw          $zero, -0x73A0($gp)
    ctx->pc = 0x2e8cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 0));
label_2e8cdc:
    // 0x2e8cdc: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_2e8ce0:
    if (ctx->pc == 0x2E8CE0u) {
        ctx->pc = 0x2E8CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CDCu;
        // 0x2e8ce0: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CE4u;
        goto label_2e8ce4;
    }
    ctx->pc = 0x2E8CDCu;
    {
        const bool branch_taken_0x2e8cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8cdc) {
            ctx->pc = 0x2E8CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8CDCu;
            // 0x2e8ce0: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8D4Cu;
            goto label_2e8d4c;
        }
    }
    ctx->pc = 0x2E8CE4u;
label_2e8ce4:
    // 0x2e8ce4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2e8ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2e8ce8:
    // 0x2e8ce8: 0x40f809  jalr        $v0
label_2e8cec:
    if (ctx->pc == 0x2E8CECu) {
        ctx->pc = 0x2E8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CE8u;
        // 0x2e8cec: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CF0u;
        goto label_2e8cf0;
    }
    ctx->pc = 0x2E8CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E8CF0u);
        ctx->pc = 0x2E8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CE8u;
        // 0x2e8cec: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8CE8u, 0x2E8CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8CF0u;
label_2e8cf0:
    // 0x2e8cf0: 0x10000016  b           . + 4 + (0x16 << 2)
label_2e8cf4:
    if (ctx->pc == 0x2E8CF4u) {
        ctx->pc = 0x2E8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CF0u;
        // 0x2e8cf4: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CF8u;
        goto label_2e8cf8;
    }
    ctx->pc = 0x2E8CF0u;
    {
        const bool branch_taken_0x2e8cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CF0u;
        // 0x2e8cf4: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cf0) {
            ctx->pc = 0x2E8D4Cu;
            goto label_2e8d4c;
        }
    }
    ctx->pc = 0x2E8CF8u;
label_2e8cf8:
    // 0x2e8cf8: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x2e8cf8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2e8cfc:
    // 0x2e8cfc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e8cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e8d00:
    // 0x2e8d00: 0x8f888c68  lw          $t0, -0x7398($gp)
    ctx->pc = 0x2e8d00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_2e8d04:
    // 0x2e8d04: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x2e8d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e8d08:
    // 0x2e8d08: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2e8d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_2e8d0c:
    // 0x2e8d0c: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x2e8d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2e8d10:
    // 0x2e8d10: 0x62480a  movz        $t1, $v1, $v0
    ctx->pc = 0x2e8d10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3));
label_2e8d14:
    // 0x2e8d14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8d18:
    // 0x2e8d18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e8d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8d1c:
    // 0x2e8d1c: 0xc0c9046  jal         func_324118
label_2e8d20:
    if (ctx->pc == 0x2E8D20u) {
        ctx->pc = 0x2E8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D1Cu;
        // 0x2e8d20: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D24u;
        goto label_2e8d24;
    }
    ctx->pc = 0x2E8D1Cu;
    SET_GPR_U32(ctx, 31, 0x2E8D24u);
    ctx->pc = 0x2E8D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D1Cu;
    // 0x2e8d20: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324118u, 0x2E8D1Cu, 0x2E8D24u)) {
        return;
    }
    ctx->pc = 0x2E8D24u;
label_2e8d24:
    // 0x2e8d24: 0x10000009  b           . + 4 + (0x9 << 2)
label_2e8d28:
    if (ctx->pc == 0x2E8D28u) {
        ctx->pc = 0x2E8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D24u;
        // 0x2e8d28: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D2Cu;
        goto label_2e8d2c;
    }
    ctx->pc = 0x2E8D24u;
    {
        const bool branch_taken_0x2e8d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D24u;
        // 0x2e8d28: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d24) {
            ctx->pc = 0x2E8D4Cu;
            goto label_2e8d4c;
        }
    }
    ctx->pc = 0x2E8D2Cu;
label_2e8d2c:
    // 0x2e8d2c: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x2e8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_2e8d30:
    // 0x2e8d30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e8d34:
    if (ctx->pc == 0x2E8D34u) {
        ctx->pc = 0x2E8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D30u;
        // 0x2e8d34: 0x8f848c64  lw          $a0, -0x739C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D38u;
        goto label_2e8d38;
    }
    ctx->pc = 0x2E8D30u;
    {
        const bool branch_taken_0x2e8d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D30u;
        // 0x2e8d34: 0x8f848c64  lw          $a0, -0x739C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d30) {
            ctx->pc = 0x2E8D48u;
            goto label_2e8d48;
        }
    }
    ctx->pc = 0x2E8D38u;
label_2e8d38:
    // 0x2e8d38: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x2e8d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2e8d3c:
    // 0x2e8d3c: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x2e8d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2e8d40:
    // 0x2e8d40: 0x40f809  jalr        $v0
label_2e8d44:
    if (ctx->pc == 0x2E8D44u) {
        ctx->pc = 0x2E8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D40u;
        // 0x2e8d44: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D48u;
        goto label_2e8d48;
    }
    ctx->pc = 0x2E8D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E8D48u);
        ctx->pc = 0x2E8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D40u;
        // 0x2e8d44: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8D40u, 0x2E8D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8D48u;
label_2e8d48:
    // 0x2e8d48: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2e8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2e8d4c:
    // 0x2e8d4c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_2e8d50:
    if (ctx->pc == 0x2E8D50u) {
        ctx->pc = 0x2E8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D4Cu;
        // 0x2e8d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D54u;
        goto label_2e8d54;
    }
    ctx->pc = 0x2E8D4Cu;
    {
        const bool branch_taken_0x2e8d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D4Cu;
        // 0x2e8d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d4c) {
            ctx->pc = 0x2E8DF0u;
            goto label_2e8df0;
        }
    }
    ctx->pc = 0x2E8D54u;
label_2e8d54:
    // 0x2e8d54: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x2e8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_2e8d58:
    // 0x2e8d58: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_2e8d5c:
    if (ctx->pc == 0x2E8D5Cu) {
        ctx->pc = 0x2E8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D58u;
        // 0x2e8d5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D60u;
        goto label_2e8d60;
    }
    ctx->pc = 0x2E8D58u;
    {
        const bool branch_taken_0x2e8d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D58u;
        // 0x2e8d5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d58) {
            ctx->pc = 0x2E8DF0u;
            goto label_2e8df0;
        }
    }
    ctx->pc = 0x2E8D60u;
label_2e8d60:
    // 0x2e8d60: 0x8f828c7c  lw          $v0, -0x7384($gp)
    ctx->pc = 0x2e8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_2e8d64:
    // 0x2e8d64: 0x8f838c80  lw          $v1, -0x7380($gp)
    ctx->pc = 0x2e8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_2e8d68:
    // 0x2e8d68: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e8d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2e8d6c:
    // 0x2e8d6c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2e8d70:
    if (ctx->pc == 0x2E8D70u) {
        ctx->pc = 0x2E8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D6Cu;
        // 0x2e8d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D74u;
        goto label_2e8d74;
    }
    ctx->pc = 0x2E8D6Cu;
    {
        const bool branch_taken_0x2e8d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D6Cu;
        // 0x2e8d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d6c) {
            ctx->pc = 0x2E8DF0u;
            goto label_2e8df0;
        }
    }
    ctx->pc = 0x2E8D74u;
label_2e8d74:
    // 0x2e8d74: 0x8f828c7c  lw          $v0, -0x7384($gp)
    ctx->pc = 0x2e8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_2e8d78:
    // 0x2e8d78: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2e8d7c:
    // 0x2e8d7c: 0x2484c400  addiu       $a0, $a0, -0x3C00
    ctx->pc = 0x2e8d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951936));
label_2e8d80:
    // 0x2e8d80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e8d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e8d84:
    // 0x2e8d84: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2e8d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_2e8d88:
    // 0x2e8d88: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2e8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2e8d8c:
    // 0x2e8d8c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x2e8d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2e8d90:
    // 0x2e8d90: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e8d94:
    // 0x2e8d94: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
label_2e8d98:
    if (ctx->pc == 0x2E8D98u) {
        ctx->pc = 0x2E8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D94u;
        // 0x2e8d98: 0x8f849074  lw          $a0, -0x6F8C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D9Cu;
        goto label_2e8d9c;
    }
    ctx->pc = 0x2E8D94u;
    {
        const bool branch_taken_0x2e8d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D94u;
        // 0x2e8d98: 0x8f849074  lw          $a0, -0x6F8C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d94) {
            ctx->pc = 0x2E8DA8u;
            goto label_2e8da8;
        }
    }
    ctx->pc = 0x2E8D9Cu;
label_2e8d9c:
    // 0x2e8d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8da0:
    // 0x2e8da0: 0xaf828c60  sw          $v0, -0x73A0($gp)
    ctx->pc = 0x2e8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
label_2e8da4:
    // 0x2e8da4: 0x8f849074  lw          $a0, -0x6F8C($gp)
    ctx->pc = 0x2e8da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
label_2e8da8:
    // 0x2e8da8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2e8dac:
    if (ctx->pc == 0x2E8DACu) {
        ctx->pc = 0x2E8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DA8u;
        // 0x2e8dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8DB0u;
        goto label_2e8db0;
    }
    ctx->pc = 0x2E8DA8u;
    {
        const bool branch_taken_0x2e8da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DA8u;
        // 0x2e8dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8da8) {
            ctx->pc = 0x2E8DC4u;
            goto label_2e8dc4;
        }
    }
    ctx->pc = 0x2E8DB0u;
label_2e8db0:
    // 0x2e8db0: 0xc0c85b0  jal         func_3216C0
label_2e8db4:
    if (ctx->pc == 0x2E8DB4u) {
        ctx->pc = 0x2E8DB8u;
        goto label_2e8db8;
    }
    ctx->pc = 0x2E8DB0u;
    SET_GPR_U32(ctx, 31, 0x2E8DB8u);
    ctx->pc = 0x3216C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3216C0u, 0x2E8DB0u, 0x2E8DB8u)) {
        return;
    }
    ctx->pc = 0x2E8DB8u;
label_2e8db8:
    // 0x2e8db8: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_2e8dbc:
    if (ctx->pc == 0x2E8DBCu) {
        ctx->pc = 0x2E8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DB8u;
        // 0x2e8dbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8DC0u;
        goto label_2e8dc0;
    }
    ctx->pc = 0x2E8DB8u;
    {
        const bool branch_taken_0x2e8db8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2E8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DB8u;
        // 0x2e8dbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8db8) {
            ctx->pc = 0x2E8DF0u;
            goto label_2e8df0;
        }
    }
    ctx->pc = 0x2E8DC0u;
label_2e8dc0:
    // 0x2e8dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e8dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8dc4:
    // 0x2e8dc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8dc8:
    // 0x2e8dc8: 0x8ca70030  lw          $a3, 0x30($a1)
    ctx->pc = 0x2e8dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2e8dcc:
    // 0x2e8dcc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e8dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2e8dd0:
    // 0x2e8dd0: 0x8ca80034  lw          $t0, 0x34($a1)
    ctx->pc = 0x2e8dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2e8dd4:
    // 0x2e8dd4: 0xc0c9046  jal         func_324118
label_2e8dd8:
    if (ctx->pc == 0x2E8DD8u) {
        ctx->pc = 0x2E8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DD4u;
        // 0x2e8dd8: 0x8ca90038  lw          $t1, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8DDCu;
        goto label_2e8ddc;
    }
    ctx->pc = 0x2E8DD4u;
    SET_GPR_U32(ctx, 31, 0x2E8DDCu);
    ctx->pc = 0x2E8DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8DD4u;
    // 0x2e8dd8: 0x8ca90038  lw          $t1, 0x38($a1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324118u, 0x2E8DD4u, 0x2E8DDCu)) {
        return;
    }
    ctx->pc = 0x2E8DDCu;
label_2e8ddc:
    // 0x2e8ddc: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x2e8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_2e8de0:
    // 0x2e8de0: 0xaf829074  sw          $v0, -0x6F8C($gp)
    ctx->pc = 0x2e8de0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
label_2e8de4:
    // 0x2e8de4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e8de8:
    // 0x2e8de8: 0xaf838c7c  sw          $v1, -0x7384($gp)
    ctx->pc = 0x2e8de8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 3));
label_2e8dec:
    // 0x2e8dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8df0:
    // 0x2e8df0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8df4:
    // 0x2e8df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8df8:
    // 0x2e8df8: 0x3e00008  jr          $ra
label_2e8dfc:
    if (ctx->pc == 0x2E8DFCu) {
        ctx->pc = 0x2E8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DF8u;
        // 0x2e8dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E00u;
        goto label_fallthrough_0x2e8df8;
    }
    ctx->pc = 0x2E8DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DF8u;
        // 0x2e8dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e8df8:
    ctx->pc = 0x2E8E00u;
}
