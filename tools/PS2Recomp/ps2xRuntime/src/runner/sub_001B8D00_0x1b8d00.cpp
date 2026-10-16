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

// Function: sub_001B8D00
// Address: 0x1b8d00 - 0x1b8fd8
void sub_001B8D00_0x1b8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8D00_0x1b8d00");
#endif

    switch (ctx->pc) {
        case 0x1b8d00u: goto label_1b8d00;
        case 0x1b8d04u: goto label_1b8d04;
        case 0x1b8d08u: goto label_1b8d08;
        case 0x1b8d0cu: goto label_1b8d0c;
        case 0x1b8d10u: goto label_1b8d10;
        case 0x1b8d14u: goto label_1b8d14;
        case 0x1b8d18u: goto label_1b8d18;
        case 0x1b8d1cu: goto label_1b8d1c;
        case 0x1b8d20u: goto label_1b8d20;
        case 0x1b8d24u: goto label_1b8d24;
        case 0x1b8d28u: goto label_1b8d28;
        case 0x1b8d2cu: goto label_1b8d2c;
        case 0x1b8d30u: goto label_1b8d30;
        case 0x1b8d34u: goto label_1b8d34;
        case 0x1b8d38u: goto label_1b8d38;
        case 0x1b8d3cu: goto label_1b8d3c;
        case 0x1b8d40u: goto label_1b8d40;
        case 0x1b8d44u: goto label_1b8d44;
        case 0x1b8d48u: goto label_1b8d48;
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d50u: goto label_1b8d50;
        case 0x1b8d54u: goto label_1b8d54;
        case 0x1b8d58u: goto label_1b8d58;
        case 0x1b8d5cu: goto label_1b8d5c;
        case 0x1b8d60u: goto label_1b8d60;
        case 0x1b8d64u: goto label_1b8d64;
        case 0x1b8d68u: goto label_1b8d68;
        case 0x1b8d6cu: goto label_1b8d6c;
        case 0x1b8d70u: goto label_1b8d70;
        case 0x1b8d74u: goto label_1b8d74;
        case 0x1b8d78u: goto label_1b8d78;
        case 0x1b8d7cu: goto label_1b8d7c;
        case 0x1b8d80u: goto label_1b8d80;
        case 0x1b8d84u: goto label_1b8d84;
        case 0x1b8d88u: goto label_1b8d88;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d90u: goto label_1b8d90;
        case 0x1b8d94u: goto label_1b8d94;
        case 0x1b8d98u: goto label_1b8d98;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8da0u: goto label_1b8da0;
        case 0x1b8da4u: goto label_1b8da4;
        case 0x1b8da8u: goto label_1b8da8;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8db0u: goto label_1b8db0;
        case 0x1b8db4u: goto label_1b8db4;
        case 0x1b8db8u: goto label_1b8db8;
        case 0x1b8dbcu: goto label_1b8dbc;
        case 0x1b8dc0u: goto label_1b8dc0;
        case 0x1b8dc4u: goto label_1b8dc4;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dccu: goto label_1b8dcc;
        case 0x1b8dd0u: goto label_1b8dd0;
        case 0x1b8dd4u: goto label_1b8dd4;
        case 0x1b8dd8u: goto label_1b8dd8;
        case 0x1b8ddcu: goto label_1b8ddc;
        case 0x1b8de0u: goto label_1b8de0;
        case 0x1b8de4u: goto label_1b8de4;
        case 0x1b8de8u: goto label_1b8de8;
        case 0x1b8decu: goto label_1b8dec;
        case 0x1b8df0u: goto label_1b8df0;
        case 0x1b8df4u: goto label_1b8df4;
        case 0x1b8df8u: goto label_1b8df8;
        case 0x1b8dfcu: goto label_1b8dfc;
        case 0x1b8e00u: goto label_1b8e00;
        case 0x1b8e04u: goto label_1b8e04;
        case 0x1b8e08u: goto label_1b8e08;
        case 0x1b8e0cu: goto label_1b8e0c;
        case 0x1b8e10u: goto label_1b8e10;
        case 0x1b8e14u: goto label_1b8e14;
        case 0x1b8e18u: goto label_1b8e18;
        case 0x1b8e1cu: goto label_1b8e1c;
        case 0x1b8e20u: goto label_1b8e20;
        case 0x1b8e24u: goto label_1b8e24;
        case 0x1b8e28u: goto label_1b8e28;
        case 0x1b8e2cu: goto label_1b8e2c;
        case 0x1b8e30u: goto label_1b8e30;
        case 0x1b8e34u: goto label_1b8e34;
        case 0x1b8e38u: goto label_1b8e38;
        case 0x1b8e3cu: goto label_1b8e3c;
        case 0x1b8e40u: goto label_1b8e40;
        case 0x1b8e44u: goto label_1b8e44;
        case 0x1b8e48u: goto label_1b8e48;
        case 0x1b8e4cu: goto label_1b8e4c;
        case 0x1b8e50u: goto label_1b8e50;
        case 0x1b8e54u: goto label_1b8e54;
        case 0x1b8e58u: goto label_1b8e58;
        case 0x1b8e5cu: goto label_1b8e5c;
        case 0x1b8e60u: goto label_1b8e60;
        case 0x1b8e64u: goto label_1b8e64;
        case 0x1b8e68u: goto label_1b8e68;
        case 0x1b8e6cu: goto label_1b8e6c;
        case 0x1b8e70u: goto label_1b8e70;
        case 0x1b8e74u: goto label_1b8e74;
        case 0x1b8e78u: goto label_1b8e78;
        case 0x1b8e7cu: goto label_1b8e7c;
        case 0x1b8e80u: goto label_1b8e80;
        case 0x1b8e84u: goto label_1b8e84;
        case 0x1b8e88u: goto label_1b8e88;
        case 0x1b8e8cu: goto label_1b8e8c;
        case 0x1b8e90u: goto label_1b8e90;
        case 0x1b8e94u: goto label_1b8e94;
        case 0x1b8e98u: goto label_1b8e98;
        case 0x1b8e9cu: goto label_1b8e9c;
        case 0x1b8ea0u: goto label_1b8ea0;
        case 0x1b8ea4u: goto label_1b8ea4;
        case 0x1b8ea8u: goto label_1b8ea8;
        case 0x1b8eacu: goto label_1b8eac;
        case 0x1b8eb0u: goto label_1b8eb0;
        case 0x1b8eb4u: goto label_1b8eb4;
        case 0x1b8eb8u: goto label_1b8eb8;
        case 0x1b8ebcu: goto label_1b8ebc;
        case 0x1b8ec0u: goto label_1b8ec0;
        case 0x1b8ec4u: goto label_1b8ec4;
        case 0x1b8ec8u: goto label_1b8ec8;
        case 0x1b8eccu: goto label_1b8ecc;
        case 0x1b8ed0u: goto label_1b8ed0;
        case 0x1b8ed4u: goto label_1b8ed4;
        case 0x1b8ed8u: goto label_1b8ed8;
        case 0x1b8edcu: goto label_1b8edc;
        case 0x1b8ee0u: goto label_1b8ee0;
        case 0x1b8ee4u: goto label_1b8ee4;
        case 0x1b8ee8u: goto label_1b8ee8;
        case 0x1b8eecu: goto label_1b8eec;
        case 0x1b8ef0u: goto label_1b8ef0;
        case 0x1b8ef4u: goto label_1b8ef4;
        case 0x1b8ef8u: goto label_1b8ef8;
        case 0x1b8efcu: goto label_1b8efc;
        case 0x1b8f00u: goto label_1b8f00;
        case 0x1b8f04u: goto label_1b8f04;
        case 0x1b8f08u: goto label_1b8f08;
        case 0x1b8f0cu: goto label_1b8f0c;
        case 0x1b8f10u: goto label_1b8f10;
        case 0x1b8f14u: goto label_1b8f14;
        case 0x1b8f18u: goto label_1b8f18;
        case 0x1b8f1cu: goto label_1b8f1c;
        case 0x1b8f20u: goto label_1b8f20;
        case 0x1b8f24u: goto label_1b8f24;
        case 0x1b8f28u: goto label_1b8f28;
        case 0x1b8f2cu: goto label_1b8f2c;
        case 0x1b8f30u: goto label_1b8f30;
        case 0x1b8f34u: goto label_1b8f34;
        case 0x1b8f38u: goto label_1b8f38;
        case 0x1b8f3cu: goto label_1b8f3c;
        case 0x1b8f40u: goto label_1b8f40;
        case 0x1b8f44u: goto label_1b8f44;
        case 0x1b8f48u: goto label_1b8f48;
        case 0x1b8f4cu: goto label_1b8f4c;
        case 0x1b8f50u: goto label_1b8f50;
        case 0x1b8f54u: goto label_1b8f54;
        case 0x1b8f58u: goto label_1b8f58;
        case 0x1b8f5cu: goto label_1b8f5c;
        case 0x1b8f60u: goto label_1b8f60;
        case 0x1b8f64u: goto label_1b8f64;
        case 0x1b8f68u: goto label_1b8f68;
        case 0x1b8f6cu: goto label_1b8f6c;
        case 0x1b8f70u: goto label_1b8f70;
        case 0x1b8f74u: goto label_1b8f74;
        case 0x1b8f78u: goto label_1b8f78;
        case 0x1b8f7cu: goto label_1b8f7c;
        case 0x1b8f80u: goto label_1b8f80;
        case 0x1b8f84u: goto label_1b8f84;
        case 0x1b8f88u: goto label_1b8f88;
        case 0x1b8f8cu: goto label_1b8f8c;
        case 0x1b8f90u: goto label_1b8f90;
        case 0x1b8f94u: goto label_1b8f94;
        case 0x1b8f98u: goto label_1b8f98;
        case 0x1b8f9cu: goto label_1b8f9c;
        case 0x1b8fa0u: goto label_1b8fa0;
        case 0x1b8fa4u: goto label_1b8fa4;
        case 0x1b8fa8u: goto label_1b8fa8;
        case 0x1b8facu: goto label_1b8fac;
        case 0x1b8fb0u: goto label_1b8fb0;
        case 0x1b8fb4u: goto label_1b8fb4;
        case 0x1b8fb8u: goto label_1b8fb8;
        case 0x1b8fbcu: goto label_1b8fbc;
        case 0x1b8fc0u: goto label_1b8fc0;
        case 0x1b8fc4u: goto label_1b8fc4;
        case 0x1b8fc8u: goto label_1b8fc8;
        case 0x1b8fccu: goto label_1b8fcc;
        case 0x1b8fd0u: goto label_1b8fd0;
        case 0x1b8fd4u: goto label_1b8fd4;
        default: break;
    }

    ctx->pc = 0x1b8d00u;

