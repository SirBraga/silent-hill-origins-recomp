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

// Function: sub_00182990
// Address: 0x182990 - 0x182a68
void sub_00182990_0x182990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182990_0x182990");
#endif

    switch (ctx->pc) {
        case 0x1829c8u: goto label_1829c8;
        case 0x182a10u: goto label_182a10;
        case 0x182a2cu: goto label_182a2c;
        case 0x182a3cu: goto label_182a3c;
        case 0x182a48u: goto label_182a48;
        default: break;
    }

    ctx->pc = 0x182990u;

    // 0x182990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182994: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x182994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x182998: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x182998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18299c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x18299cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1829a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1829a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1829a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1829a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1829a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1829acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829b0: 0x2484faf8  addiu       $a0, $a0, -0x508
    ctx->pc = 0x1829b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966008));
    // 0x1829b4: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x1829b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1829b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1829b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1829bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1829bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1829c0: 0xc060586  jal         func_181618
    ctx->pc = 0x1829C0u;
    SET_GPR_U32(ctx, 31, 0x1829C8u);
    ctx->pc = 0x1829C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1829C0u;
    // 0x1829c4: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181618u, 0x1829C0u, 0x1829C8u)) {
        return;
    }
    ctx->pc = 0x1829C8u;
label_1829c8:
    // 0x1829c8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1829c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1829cc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1829ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1829d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1829d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1829d4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1829d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1829d8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1829d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1829dc: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x1829dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1829e0: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1829e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1829e4: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x1829e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x1829e8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1829e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1829ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1829ECu;
    {
        const bool branch_taken_0x1829ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1829F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829ECu;
        // 0x1829f0: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829ec) {
            ctx->pc = 0x1829FCu;
            goto label_1829fc;
        }
    }
    ctx->pc = 0x1829F4u;
    // 0x1829f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1829F4u;
    {
        const bool branch_taken_0x1829f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1829F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829F4u;
        // 0x1829f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829f4) {
            ctx->pc = 0x182A4Cu;
            goto label_182a4c;
        }
    }
    ctx->pc = 0x1829FCu;
label_1829fc:
    // 0x1829fc: 0xc78023  subu        $s0, $a2, $a3
    ctx->pc = 0x1829fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x182a00: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x182A00u;
    {
        const bool branch_taken_0x182a00 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x182A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A00u;
        // 0x182a04: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a00) {
            ctx->pc = 0x182A34u;
            goto label_182a34;
        }
    }
    ctx->pc = 0x182A08u;
    // 0x182a08: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x182A08u;
    SET_GPR_U32(ctx, 31, 0x182A10u);
    ctx->pc = 0x182A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A08u;
    // 0x182a0c: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x182A08u, 0x182A10u)) {
        return;
    }
    ctx->pc = 0x182A10u;
label_182a10:
    // 0x182a10: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x182a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x182a14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x182a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x182a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x182a1c: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x182a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x182a20: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x182a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182a24: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x182A24u;
    SET_GPR_U32(ctx, 31, 0x182A2Cu);
    ctx->pc = 0x182A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A24u;
    // 0x182a28: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x182A24u, 0x182A2Cu)) {
        return;
    }
    ctx->pc = 0x182A2Cu;
label_182a2c:
    // 0x182a2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182A2Cu;
    {
        const bool branch_taken_0x182a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A2Cu;
        // 0x182a30: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a2c) {
            ctx->pc = 0x182A40u;
            goto label_182a40;
        }
    }
    ctx->pc = 0x182A34u;
label_182a34:
    // 0x182a34: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x182A34u;
    SET_GPR_U32(ctx, 31, 0x182A3Cu);
    ctx->pc = 0x182A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A34u;
    // 0x182a38: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x182A34u, 0x182A3Cu)) {
        return;
    }
    ctx->pc = 0x182A3Cu;
label_182a3c:
    // 0x182a3c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x182a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_182a40:
    // 0x182a40: 0xc0605b2  jal         func_1816C8
    ctx->pc = 0x182A40u;
    SET_GPR_U32(ctx, 31, 0x182A48u);
    ctx->pc = 0x182A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A40u;
    // 0x182a44: 0x2644faf8  addiu       $a0, $s2, -0x508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1816C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1816C8u, 0x182A40u, 0x182A48u)) {
        return;
    }
    ctx->pc = 0x182A48u;
label_182a48:
    // 0x182a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182a4c:
    // 0x182a4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x182a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182a50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x182a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182a54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182a54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x182A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A5Cu;
        // 0x182a60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182A64u;
    // 0x182a64: 0x0  nop
    ctx->pc = 0x182a64u;
    // NOP
    ctx->pc = 0x182a68u;
}
