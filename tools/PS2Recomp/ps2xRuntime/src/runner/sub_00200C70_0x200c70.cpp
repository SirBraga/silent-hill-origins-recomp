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

// Function: sub_00200C70
// Address: 0x200c70 - 0x200de8
void sub_00200C70_0x200c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200C70_0x200c70");
#endif

    switch (ctx->pc) {
        case 0x200c70u: goto label_200c70;
        case 0x200c74u: goto label_200c74;
        case 0x200c78u: goto label_200c78;
        case 0x200c7cu: goto label_200c7c;
        case 0x200c80u: goto label_200c80;
        case 0x200c84u: goto label_200c84;
        case 0x200c88u: goto label_200c88;
        case 0x200c8cu: goto label_200c8c;
        case 0x200c90u: goto label_200c90;
        case 0x200c94u: goto label_200c94;
        case 0x200c98u: goto label_200c98;
        case 0x200c9cu: goto label_200c9c;
        case 0x200ca0u: goto label_200ca0;
        case 0x200ca4u: goto label_200ca4;
        case 0x200ca8u: goto label_200ca8;
        case 0x200cacu: goto label_200cac;
        case 0x200cb0u: goto label_200cb0;
        case 0x200cb4u: goto label_200cb4;
        case 0x200cb8u: goto label_200cb8;
        case 0x200cbcu: goto label_200cbc;
        case 0x200cc0u: goto label_200cc0;
        case 0x200cc4u: goto label_200cc4;
        case 0x200cc8u: goto label_200cc8;
        case 0x200cccu: goto label_200ccc;
        case 0x200cd0u: goto label_200cd0;
        case 0x200cd4u: goto label_200cd4;
        case 0x200cd8u: goto label_200cd8;
        case 0x200cdcu: goto label_200cdc;
        case 0x200ce0u: goto label_200ce0;
        case 0x200ce4u: goto label_200ce4;
        case 0x200ce8u: goto label_200ce8;
        case 0x200cecu: goto label_200cec;
        case 0x200cf0u: goto label_200cf0;
        case 0x200cf4u: goto label_200cf4;
        case 0x200cf8u: goto label_200cf8;
        case 0x200cfcu: goto label_200cfc;
        case 0x200d00u: goto label_200d00;
        case 0x200d04u: goto label_200d04;
        case 0x200d08u: goto label_200d08;
        case 0x200d0cu: goto label_200d0c;
        case 0x200d10u: goto label_200d10;
        case 0x200d14u: goto label_200d14;
        case 0x200d18u: goto label_200d18;
        case 0x200d1cu: goto label_200d1c;
        case 0x200d20u: goto label_200d20;
        case 0x200d24u: goto label_200d24;
        case 0x200d28u: goto label_200d28;
        case 0x200d2cu: goto label_200d2c;
        case 0x200d30u: goto label_200d30;
        case 0x200d34u: goto label_200d34;
        case 0x200d38u: goto label_200d38;
        case 0x200d3cu: goto label_200d3c;
        case 0x200d40u: goto label_200d40;
        case 0x200d44u: goto label_200d44;
        case 0x200d48u: goto label_200d48;
        case 0x200d4cu: goto label_200d4c;
        case 0x200d50u: goto label_200d50;
        case 0x200d54u: goto label_200d54;
        case 0x200d58u: goto label_200d58;
        case 0x200d5cu: goto label_200d5c;
        case 0x200d60u: goto label_200d60;
        case 0x200d64u: goto label_200d64;
        case 0x200d68u: goto label_200d68;
        case 0x200d6cu: goto label_200d6c;
        case 0x200d70u: goto label_200d70;
        case 0x200d74u: goto label_200d74;
        case 0x200d78u: goto label_200d78;
        case 0x200d7cu: goto label_200d7c;
        case 0x200d80u: goto label_200d80;
        case 0x200d84u: goto label_200d84;
        case 0x200d88u: goto label_200d88;
        case 0x200d8cu: goto label_200d8c;
        case 0x200d90u: goto label_200d90;
        case 0x200d94u: goto label_200d94;
        case 0x200d98u: goto label_200d98;
        case 0x200d9cu: goto label_200d9c;
        case 0x200da0u: goto label_200da0;
        case 0x200da4u: goto label_200da4;
        case 0x200da8u: goto label_200da8;
        case 0x200dacu: goto label_200dac;
        case 0x200db0u: goto label_200db0;
        case 0x200db4u: goto label_200db4;
        case 0x200db8u: goto label_200db8;
        case 0x200dbcu: goto label_200dbc;
        case 0x200dc0u: goto label_200dc0;
        case 0x200dc4u: goto label_200dc4;
        case 0x200dc8u: goto label_200dc8;
        case 0x200dccu: goto label_200dcc;
        case 0x200dd0u: goto label_200dd0;
        case 0x200dd4u: goto label_200dd4;
        case 0x200dd8u: goto label_200dd8;
        case 0x200ddcu: goto label_200ddc;
        case 0x200de0u: goto label_200de0;
        case 0x200de4u: goto label_200de4;
        default: break;
    }

    ctx->pc = 0x200c70u;