label_1b8d00:
    // 0x1b8d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b8d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b8d04:
    // 0x1b8d04: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b8d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b8d08:
    // 0x1b8d08: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b8d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1b8d0c:
    // 0x1b8d0c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b8d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1b8d10:
    // 0x1b8d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d14:
    // 0x1b8d14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b8d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b8d18:
    // 0x1b8d18: 0x14a20022  bne         $a1, $v0, . + 4 + (0x22 << 2)
label_1b8d1c:
    if (ctx->pc == 0x1B8D1Cu) {
        ctx->pc = 0x1B8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D18u;
        // 0x1b8d1c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D20u;
        goto label_1b8d20;
    }
    ctx->pc = 0x1B8D18u;
    {
        const bool branch_taken_0x1b8d18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D18u;
        // 0x1b8d1c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d18) {
            ctx->pc = 0x1B8DA4u;
            goto label_1b8da4;
        }
    }
    ctx->pc = 0x1B8D20u;
label_1b8d20:
    // 0x1b8d20: 0x8e2202a0  lw          $v0, 0x2A0($s1)
    ctx->pc = 0x1b8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
label_1b8d24:
    // 0x1b8d24: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1b8d28:
    if (ctx->pc == 0x1B8D28u) {
        ctx->pc = 0x1B8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D24u;
        // 0x1b8d28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D2Cu;
        goto label_1b8d2c;
    }
    ctx->pc = 0x1B8D24u;
    {
        const bool branch_taken_0x1b8d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D24u;
        // 0x1b8d28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d24) {
            ctx->pc = 0x1B8DA8u;
            goto label_1b8da8;
        }
    }
    ctx->pc = 0x1B8D2Cu;
