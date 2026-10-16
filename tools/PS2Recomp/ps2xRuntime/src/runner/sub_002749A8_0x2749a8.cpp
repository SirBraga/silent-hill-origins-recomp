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

// Function: sub_002749A8
// Address: 0x2749a8 - 0x274a70
void sub_002749A8_0x2749a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002749A8_0x2749a8");
#endif

    switch (ctx->pc) {
        case 0x2749a8u: goto label_2749a8;
        case 0x2749acu: goto label_2749ac;
        case 0x2749b0u: goto label_2749b0;
        case 0x2749b4u: goto label_2749b4;
        case 0x2749b8u: goto label_2749b8;
        case 0x2749bcu: goto label_2749bc;
        case 0x2749c0u: goto label_2749c0;
        case 0x2749c4u: goto label_2749c4;
        case 0x2749c8u: goto label_2749c8;
        case 0x2749ccu: goto label_2749cc;
        case 0x2749d0u: goto label_2749d0;
        case 0x2749d4u: goto label_2749d4;
        case 0x2749d8u: goto label_2749d8;
        case 0x2749dcu: goto label_2749dc;
        case 0x2749e0u: goto label_2749e0;
        case 0x2749e4u: goto label_2749e4;
        case 0x2749e8u: goto label_2749e8;
        case 0x2749ecu: goto label_2749ec;
        case 0x2749f0u: goto label_2749f0;
        case 0x2749f4u: goto label_2749f4;
        case 0x2749f8u: goto label_2749f8;
        case 0x2749fcu: goto label_2749fc;
        case 0x274a00u: goto label_274a00;
        case 0x274a04u: goto label_274a04;
        case 0x274a08u: goto label_274a08;
        case 0x274a0cu: goto label_274a0c;
        case 0x274a10u: goto label_274a10;
        case 0x274a14u: goto label_274a14;
        case 0x274a18u: goto label_274a18;
        case 0x274a1cu: goto label_274a1c;
        case 0x274a20u: goto label_274a20;
        case 0x274a24u: goto label_274a24;
        case 0x274a28u: goto label_274a28;
        case 0x274a2cu: goto label_274a2c;
        case 0x274a30u: goto label_274a30;
        case 0x274a34u: goto label_274a34;
        case 0x274a38u: goto label_274a38;
        case 0x274a3cu: goto label_274a3c;
        case 0x274a40u: goto label_274a40;
        case 0x274a44u: goto label_274a44;
        case 0x274a48u: goto label_274a48;
        case 0x274a4cu: goto label_274a4c;
        case 0x274a50u: goto label_274a50;
        case 0x274a54u: goto label_274a54;
        case 0x274a58u: goto label_274a58;
        case 0x274a5cu: goto label_274a5c;
        case 0x274a60u: goto label_274a60;
        case 0x274a64u: goto label_274a64;
        case 0x274a68u: goto label_274a68;
        case 0x274a6cu: goto label_274a6c;
        default: break;
    }

    ctx->pc = 0x2749a8u;

label_2749a8:
    // 0x2749a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2749a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2749ac:
    // 0x2749ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2749acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2749b0:
    // 0x2749b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2749b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2749b4:
    // 0x2749b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2749b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2749b8:
    // 0x2749b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2749b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2749bc:
    // 0x2749bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2749bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2749c0:
    // 0x2749c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2749c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2749c4:
    // 0x2749c4: 0x8f848f8c  lw          $a0, -0x7074($gp)
    ctx->pc = 0x2749c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
label_2749c8:
    // 0x2749c8: 0xc0c84d8  jal         func_321360
label_2749cc:
    if (ctx->pc == 0x2749CCu) {
        ctx->pc = 0x2749CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749C8u;
        // 0x2749cc: 0x8e500058  lw          $s0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2749D0u;
        goto label_2749d0;
    }
    ctx->pc = 0x2749C8u;
    SET_GPR_U32(ctx, 31, 0x2749D0u);
    ctx->pc = 0x2749CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2749C8u;
    // 0x2749cc: 0x8e500058  lw          $s0, 0x58($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2749C8u, 0x2749D0u)) {
        return;
    }
    ctx->pc = 0x2749D0u;
label_2749d0:
    // 0x2749d0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2749d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_2749d4:
    // 0x2749d4: 0x3c070070  lui         $a3, 0x70
    ctx->pc = 0x2749d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)112 << 16));
label_2749d8:
    // 0x2749d8: 0x3c090070  lui         $t1, 0x70
    ctx->pc = 0x2749d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)112 << 16));
label_2749dc:
    // 0x2749dc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2749dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2749e0:
    // 0x2749e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2749e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2749e4:
    // 0x2749e4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2749e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2749e8:
    // 0x2749e8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x2749e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2749ec:
    // 0x2749ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2749ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2749f0:
    // 0x2749f0: 0x24e75480  addiu       $a3, $a3, 0x5480
    ctx->pc = 0x2749f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21632));
label_2749f4:
    // 0x2749f4: 0x25295600  addiu       $t1, $t1, 0x5600
    ctx->pc = 0x2749f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22016));