label_200c70:
    // 0x200c70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x200c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_200c74:
    // 0x200c74: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x200c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_200c78:
    // 0x200c78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x200c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_200c7c:
    // 0x200c7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x200c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_200c80:
    // 0x200c80: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x200c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_200c84:
    // 0x200c84: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x200c84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200c88:
    // 0x200c88: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x200c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_200c8c:
    // 0x200c8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x200c8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_200c90:
    // 0x200c90: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x200c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_200c94:
    // 0x200c94: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x200c94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_200c98:
    // 0x200c98: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x200c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_200c9c:
    // 0x200c9c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x200c9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_200ca0:
    // 0x200ca0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x200ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_200ca4:
    // 0x200ca4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x200ca4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200ca8:
    // 0x200ca8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x200ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_200cac:
    // 0x200cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200cb0:
    // 0x200cb0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x200cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_200cb4:
    // 0x200cb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x200cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_200cb8:
    // 0x200cb8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x200cb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200cbc:
    // 0x200cbc: 0xc067c24  jal         func_19F090
label_200cc0:
    if (ctx->pc == 0x200CC0u) {
        ctx->pc = 0x200CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CBCu;
        // 0x200cc0: 0xafaa0020  sw          $t2, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CC4u;
        goto label_200cc4;
    }
    ctx->pc = 0x200CBCu;
    SET_GPR_U32(ctx, 31, 0x200CC4u);
    ctx->pc = 0x200CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CBCu;
    // 0x200cc0: 0xafaa0020  sw          $t2, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F090u, 0x200CBCu, 0x200CC4u)) {
        return;
    }
    ctx->pc = 0x200CC4u;
label_200cc4:
    // 0x200cc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x200cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200cc8:
    // 0x200cc8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x200cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_200ccc:
    // 0x200ccc: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x200cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_200cd0:
    // 0x200cd0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x200cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_200cd4:
    // 0x200cd4: 0x24a53770  addiu       $a1, $a1, 0x3770
    ctx->pc = 0x200cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14192));
label_200cd8:
    // 0x200cd8: 0x40f809  jalr        $v0
label_200cdc:
    if (ctx->pc == 0x200CDCu) {
        ctx->pc = 0x200CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CD8u;
        // 0x200cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CE0u;
        goto label_200ce0;
    }
    ctx->pc = 0x200CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200CE0u);
        ctx->pc = 0x200CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CD8u;
        // 0x200cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200CD8u, 0x200CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200CE0u;
label_200ce0:
    // 0x200ce0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_200ce4:
    if (ctx->pc == 0x200CE4u) {
        ctx->pc = 0x200CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CE0u;
        // 0x200ce4: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CE8u;
        goto label_200ce8;
    }
    ctx->pc = 0x200CE0u;
    {
        const bool branch_taken_0x200ce0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x200CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CE0u;
        // 0x200ce4: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ce0) {
            ctx->pc = 0x200CF0u;
            goto label_200cf0;
        }
    }
    ctx->pc = 0x200CE8u;