label_1b8d2c:
    // 0x1b8d2c: 0x8e230264  lw          $v1, 0x264($s1)
    ctx->pc = 0x1b8d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1b8d30:
    // 0x1b8d30: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1b8d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b8d34:
    // 0x1b8d34: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
label_1b8d38:
    if (ctx->pc == 0x1B8D38u) {
        ctx->pc = 0x1B8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D34u;
        // 0x1b8d38: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D3Cu;
        goto label_1b8d3c;
    }
    ctx->pc = 0x1B8D34u;
    {
        const bool branch_taken_0x1b8d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D34u;
        // 0x1b8d38: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d34) {
            ctx->pc = 0x1B8FB8u;
            goto label_1b8fb8;
        }
    }
    ctx->pc = 0x1B8D3Cu;
label_1b8d3c:
    // 0x1b8d3c: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x1b8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b8d40:
    // 0x1b8d40: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x1b8d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
label_1b8d44:
    // 0x1b8d44: 0x84640118  lh          $a0, 0x118($v1)
    ctx->pc = 0x1b8d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_1b8d48:
    // 0x1b8d48: 0x8c65011c  lw          $a1, 0x11C($v1)
    ctx->pc = 0x1b8d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_1b8d4c:
    // 0x1b8d4c: 0xa0f809  jalr        $a1
label_1b8d50:
    if (ctx->pc == 0x1B8D50u) {
        ctx->pc = 0x1B8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D4Cu;
        // 0x1b8d50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D54u;
        goto label_1b8d54;
    }
    ctx->pc = 0x1B8D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B8D54u);
        ctx->pc = 0x1B8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D4Cu;
        // 0x1b8d50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8D4Cu, 0x1B8D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8D54u;
label_1b8d54:
    // 0x1b8d54: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b8d58:
    // 0x1b8d58: 0x84440110  lh          $a0, 0x110($v0)
    ctx->pc = 0x1b8d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_1b8d5c:
    // 0x1b8d5c: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x1b8d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_1b8d60:
    // 0x1b8d60: 0x60f809  jalr        $v1
label_1b8d64:
    if (ctx->pc == 0x1B8D64u) {
        ctx->pc = 0x1B8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D60u;
        // 0x1b8d64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D68u;
        goto label_1b8d68;
    }
    ctx->pc = 0x1B8D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8D68u);
        ctx->pc = 0x1B8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D60u;
        // 0x1b8d64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8D60u, 0x1B8D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8D68u;
label_1b8d68:
    // 0x1b8d68: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b8d6c:
    // 0x1b8d6c: 0x84440120  lh          $a0, 0x120($v0)
    ctx->pc = 0x1b8d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
label_1b8d70:
    // 0x1b8d70: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x1b8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1b8d74:
    // 0x1b8d74: 0x60f809  jalr        $v1
label_1b8d78:
    if (ctx->pc == 0x1B8D78u) {
        ctx->pc = 0x1B8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D74u;
        // 0x1b8d78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D7Cu;
        goto label_1b8d7c;
    }
    ctx->pc = 0x1B8D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8D7Cu);
        ctx->pc = 0x1B8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D74u;
        // 0x1b8d78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8D74u, 0x1B8D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8D7Cu;
