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

// Function: sub_001619A8
// Address: 0x1619a8 - 0x161a80
void sub_001619A8_0x1619a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001619A8_0x1619a8");
#endif

    switch (ctx->pc) {
        case 0x161a20u: goto label_161a20;
        case 0x161a38u: goto label_161a38;
        case 0x161a50u: goto label_161a50;
        case 0x161a58u: goto label_161a58;
        case 0x161a64u: goto label_161a64;
        default: break;
    }

    ctx->pc = 0x1619a8u;

    // 0x1619a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1619a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1619ac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1619acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1619b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1619b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1619b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1619b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1619b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1619b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1619bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1619bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1619c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1619c4: 0x24423640  addiu       $v0, $v0, 0x3640
    ctx->pc = 0x1619c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13888));
    // 0x1619c8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1619c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1619cc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1619ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1619d0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1619d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1619d4: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1619d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1619d8: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x1619d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x1619dc: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x1619dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1619e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1619e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619e4: 0xa2000011  sb          $zero, 0x11($s0)
    ctx->pc = 0x1619e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x1619e8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1619e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1619ec: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x1619ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1619f0: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x1619f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1619f4: 0xa2000017  sb          $zero, 0x17($s0)
    ctx->pc = 0x1619f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x1619f8: 0xa2000016  sb          $zero, 0x16($s0)
    ctx->pc = 0x1619f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x1619fc: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x1619fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x161a00: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x161a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x161a04: 0xa200001b  sb          $zero, 0x1B($s0)
    ctx->pc = 0x161a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x161a08: 0xa200001a  sb          $zero, 0x1A($s0)
    ctx->pc = 0x161a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x161a0c: 0xa2000019  sb          $zero, 0x19($s0)
    ctx->pc = 0x161a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x161a10: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x161a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x161a14: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x161a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x161a18: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x161A18u;
    SET_GPR_U32(ctx, 31, 0x161A20u);
    ctx->pc = 0x161A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161A18u;
    // 0x161a1c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x161A18u, 0x161A20u)) {
        return;
    }
    ctx->pc = 0x161A20u;
label_161a20:
    // 0x161a20: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x161a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x161a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a28: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x161a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x161a2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a30: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x161A30u;
    SET_GPR_U32(ctx, 31, 0x161A38u);
    ctx->pc = 0x161A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161A30u;
    // 0x161a34: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x161A30u, 0x161A38u)) {
        return;
    }
    ctx->pc = 0x161A38u;
label_161a38:
    // 0x161a38: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x161a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x161a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a44: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x161a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x161a48: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x161A48u;
    SET_GPR_U32(ctx, 31, 0x161A50u);
    ctx->pc = 0x161A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161A48u;
    // 0x161a4c: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x161A48u, 0x161A50u)) {
        return;
    }
    ctx->pc = 0x161A50u;
label_161a50:
    // 0x161a50: 0xc089654  jal         func_225950
    ctx->pc = 0x161A50u;
    SET_GPR_U32(ctx, 31, 0x161A58u);
    ctx->pc = 0x225950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225950u, 0x161A50u, 0x161A58u)) {
        return;
    }
    ctx->pc = 0x161A58u;
label_161a58:
    // 0x161a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a5c: 0xc089642  jal         func_225908
    ctx->pc = 0x161A5Cu;
    SET_GPR_U32(ctx, 31, 0x161A64u);
    ctx->pc = 0x161A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161A5Cu;
    // 0x161a60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225908u, 0x161A5Cu, 0x161A64u)) {
        return;
    }
    ctx->pc = 0x161A64u;
label_161a64:
    // 0x161a64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161a6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x161a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161a74: 0x3e00008  jr          $ra
    ctx->pc = 0x161A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A74u;
        // 0x161a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161A7Cu;
    // 0x161a7c: 0x0  nop
    ctx->pc = 0x161a7cu;
    // NOP
    ctx->pc = 0x161a80u;
}