label_200ce8:
    // 0x200ce8: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
label_200cec:
    if (ctx->pc == 0x200CECu) {
        ctx->pc = 0x200CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CE8u;
        // 0x200cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CF0u;
        goto label_200cf0;
    }
    ctx->pc = 0x200CE8u;
    {
        const bool branch_taken_0x200ce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x200CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CE8u;
        // 0x200cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ce8) {
            ctx->pc = 0x200DB8u;
            goto label_200db8;
        }
    }
    ctx->pc = 0x200CF0u;
label_200cf0:
    // 0x200cf0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_200cf4:
    if (ctx->pc == 0x200CF4u) {
        ctx->pc = 0x200CF8u;
        goto label_200cf8;
    }
    ctx->pc = 0x200CF0u;
    {
        const bool branch_taken_0x200cf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x200cf0) {
            ctx->pc = 0x200D00u;
            goto label_200d00;
        }
    }
    ctx->pc = 0x200CF8u;
label_200cf8:
    // 0x200cf8: 0xc089ce8  jal         func_2273A0
label_200cfc:
    if (ctx->pc == 0x200CFCu) {
        ctx->pc = 0x200CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CF8u;
        // 0x200cfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D00u;
        goto label_200d00;
    }
    ctx->pc = 0x200CF8u;
    SET_GPR_U32(ctx, 31, 0x200D00u);
    ctx->pc = 0x200CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CF8u;
    // 0x200cfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2273A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2273A0u, 0x200CF8u, 0x200D00u)) {
        return;
    }
    ctx->pc = 0x200D00u;
label_200d00:
    // 0x200d00: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_200d04:
    if (ctx->pc == 0x200D04u) {
        ctx->pc = 0x200D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D00u;
        // 0x200d04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D08u;
        goto label_200d08;
    }
    ctx->pc = 0x200D00u;
    {
        const bool branch_taken_0x200d00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D00u;
        // 0x200d04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d00) {
            ctx->pc = 0x200D10u;
            goto label_200d10;
        }
    }
    ctx->pc = 0x200D08u;
label_200d08:
    // 0x200d08: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_200d0c:
    if (ctx->pc == 0x200D0Cu) {
        ctx->pc = 0x200D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D08u;
        // 0x200d0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D10u;
        goto label_200d10;
    }
    ctx->pc = 0x200D08u;
    {
        const bool branch_taken_0x200d08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D08u;
        // 0x200d0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d08) {
            ctx->pc = 0x200D1Cu;
            goto label_200d1c;
        }
    }
    ctx->pc = 0x200D10u;
label_200d10:
    // 0x200d10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200d14:
    // 0x200d14: 0x10000006  b           . + 4 + (0x6 << 2)
label_200d18:
    if (ctx->pc == 0x200D18u) {
        ctx->pc = 0x200D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D14u;
        // 0x200d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D1Cu;
        goto label_200d1c;
    }
    ctx->pc = 0x200D14u;
    {
        const bool branch_taken_0x200d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D14u;
        // 0x200d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d14) {
            ctx->pc = 0x200D30u;
            goto label_200d30;
        }
    }
    ctx->pc = 0x200D1Cu;
label_200d1c:
    // 0x200d1c: 0xc0927d2  jal         func_249F48
label_200d20:
    if (ctx->pc == 0x200D20u) {
        ctx->pc = 0x200D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D1Cu;
        // 0x200d20: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D24u;
        goto label_200d24;
    }
    ctx->pc = 0x200D1Cu;
    SET_GPR_U32(ctx, 31, 0x200D24u);
    ctx->pc = 0x200D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D1Cu;
    // 0x200d20: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249F48u, 0x200D1Cu, 0x200D24u)) {
        return;
    }
    ctx->pc = 0x200D24u;
label_200d24:
    // 0x200d24: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x200d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_200d28:
    // 0x200d28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x200d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_200d2c:
    // 0x200d2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200d30:
    // 0x200d30: 0xc0801a0  jal         func_200680