label_1b8d7c:
    // 0x1b8d7c: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b8d80:
    // 0x1b8d80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b8d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8d84:
    // 0x1b8d84: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x1b8d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_1b8d88:
    // 0x1b8d88: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x1b8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1b8d8c:
    // 0x1b8d8c: 0x60f809  jalr        $v1
label_1b8d90:
    if (ctx->pc == 0x1B8D90u) {
        ctx->pc = 0x1B8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D8Cu;
        // 0x1b8d90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D94u;
        goto label_1b8d94;
    }
    ctx->pc = 0x1B8D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8D94u);
        ctx->pc = 0x1B8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D8Cu;
        // 0x1b8d90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8D8Cu, 0x1B8D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8D94u;
label_1b8d94:
    // 0x1b8d94: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1b8d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1b8d98:
    // 0x1b8d98: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1b8d9c:
    // 0x1b8d9c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1b8da0:
    if (ctx->pc == 0x1B8DA0u) {
        ctx->pc = 0x1B8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D9Cu;
        // 0x1b8da0: 0x8c8443a0  lw          $a0, 0x43A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DA4u;
        goto label_1b8da4;
    }
    ctx->pc = 0x1B8D9Cu;
    {
        const bool branch_taken_0x1b8d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D9Cu;
        // 0x1b8da0: 0x8c8443a0  lw          $a0, 0x43A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d9c) {
            ctx->pc = 0x1B8E34u;
            goto label_1b8e34;
        }
    }
    ctx->pc = 0x1B8DA4u;
label_1b8da4:
    // 0x1b8da4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b8da8:
    // 0x1b8da8: 0x14a2002e  bne         $a1, $v0, . + 4 + (0x2E << 2)
label_1b8dac:
    if (ctx->pc == 0x1B8DACu) {
        ctx->pc = 0x1B8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DA8u;
        // 0x1b8dac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DB0u;
        goto label_1b8db0;
    }
    ctx->pc = 0x1B8DA8u;
    {
        const bool branch_taken_0x1b8da8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DA8u;
        // 0x1b8dac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8da8) {
            ctx->pc = 0x1B8E64u;
            goto label_1b8e64;
        }
    }
    ctx->pc = 0x1B8DB0u;
label_1b8db0:
    // 0x1b8db0: 0x8e2202a0  lw          $v0, 0x2A0($s1)
    ctx->pc = 0x1b8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
label_1b8db4:
    // 0x1b8db4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1b8db8:
    if (ctx->pc == 0x1B8DB8u) {
        ctx->pc = 0x1B8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DB4u;
        // 0x1b8db8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DBCu;
        goto label_1b8dbc;
    }
    ctx->pc = 0x1B8DB4u;
    {
        const bool branch_taken_0x1b8db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DB4u;
        // 0x1b8db8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8db4) {
            ctx->pc = 0x1B8E64u;
            goto label_1b8e64;
        }
    }
    ctx->pc = 0x1B8DBCu;
label_1b8dbc:
    // 0x1b8dbc: 0x8e230264  lw          $v1, 0x264($s1)
    ctx->pc = 0x1b8dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1b8dc0:
    // 0x1b8dc0: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1b8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1b8dc4:
    // 0x1b8dc4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b8dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b8dc8:
    // 0x1b8dc8: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_1b8dcc:
    if (ctx->pc == 0x1B8DCCu) {
        ctx->pc = 0x1B8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DC8u;
        // 0x1b8dcc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DD0u;
        goto label_1b8dd0;
    }
    ctx->pc = 0x1B8DC8u;
    {
        const bool branch_taken_0x1b8dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DC8u;
        // 0x1b8dcc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8dc8) {
            ctx->pc = 0x1B8FB8u;
            goto label_1b8fb8;
        }
    }
    ctx->pc = 0x1B8DD0u;
label_1b8dd0:
    // 0x1b8dd0: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x1b8dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b8dd4:
    // 0x1b8dd4: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x1b8dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
label_1b8dd8:
    // 0x1b8dd8: 0x84640118  lh          $a0, 0x118($v1)
    ctx->pc = 0x1b8dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_1b8ddc:
    // 0x1b8ddc: 0x8c65011c  lw          $a1, 0x11C($v1)
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_1b8de0:
    // 0x1b8de0: 0xa0f809  jalr        $a1
label_1b8de4:
    if (ctx->pc == 0x1B8DE4u) {
        ctx->pc = 0x1B8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DE0u;
        // 0x1b8de4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DE8u;
        goto label_1b8de8;
    }
    ctx->pc = 0x1B8DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B8DE8u);
        ctx->pc = 0x1B8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DE0u;
        // 0x1b8de4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8DE0u, 0x1B8DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8DE8u;
label_1b8de8:
    // 0x1b8de8: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b8de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b8dec:
    // 0x1b8dec: 0x84440110  lh          $a0, 0x110($v0)
    ctx->pc = 0x1b8decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_1b8df0:
    // 0x1b8df0: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x1b8df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_1b8df4:
    // 0x1b8df4: 0x60f809  jalr        $v1
label_1b8df8:
    if (ctx->pc == 0x1B8DF8u) {
        ctx->pc = 0x1B8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DF4u;
        // 0x1b8df8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DFCu;
        goto label_1b8dfc;
    }
    ctx->pc = 0x1B8DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8DFCu);
        ctx->pc = 0x1B8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DF4u;
        // 0x1b8df8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8DF4u, 0x1B8DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8DFCu;