label_2749f8:
    // 0x2749f8: 0x24845448  addiu       $a0, $a0, 0x5448
    ctx->pc = 0x2749f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21576));
label_2749fc:
    // 0x2749fc: 0xc0c92ee  jal         func_324BB8
label_274a00:
    if (ctx->pc == 0x274A00u) {
        ctx->pc = 0x274A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749FCu;
        // 0x274a00: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A04u;
        goto label_274a04;
    }
    ctx->pc = 0x2749FCu;
    SET_GPR_U32(ctx, 31, 0x274A04u);
    ctx->pc = 0x274A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2749FCu;
    // 0x274a00: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2749FCu, 0x274A04u)) {
        return;
    }
    ctx->pc = 0x274A04u;
label_274a04:
    // 0x274a04: 0xc0c84d0  jal         func_321340
label_274a08:
    if (ctx->pc == 0x274A08u) {
        ctx->pc = 0x274A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A04u;
        // 0x274a08: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A0Cu;
        goto label_274a0c;
    }
    ctx->pc = 0x274A04u;
    SET_GPR_U32(ctx, 31, 0x274A0Cu);
    ctx->pc = 0x274A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A04u;
    // 0x274a08: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x274A04u, 0x274A0Cu)) {
        return;
    }
    ctx->pc = 0x274A0Cu;
label_274a0c:
    // 0x274a0c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x274a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_274a10:
    // 0x274a10: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_274a14:
    if (ctx->pc == 0x274A14u) {
        ctx->pc = 0x274A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A10u;
        // 0x274a14: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A18u;
        goto label_274a18;
    }
    ctx->pc = 0x274A10u;
    {
        const bool branch_taken_0x274a10 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x274A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A10u;
        // 0x274a14: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a10) {
            ctx->pc = 0x274A3Cu;
            goto label_274a3c;
        }
    }
    ctx->pc = 0x274A18u;
label_274a18:
    // 0x274a18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x274a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_274a1c:
    // 0x274a1c: 0x0  nop
    ctx->pc = 0x274a1cu;
    // NOP
label_274a20:
    // 0x274a20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x274a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_274a24:
    // 0x274a24: 0xc0c84cc  jal         func_321330
label_274a28:
    if (ctx->pc == 0x274A28u) {
        ctx->pc = 0x274A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A24u;
        // 0x274a28: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A2Cu;
        goto label_274a2c;
    }
    ctx->pc = 0x274A24u;
    SET_GPR_U32(ctx, 31, 0x274A2Cu);
    ctx->pc = 0x274A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A24u;
    // 0x274a28: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x274A24u, 0x274A2Cu)) {
        return;
    }
    ctx->pc = 0x274A2Cu;
label_274a2c:
    // 0x274a2c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x274a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_274a30:
    // 0x274a30: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x274a30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_274a34:
    // 0x274a34: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_274a38:
    if (ctx->pc == 0x274A38u) {
        ctx->pc = 0x274A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A34u;
        // 0x274a38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A3Cu;
        goto label_274a3c;
    }
    ctx->pc = 0x274A34u;
    {
        const bool branch_taken_0x274a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274a34) {
            ctx->pc = 0x274A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274A34u;
            // 0x274a38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274a20;
        }
    }
    ctx->pc = 0x274A3Cu;
label_274a3c:
    // 0x274a3c: 0xc0c84cc  jal         func_321330
label_274a40:
    if (ctx->pc == 0x274A40u) {
        ctx->pc = 0x274A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A3Cu;
        // 0x274a40: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A44u;
        goto label_274a44;
    }
    ctx->pc = 0x274A3Cu;
    SET_GPR_U32(ctx, 31, 0x274A44u);
    ctx->pc = 0x274A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A3Cu;
    // 0x274a40: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x274A3Cu, 0x274A44u)) {
        return;
    }
    ctx->pc = 0x274A44u;
label_274a44:
    // 0x274a44: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x274a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_274a48:
    // 0x274a48: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x274a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_274a4c:
    // 0x274a4c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x274a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_274a50:
    // 0x274a50: 0x40f809  jalr        $v0
label_274a54:
    if (ctx->pc == 0x274A54u) {
        ctx->pc = 0x274A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A50u;
        // 0x274a54: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A58u;
        goto label_274a58;
    }
    ctx->pc = 0x274A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274A58u);
        ctx->pc = 0x274A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A50u;
        // 0x274a54: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274A50u, 0x274A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274A58u;
label_274a58:
    // 0x274a58: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x274a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_274a5c:
    // 0x274a5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x274a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_274a60:
    // 0x274a60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x274a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_274a64:
    // 0x274a64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_274a68:
    // 0x274a68: 0x3e00008  jr          $ra
label_274a6c:
    if (ctx->pc == 0x274A6Cu) {
        ctx->pc = 0x274A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A68u;
        // 0x274a6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A70u;
        goto label_fallthrough_0x274a68;
    }
    ctx->pc = 0x274A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A68u;
        // 0x274a6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x274a68:
    ctx->pc = 0x274A70u;
}