label_200d34:
    if (ctx->pc == 0x200D34u) {
        ctx->pc = 0x200D38u;
        goto label_200d38;
    }
    ctx->pc = 0x200D30u;
    SET_GPR_U32(ctx, 31, 0x200D38u);
    ctx->pc = 0x200680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200680u, 0x200D30u, 0x200D38u)) {
        return;
    }
    ctx->pc = 0x200D38u;
label_200d38:
    // 0x200d38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x200d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200d3c:
    // 0x200d3c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
label_200d40:
    if (ctx->pc == 0x200D40u) {
        ctx->pc = 0x200D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D3Cu;
        // 0x200d40: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D44u;
        goto label_200d44;
    }
    ctx->pc = 0x200D3Cu;
    {
        const bool branch_taken_0x200d3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D3Cu;
        // 0x200d40: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d3c) {
            ctx->pc = 0x200DB4u;
            goto label_200db4;
        }
    }
    ctx->pc = 0x200D44u;
label_200d44:
    // 0x200d44: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x200d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_200d48:
    // 0x200d48: 0x8e110278  lw          $s1, 0x278($s0)
    ctx->pc = 0x200d48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_200d4c:
    // 0x200d4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x200d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200d50:
    // 0x200d50: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x200d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
label_200d54:
    // 0x200d54: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x200d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_200d58:
    // 0x200d58: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x200d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_200d5c:
    // 0x200d5c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x200d5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_200d60:
    // 0x200d60: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x200d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_200d64:
    // 0x200d64: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x200d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_200d68:
    // 0x200d68: 0x40f809  jalr        $v0
label_200d6c:
    if (ctx->pc == 0x200D6Cu) {
        ctx->pc = 0x200D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D68u;
        // 0x200d6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D70u;
        goto label_200d70;
    }
    ctx->pc = 0x200D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200D70u);
        ctx->pc = 0x200D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D68u;
        // 0x200d6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200D68u, 0x200D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200D70u;
label_200d70:
    // 0x200d70: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x200d70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200d74:
    // 0x200d74: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x200d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
label_200d78:
    // 0x200d78: 0xaeb20038  sw          $s2, 0x38($s5)
    ctx->pc = 0x200d78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 18));
label_200d7c:
    // 0x200d7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_200d80:
    // 0x200d80: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x200d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_200d84:
    // 0x200d84: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x200d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_200d88:
    // 0x200d88: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x200d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_200d8c:
    // 0x200d8c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x200d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_200d90:
    // 0x200d90: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x200d90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_200d94:
    // 0x200d94: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x200d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_200d98:
    // 0x200d98: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x200d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_200d9c:
    // 0x200d9c: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x200d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
label_200da0:
    // 0x200da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200da4:
    // 0x200da4: 0xaca20160  sw          $v0, 0x160($a1)
    ctx->pc = 0x200da4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 352), GPR_U32(ctx, 2));
label_200da8:
    // 0x200da8: 0xaea30024  sw          $v1, 0x24($s5)
    ctx->pc = 0x200da8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 3));
label_200dac:
    // 0x200dac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x200dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_200db0:
    // 0x200db0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x200db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_200db4:
    // 0x200db4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x200db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200db8:
    // 0x200db8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x200db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_200dbc:
    // 0x200dbc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x200dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_200dc0:
    // 0x200dc0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x200dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_200dc4:
    // 0x200dc4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x200dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_200dc8:
    // 0x200dc8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x200dc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_200dcc:
    // 0x200dcc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x200dccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_200dd0:
    // 0x200dd0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x200dd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_200dd4:
    // 0x200dd4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x200dd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_200dd8:
    // 0x200dd8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x200dd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_200ddc:
    // 0x200ddc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x200ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_200de0:
    // 0x200de0: 0x3e00008  jr          $ra
label_200de4:
    if (ctx->pc == 0x200DE4u) {
        ctx->pc = 0x200DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DE0u;
        // 0x200de4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200DE8u;
        goto label_fallthrough_0x200de0;
    }
    ctx->pc = 0x200DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DE0u;
        // 0x200de4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200de0:
    ctx->pc = 0x200DE8u;
}