label_1b8dfc:
    // 0x1b8dfc: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b8e00:
    // 0x1b8e00: 0x84440120  lh          $a0, 0x120($v0)
    ctx->pc = 0x1b8e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
label_1b8e04:
    // 0x1b8e04: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x1b8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1b8e08:
    // 0x1b8e08: 0x60f809  jalr        $v1
label_1b8e0c:
    if (ctx->pc == 0x1B8E0Cu) {
        ctx->pc = 0x1B8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E08u;
        // 0x1b8e0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E10u;
        goto label_1b8e10;
    }
    ctx->pc = 0x1B8E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8E10u);
        ctx->pc = 0x1B8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E08u;
        // 0x1b8e0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8E08u, 0x1B8E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8E10u;
label_1b8e10:
    // 0x1b8e10: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b8e14:
    // 0x1b8e14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b8e18:
    // 0x1b8e18: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x1b8e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_1b8e1c:
    // 0x1b8e1c: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x1b8e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1b8e20:
    // 0x1b8e20: 0x60f809  jalr        $v1
label_1b8e24:
    if (ctx->pc == 0x1B8E24u) {
        ctx->pc = 0x1B8E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E20u;
        // 0x1b8e24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E28u;
        goto label_1b8e28;
    }
    ctx->pc = 0x1B8E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8E28u);
        ctx->pc = 0x1B8E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E20u;
        // 0x1b8e24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8E20u, 0x1B8E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8E28u;
label_1b8e28:
    // 0x1b8e28: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1b8e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1b8e2c:
    // 0x1b8e2c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b8e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1b8e30:
    // 0x1b8e30: 0x8c8443a8  lw          $a0, 0x43A8($a0)
    ctx->pc = 0x1b8e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17320)));
label_1b8e34:
    // 0x1b8e34: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1b8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1b8e38:
    // 0x1b8e38: 0x10820062  beq         $a0, $v0, . + 4 + (0x62 << 2)
label_1b8e3c:
    if (ctx->pc == 0x1B8E3Cu) {
        ctx->pc = 0x1B8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E38u;
        // 0x1b8e3c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E40u;
        goto label_1b8e40;
    }
    ctx->pc = 0x1B8E38u;
    {
        const bool branch_taken_0x1b8e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E38u;
        // 0x1b8e3c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e38) {
            ctx->pc = 0x1B8FC4u;
            goto label_1b8fc4;
        }
    }
    ctx->pc = 0x1B8E40u;
label_1b8e40:
    // 0x1b8e40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8e44:
    // 0x1b8e44: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_1b8e48:
    if (ctx->pc == 0x1B8E48u) {
        ctx->pc = 0x1B8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E44u;
        // 0x1b8e48: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E4Cu;
        goto label_1b8e4c;
    }
    ctx->pc = 0x1B8E44u;
    {
        const bool branch_taken_0x1b8e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E44u;
        // 0x1b8e48: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e44) {
            ctx->pc = 0x1B8FC8u;
            goto label_1b8fc8;
        }
    }
    ctx->pc = 0x1B8E4Cu;
label_1b8e4c:
    // 0x1b8e4c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1b8e50:
    // 0x1b8e50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e54:
    // 0x1b8e54: 0xc07fd18  jal         func_1FF460
label_1b8e58:
    if (ctx->pc == 0x1B8E58u) {
        ctx->pc = 0x1B8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E54u;
        // 0x1b8e58: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E5Cu;
        goto label_1b8e5c;
    }
    ctx->pc = 0x1B8E54u;
    SET_GPR_U32(ctx, 31, 0x1B8E5Cu);
    ctx->pc = 0x1B8E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E54u;
    // 0x1b8e58: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B8E54u, 0x1B8E5Cu)) {
        return;
    }
    ctx->pc = 0x1B8E5Cu;
label_1b8e5c:
    // 0x1b8e5c: 0x10000059  b           . + 4 + (0x59 << 2)
label_1b8e60:
    if (ctx->pc == 0x1B8E60u) {
        ctx->pc = 0x1B8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E5Cu;
        // 0x1b8e60: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E64u;
        goto label_1b8e64;
    }
    ctx->pc = 0x1B8E5Cu;
    {
        const bool branch_taken_0x1b8e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E5Cu;
        // 0x1b8e60: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e5c) {
            ctx->pc = 0x1B8FC4u;
            goto label_1b8fc4;
        }
    }
    ctx->pc = 0x1B8E64u;
label_1b8e64:
    // 0x1b8e64: 0x14a2002f  bne         $a1, $v0, . + 4 + (0x2F << 2)
label_1b8e68:
    if (ctx->pc == 0x1B8E68u) {
        ctx->pc = 0x1B8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E64u;
        // 0x1b8e68: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E6Cu;
        goto label_1b8e6c;
    }
    ctx->pc = 0x1B8E64u;
    {
        const bool branch_taken_0x1b8e64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E64u;
        // 0x1b8e68: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e64) {
            ctx->pc = 0x1B8F24u;
            goto label_1b8f24;
        }
    }
    ctx->pc = 0x1B8E6Cu;
