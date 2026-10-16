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

// Function: sub_001969E8
// Address: 0x1969e8 - 0x196a80
void sub_001969E8_0x1969e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001969E8_0x1969e8");
#endif

    switch (ctx->pc) {
        case 0x1969e8u: goto label_1969e8;
        case 0x1969ecu: goto label_1969ec;
        case 0x1969f0u: goto label_1969f0;
        case 0x1969f4u: goto label_1969f4;
        case 0x1969f8u: goto label_1969f8;
        case 0x1969fcu: goto label_1969fc;
        case 0x196a00u: goto label_196a00;
        case 0x196a04u: goto label_196a04;
        case 0x196a08u: goto label_196a08;
        case 0x196a0cu: goto label_196a0c;
        case 0x196a10u: goto label_196a10;
        case 0x196a14u: goto label_196a14;
        case 0x196a18u: goto label_196a18;
        case 0x196a1cu: goto label_196a1c;
        case 0x196a20u: goto label_196a20;
        case 0x196a24u: goto label_196a24;
        case 0x196a28u: goto label_196a28;
        case 0x196a2cu: goto label_196a2c;
        case 0x196a30u: goto label_196a30;
        case 0x196a34u: goto label_196a34;
        case 0x196a38u: goto label_196a38;
        case 0x196a3cu: goto label_196a3c;
        case 0x196a40u: goto label_196a40;
        case 0x196a44u: goto label_196a44;
        case 0x196a48u: goto label_196a48;
        case 0x196a4cu: goto label_196a4c;
        case 0x196a50u: goto label_196a50;
        case 0x196a54u: goto label_196a54;
        case 0x196a58u: goto label_196a58;
        case 0x196a5cu: goto label_196a5c;
        case 0x196a60u: goto label_196a60;
        case 0x196a64u: goto label_196a64;
        case 0x196a68u: goto label_196a68;
        case 0x196a6cu: goto label_196a6c;
        case 0x196a70u: goto label_196a70;
        case 0x196a74u: goto label_196a74;
        case 0x196a78u: goto label_196a78;
        case 0x196a7cu: goto label_196a7c;
        default: break;
    }

    ctx->pc = 0x1969e8u;

label_1969e8:
    // 0x1969e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1969e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1969ec:
    // 0x1969ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1969ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1969f0:
    // 0x1969f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1969f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1969f4:
    // 0x1969f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1969f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1969f8:
    // 0x1969f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1969f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1969fc:
    // 0x1969fc: 0xc07f8aa  jal         func_1FE2A8
label_196a00:
    if (ctx->pc == 0x196A00u) {
        ctx->pc = 0x196A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969FCu;
        // 0x196a00: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A04u;
        goto label_196a04;
    }
    ctx->pc = 0x1969FCu;
    SET_GPR_U32(ctx, 31, 0x196A04u);
    ctx->pc = 0x196A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1969FCu;
    // 0x196a00: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE2A8u, 0x1969FCu, 0x196A04u)) {
        return;
    }
    ctx->pc = 0x196A04u;
label_196a04:
    // 0x196a04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196a08:
    // 0x196a08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_196a0c:
    // 0x196a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196a10:
    // 0x196a10: 0xc08063c  jal         func_2018F0
label_196a14:
    if (ctx->pc == 0x196A14u) {
        ctx->pc = 0x196A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A10u;
        // 0x196a14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A18u;
        goto label_196a18;
    }
    ctx->pc = 0x196A10u;
    SET_GPR_U32(ctx, 31, 0x196A18u);
    ctx->pc = 0x196A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A10u;
    // 0x196a14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x196A10u, 0x196A18u)) {
        return;
    }
    ctx->pc = 0x196A18u;
label_196a18:
    // 0x196a18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196a1c:
    // 0x196a1c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x196a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_196a20:
    // 0x196a20: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x196a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_196a24:
    // 0x196a24: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x196a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_196a28:
    // 0x196a28: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x196a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_196a2c:
    // 0x196a2c: 0x40f809  jalr        $v0
label_196a30:
    if (ctx->pc == 0x196A30u) {
        ctx->pc = 0x196A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A2Cu;
        // 0x196a30: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A34u;
        goto label_196a34;
    }
    ctx->pc = 0x196A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A34u);
        ctx->pc = 0x196A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A2Cu;
        // 0x196a30: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A2Cu, 0x196A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196A34u;
label_196a34:
    // 0x196a34: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_196a38:
    if (ctx->pc == 0x196A38u) {
        ctx->pc = 0x196A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A34u;
        // 0x196a38: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A3Cu;
        goto label_196a3c;
    }
    ctx->pc = 0x196A34u;
    {
        const bool branch_taken_0x196a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196a34) {
            ctx->pc = 0x196A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196A34u;
            // 0x196a38: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196A50u;
            goto label_196a50;
        }
    }
    ctx->pc = 0x196A3Cu;
label_196a3c:
    // 0x196a3c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x196a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_196a40:
    // 0x196a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196a44:
    // 0x196a44: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x196a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_196a48:
    // 0x196a48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x196a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_196a4c:
    // 0x196a4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x196a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_196a50:
    // 0x196a50: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x196a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_196a54:
    // 0x196a54: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x196a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196a58:
    // 0x196a58: 0xc088b4a  jal         func_222D28
label_196a5c:
    if (ctx->pc == 0x196A5Cu) {
        ctx->pc = 0x196A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A58u;
        // 0x196a5c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A60u;
        goto label_196a60;
    }
    ctx->pc = 0x196A58u;
    SET_GPR_U32(ctx, 31, 0x196A60u);
    ctx->pc = 0x196A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A58u;
    // 0x196a5c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222D28u, 0x196A58u, 0x196A60u)) {
        return;
    }
    ctx->pc = 0x196A60u;
label_196a60:
    // 0x196a60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x196a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196a64:
    // 0x196a64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196a68:
    // 0x196a68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196a6c:
    // 0x196a6c: 0x3e00008  jr          $ra
label_196a70:
    if (ctx->pc == 0x196A70u) {
        ctx->pc = 0x196A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A6Cu;
        // 0x196a70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A74u;
        goto label_196a74;
    }
    ctx->pc = 0x196A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A6Cu;
        // 0x196a70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196A74u;
label_196a74:
    // 0x196a74: 0x0  nop
    ctx->pc = 0x196a74u;
    // NOP
label_196a78:
    // 0x196a78: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x196a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_196a7c:
    // 0x196a7c: 0x0  nop
    ctx->pc = 0x196a7cu;
    // NOP
    ctx->pc = 0x196a80u;
}
