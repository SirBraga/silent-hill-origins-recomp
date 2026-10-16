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

// Function: sub_001B9D48
// Address: 0x1b9d48 - 0x1b9dd0
void sub_001B9D48_0x1b9d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9D48_0x1b9d48");
#endif

    switch (ctx->pc) {
        case 0x1b9d48u: goto label_1b9d48;
        case 0x1b9d4cu: goto label_1b9d4c;
        case 0x1b9d50u: goto label_1b9d50;
        case 0x1b9d54u: goto label_1b9d54;
        case 0x1b9d58u: goto label_1b9d58;
        case 0x1b9d5cu: goto label_1b9d5c;
        case 0x1b9d60u: goto label_1b9d60;
        case 0x1b9d64u: goto label_1b9d64;
        case 0x1b9d68u: goto label_1b9d68;
        case 0x1b9d6cu: goto label_1b9d6c;
        case 0x1b9d70u: goto label_1b9d70;
        case 0x1b9d74u: goto label_1b9d74;
        case 0x1b9d78u: goto label_1b9d78;
        case 0x1b9d7cu: goto label_1b9d7c;
        case 0x1b9d80u: goto label_1b9d80;
        case 0x1b9d84u: goto label_1b9d84;
        case 0x1b9d88u: goto label_1b9d88;
        case 0x1b9d8cu: goto label_1b9d8c;
        case 0x1b9d90u: goto label_1b9d90;
        case 0x1b9d94u: goto label_1b9d94;
        case 0x1b9d98u: goto label_1b9d98;
        case 0x1b9d9cu: goto label_1b9d9c;
        case 0x1b9da0u: goto label_1b9da0;
        case 0x1b9da4u: goto label_1b9da4;
        case 0x1b9da8u: goto label_1b9da8;
        case 0x1b9dacu: goto label_1b9dac;
        case 0x1b9db0u: goto label_1b9db0;
        case 0x1b9db4u: goto label_1b9db4;
        case 0x1b9db8u: goto label_1b9db8;
        case 0x1b9dbcu: goto label_1b9dbc;
        case 0x1b9dc0u: goto label_1b9dc0;
        case 0x1b9dc4u: goto label_1b9dc4;
        case 0x1b9dc8u: goto label_1b9dc8;
        case 0x1b9dccu: goto label_1b9dcc;
        default: break;
    }

    ctx->pc = 0x1b9d48u;

label_1b9d48:
    // 0x1b9d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b9d4c:
    // 0x1b9d4c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1b9d50:
    // 0x1b9d50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b9d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b9d54:
    // 0x1b9d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b9d58:
    // 0x1b9d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d5c:
    // 0x1b9d5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b9d60:
    // 0x1b9d60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b9d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d64:
    // 0x1b9d64: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b9d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b9d68:
    // 0x1b9d68: 0xae050268  sw          $a1, 0x268($s0)
    ctx->pc = 0x1b9d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 5));
label_1b9d6c:
    // 0x1b9d6c: 0xc0640b8  jal         func_1902E0
label_1b9d70:
    if (ctx->pc == 0x1B9D70u) {
        ctx->pc = 0x1B9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D6Cu;
        // 0x1b9d70: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D74u;
        goto label_1b9d74;
    }
    ctx->pc = 0x1B9D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D74u);
    ctx->pc = 0x1B9D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D6Cu;
    // 0x1b9d70: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x1B9D6Cu, 0x1B9D74u)) {
        return;
    }
    ctx->pc = 0x1B9D74u;
label_1b9d74:
    // 0x1b9d74: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1b9d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b9d78:
    // 0x1b9d78: 0x8e050260  lw          $a1, 0x260($s0)
    ctx->pc = 0x1b9d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1b9d7c:
    // 0x1b9d7c: 0xc06c97c  jal         func_1B25F0
label_1b9d80:
    if (ctx->pc == 0x1B9D80u) {
        ctx->pc = 0x1B9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D7Cu;
        // 0x1b9d80: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D84u;
        goto label_1b9d84;
    }
    ctx->pc = 0x1B9D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D84u);
    ctx->pc = 0x1B9D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D7Cu;
    // 0x1b9d80: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B9D7Cu, 0x1B9D84u)) {
        return;
    }
    ctx->pc = 0x1B9D84u;
label_1b9d84:
    // 0x1b9d84: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x1b9d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
label_1b9d88:
    // 0x1b9d88: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1b9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1b9d8c:
    // 0x1b9d8c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1b9d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b9d90:
    // 0x1b9d90: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1b9d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1b9d94:
    // 0x1b9d94: 0x8c6600c4  lw          $a2, 0xC4($v1)
    ctx->pc = 0x1b9d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1b9d98:
    // 0x1b9d98: 0xc0f809  jalr        $a2
label_1b9d9c:
    if (ctx->pc == 0x1B9D9Cu) {
        ctx->pc = 0x1B9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D98u;
        // 0x1b9d9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DA0u;
        goto label_1b9da0;
    }
    ctx->pc = 0x1B9D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B9DA0u);
        ctx->pc = 0x1B9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D98u;
        // 0x1b9d9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9D98u, 0x1B9DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9DA0u;
label_1b9da0:
    // 0x1b9da0: 0x8e070264  lw          $a3, 0x264($s0)
    ctx->pc = 0x1b9da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1b9da4:
    // 0x1b9da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9da8:
    // 0x1b9da8: 0x8ce20258  lw          $v0, 0x258($a3)
    ctx->pc = 0x1b9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 600)));
label_1b9dac:
    // 0x1b9dac: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b9dacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b9db0:
    // 0x1b9db0: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b9db4:
    // 0x1b9db4: 0x60f809  jalr        $v1
label_1b9db8:
    if (ctx->pc == 0x1B9DB8u) {
        ctx->pc = 0x1B9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DB4u;
        // 0x1b9db8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DBCu;
        goto label_1b9dbc;
    }
    ctx->pc = 0x1B9DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9DBCu);
        ctx->pc = 0x1B9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DB4u;
        // 0x1b9db8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9DB4u, 0x1B9DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9DBCu;
label_1b9dbc:
    // 0x1b9dbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b9dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9dc0:
    // 0x1b9dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9dc4:
    // 0x1b9dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9dc8:
    // 0x1b9dc8: 0x3e00008  jr          $ra
label_1b9dcc:
    if (ctx->pc == 0x1B9DCCu) {
        ctx->pc = 0x1B9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DC8u;
        // 0x1b9dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DD0u;
        goto label_fallthrough_0x1b9dc8;
    }
    ctx->pc = 0x1B9DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DC8u;
        // 0x1b9dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b9dc8:
    ctx->pc = 0x1B9DD0u;
}