label_1b8e6c:
    // 0x1b8e6c: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x1b8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_1b8e70:
    // 0x1b8e70: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_1b8e74:
    if (ctx->pc == 0x1B8E74u) {
        ctx->pc = 0x1B8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E70u;
        // 0x1b8e74: 0x26300318  addiu       $s0, $s1, 0x318 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E78u;
        goto label_1b8e78;
    }
    ctx->pc = 0x1B8E70u;
    {
        const bool branch_taken_0x1b8e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E70u;
        // 0x1b8e74: 0x26300318  addiu       $s0, $s1, 0x318 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e70) {
            ctx->pc = 0x1B8FB8u;
            goto label_1b8fb8;
        }
    }
    ctx->pc = 0x1B8E78u;
label_1b8e78:
    // 0x1b8e78: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b8e7c:
    // 0x1b8e7c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1b8e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b8e80:
    // 0x1b8e80: 0x10c0004d  beqz        $a2, . + 4 + (0x4D << 2)
label_1b8e84:
    if (ctx->pc == 0x1B8E84u) {
        ctx->pc = 0x1B8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E80u;
        // 0x1b8e84: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E88u;
        goto label_1b8e88;
    }
    ctx->pc = 0x1B8E80u;
    {
        const bool branch_taken_0x1b8e80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E80u;
        // 0x1b8e84: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e80) {
            ctx->pc = 0x1B8FB8u;
            goto label_1b8fb8;
        }
    }
    ctx->pc = 0x1B8E88u;
label_1b8e88:
    // 0x1b8e88: 0x8e22032c  lw          $v0, 0x32C($s1)
    ctx->pc = 0x1b8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_1b8e8c:
    // 0x1b8e8c: 0x8e23026c  lw          $v1, 0x26C($s1)
    ctx->pc = 0x1b8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_1b8e90:
    // 0x1b8e90: 0x2442fff5  addiu       $v0, $v0, -0xB
    ctx->pc = 0x1b8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967285));
label_1b8e94:
    // 0x1b8e94: 0xae26026c  sw          $a2, 0x26C($s1)
    ctx->pc = 0x1b8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 6));
label_1b8e98:
    // 0x1b8e98: 0xae230314  sw          $v1, 0x314($s1)
    ctx->pc = 0x1b8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 3));
label_1b8e9c:
    // 0x1b8e9c: 0xae22032c  sw          $v0, 0x32C($s1)
    ctx->pc = 0x1b8e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 2));
label_1b8ea0:
    // 0x1b8ea0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b8ea4:
    // 0x1b8ea4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1b8ea8:
    if (ctx->pc == 0x1B8EA8u) {
        ctx->pc = 0x1B8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EA4u;
        // 0x1b8ea8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EACu;
        goto label_1b8eac;
    }
    ctx->pc = 0x1B8EA4u;
    {
        const bool branch_taken_0x1b8ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EA4u;
        // 0x1b8ea8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ea4) {
            ctx->pc = 0x1B8EC8u;
            goto label_1b8ec8;
        }
    }
    ctx->pc = 0x1B8EACu;
label_1b8eac:
    // 0x1b8eac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8eb0:
    // 0x1b8eb0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1b8eb4:
    if (ctx->pc == 0x1B8EB4u) {
        ctx->pc = 0x1B8EB8u;
        goto label_1b8eb8;
    }
    ctx->pc = 0x1B8EB0u;
    {
        const bool branch_taken_0x1b8eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b8eb0) {
            ctx->pc = 0x1B8ECCu;
            goto label_1b8ecc;
        }
    }
    ctx->pc = 0x1B8EB8u;
label_1b8eb8:
    // 0x1b8eb8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b8ebc:
    // 0x1b8ebc: 0x0  nop
    ctx->pc = 0x1b8ebcu;
    // NOP
label_1b8ec0:
    // 0x1b8ec0: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_1b8ec4:
    if (ctx->pc == 0x1B8EC4u) {
        ctx->pc = 0x1B8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EC0u;
        // 0x1b8ec4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EC8u;
        goto label_1b8ec8;
    }
    ctx->pc = 0x1B8EC0u;
    {
        const bool branch_taken_0x1b8ec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ec0) {
            ctx->pc = 0x1B8EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8EC0u;
            // 0x1b8ec4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8eb0;
        }
    }
    ctx->pc = 0x1B8EC8u;
label_1b8ec8:
    // 0x1b8ec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ecc:
    // 0x1b8ecc: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_1b8ed0:
    if (ctx->pc == 0x1B8ED0u) {
        ctx->pc = 0x1B8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ECCu;
        // 0x1b8ed0: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8ED4u;
        goto label_1b8ed4;
    }
    ctx->pc = 0x1B8ECCu;
    {
        const bool branch_taken_0x1b8ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ecc) {
            ctx->pc = 0x1B8ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8ECCu;
            // 0x1b8ed0: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F1Cu;
            goto label_1b8f1c;
        }
    }
    ctx->pc = 0x1B8ED4u;
label_1b8ed4:
    // 0x1b8ed4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b8ed8:
    // 0x1b8ed8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b8edc:
    if (ctx->pc == 0x1B8EDCu) {
        ctx->pc = 0x1B8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ED8u;
        // 0x1b8edc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EE0u;
        goto label_1b8ee0;
    }
    ctx->pc = 0x1B8ED8u;
    {
        const bool branch_taken_0x1b8ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ED8u;
        // 0x1b8edc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ed8) {
            ctx->pc = 0x1B8EE8u;
            goto label_1b8ee8;
        }
    }
    ctx->pc = 0x1B8EE0u;
label_1b8ee0:
    // 0x1b8ee0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b8ee4:
    if (ctx->pc == 0x1B8EE4u) {
        ctx->pc = 0x1B8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EE0u;
        // 0x1b8ee4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EE8u;
        goto label_1b8ee8;
    }
    ctx->pc = 0x1B8EE0u;
    {
        const bool branch_taken_0x1b8ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EE0u;
        // 0x1b8ee4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ee0) {
            ctx->pc = 0x1B8EECu;
            goto label_1b8eec;
        }
    }
    ctx->pc = 0x1B8EE8u;
label_1b8ee8:
    // 0x1b8ee8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b8ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b8eec:
    // 0x1b8eec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b8eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b8ef0:
    // 0x1b8ef0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b8ef4:
    if (ctx->pc == 0x1B8EF4u) {
        ctx->pc = 0x1B8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EF0u;
        // 0x1b8ef4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EF8u;
        goto label_1b8ef8;
    }
    ctx->pc = 0x1B8EF0u;
    {
        const bool branch_taken_0x1b8ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EF0u;
        // 0x1b8ef4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ef0) {
            ctx->pc = 0x1B8F00u;
            goto label_1b8f00;
        }
    }
    ctx->pc = 0x1B8EF8u;
label_1b8ef8:
    // 0x1b8ef8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b8efc:
    if (ctx->pc == 0x1B8EFCu) {
        ctx->pc = 0x1B8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EF8u;
        // 0x1b8efc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F00u;
        goto label_1b8f00;
    }
    ctx->pc = 0x1B8EF8u;
    {
        const bool branch_taken_0x1b8ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EF8u;
        // 0x1b8efc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ef8) {
            ctx->pc = 0x1B8F04u;
            goto label_1b8f04;
        }
    }
    ctx->pc = 0x1B8F00u;
label_1b8f00:
    // 0x1b8f00: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b8f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b8f04:
    // 0x1b8f04: 0xc0808b8  jal         func_2022E0
label_1b8f08:
    if (ctx->pc == 0x1B8F08u) {
        ctx->pc = 0x1B8F0Cu;
        goto label_1b8f0c;
    }
    ctx->pc = 0x1B8F04u;
    SET_GPR_U32(ctx, 31, 0x1B8F0Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B8F04u, 0x1B8F0Cu)) {
        return;
    }
    ctx->pc = 0x1B8F0Cu;
label_1b8f0c:
    // 0x1b8f0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8f10:
    // 0x1b8f10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b8f14:
    // 0x1b8f14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b8f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b8f18:
    // 0x1b8f18: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b8f1c:
    // 0x1b8f1c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1b8f20:
    if (ctx->pc == 0x1B8F20u) {
        ctx->pc = 0x1B8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F1Cu;
        // 0x1b8f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F24u;
        goto label_1b8f24;
    }
    ctx->pc = 0x1B8F1Cu;
    {
        const bool branch_taken_0x1b8f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F1Cu;
        // 0x1b8f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f1c) {
            ctx->pc = 0x1B8FA0u;
            goto label_1b8fa0;
        }
    }
    ctx->pc = 0x1B8F24u;
label_1b8f24:
    // 0x1b8f24: 0x14a20024  bne         $a1, $v0, . + 4 + (0x24 << 2)
label_1b8f28:
    if (ctx->pc == 0x1B8F28u) {
        ctx->pc = 0x1B8F2Cu;
        goto label_1b8f2c;
    }
    ctx->pc = 0x1B8F24u;
    {
        const bool branch_taken_0x1b8f24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8f24) {
            ctx->pc = 0x1B8FB8u;
            goto label_1b8fb8;
        }
    }
    ctx->pc = 0x1B8F2Cu;
label_1b8f2c:
    // 0x1b8f2c: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x1b8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_1b8f30:
    // 0x1b8f30: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1b8f34:
    if (ctx->pc == 0x1B8F34u) {
        ctx->pc = 0x1B8F38u;
        goto label_1b8f38;
    }
    ctx->pc = 0x1B8F30u;
    {
        const bool branch_taken_0x1b8f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f30) {
            ctx->pc = 0x1B8FB8u;
            goto label_1b8fb8;
        }
    }
    ctx->pc = 0x1B8F38u;
label_1b8f38:
    // 0x1b8f38: 0x8e30026c  lw          $s0, 0x26C($s1)
    ctx->pc = 0x1b8f38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_1b8f3c:
    // 0x1b8f3c: 0xc080858  jal         func_202160
label_1b8f40:
    if (ctx->pc == 0x1B8F40u) {
        ctx->pc = 0x1B8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F3Cu;
        // 0x1b8f40: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F44u;
        goto label_1b8f44;
    }
    ctx->pc = 0x1B8F3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8F44u);
    ctx->pc = 0x1B8F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8F3Cu;
    // 0x1b8f40: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1B8F3Cu, 0x1B8F44u)) {
        return;
    }
    ctx->pc = 0x1B8F44u;
label_1b8f44:
    // 0x1b8f44: 0x26320318  addiu       $s2, $s1, 0x318
    ctx->pc = 0x1b8f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 792));
label_1b8f48:
    // 0x1b8f48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b8f48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f4c:
    // 0x1b8f4c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1b8f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1b8f50:
    // 0x1b8f50: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1b8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1b8f54:
    // 0x1b8f54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b8f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1b8f58:
    // 0x1b8f58: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b8f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b8f5c:
    // 0x1b8f5c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1b8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1b8f60:
    // 0x1b8f60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1b8f64:
    if (ctx->pc == 0x1B8F64u) {
        ctx->pc = 0x1B8F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F60u;
        // 0x1b8f64: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F68u;
        goto label_1b8f68;
    }
    ctx->pc = 0x1B8F60u;
    {
        const bool branch_taken_0x1b8f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f60) {
            ctx->pc = 0x1B8F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8F60u;
            // 0x1b8f64: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F68u;
            goto label_1b8f68;
        }
    }
    ctx->pc = 0x1B8F68u;
label_1b8f68:
    // 0x1b8f68: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b8f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b8f6c:
    // 0x1b8f6c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1b8f70:
    if (ctx->pc == 0x1B8F70u) {
        ctx->pc = 0x1B8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F6Cu;
        // 0x1b8f70: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F74u;
        goto label_1b8f74;
    }
    ctx->pc = 0x1B8F6Cu;
    {
        const bool branch_taken_0x1b8f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f6c) {
            ctx->pc = 0x1B8F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8F6Cu;
            // 0x1b8f70: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F74u;
            goto label_1b8f74;
        }
    }
    ctx->pc = 0x1B8F74u;
label_1b8f74:
    // 0x1b8f74: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1b8f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1b8f78:
    // 0x1b8f78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8f7c:
    // 0x1b8f7c: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x1b8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_1b8f80:
    // 0x1b8f80: 0x8e23032c  lw          $v1, 0x32C($s1)
    ctx->pc = 0x1b8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_1b8f84:
    // 0x1b8f84: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x1b8f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_1b8f88:
    // 0x1b8f88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b8f8c:
    // 0x1b8f8c: 0xae220318  sw          $v0, 0x318($s1)
    ctx->pc = 0x1b8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 2));
label_1b8f90:
    // 0x1b8f90: 0x2463000b  addiu       $v1, $v1, 0xB
    ctx->pc = 0x1b8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11));
label_1b8f94:
    // 0x1b8f94: 0xae24026c  sw          $a0, 0x26C($s1)
    ctx->pc = 0x1b8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 4));
label_1b8f98:
    // 0x1b8f98: 0xae23032c  sw          $v1, 0x32C($s1)
    ctx->pc = 0x1b8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 3));
label_1b8f9c:
    // 0x1b8f9c: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b8fa0:
    // 0x1b8fa0: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x1b8fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_1b8fa4:
    // 0x1b8fa4: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x1b8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1b8fa8:
    // 0x1b8fa8: 0x60f809  jalr        $v1
label_1b8fac:
    if (ctx->pc == 0x1B8FACu) {
        ctx->pc = 0x1B8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FA8u;
        // 0x1b8fac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FB0u;
        goto label_1b8fb0;
    }
    ctx->pc = 0x1B8FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8FB0u);
        ctx->pc = 0x1B8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FA8u;
        // 0x1b8fac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8FA8u, 0x1B8FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8FB0u;
label_1b8fb0:
    // 0x1b8fb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b8fb4:
    if (ctx->pc == 0x1B8FB4u) {
        ctx->pc = 0x1B8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FB0u;
        // 0x1b8fb4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FB8u;
        goto label_1b8fb8;
    }
    ctx->pc = 0x1B8FB0u;
    {
        const bool branch_taken_0x1b8fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FB0u;
        // 0x1b8fb4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8fb0) {
            ctx->pc = 0x1B8FC4u;
            goto label_1b8fc4;
        }
    }
    ctx->pc = 0x1B8FB8u;
label_1b8fb8:
    // 0x1b8fb8: 0xc06ba6c  jal         func_1AE9B0
label_1b8fbc:
    if (ctx->pc == 0x1B8FBCu) {
        ctx->pc = 0x1B8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FB8u;
        // 0x1b8fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FC0u;
        goto label_1b8fc0;
    }
    ctx->pc = 0x1B8FB8u;
    SET_GPR_U32(ctx, 31, 0x1B8FC0u);
    ctx->pc = 0x1B8FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FB8u;
    // 0x1b8fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1B8FB8u, 0x1B8FC0u)) {
        return;
    }
    ctx->pc = 0x1B8FC0u;
label_1b8fc0:
    // 0x1b8fc0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b8fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b8fc4:
    // 0x1b8fc4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b8fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8fc8:
    // 0x1b8fc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b8fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8fcc:
    // 0x1b8fcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8fd0:
    // 0x1b8fd0: 0x3e00008  jr          $ra
label_1b8fd4:
    if (ctx->pc == 0x1B8FD4u) {
        ctx->pc = 0x1B8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FD0u;
        // 0x1b8fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FD8u;
        goto label_fallthrough_0x1b8fd0;
    }
    ctx->pc = 0x1B8FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FD0u;
        // 0x1b8fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b8fd0:
    ctx->pc = 0x1B8FD8u;
}
