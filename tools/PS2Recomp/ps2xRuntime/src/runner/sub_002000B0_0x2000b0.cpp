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

// Function: sub_002000B0
// Address: 0x2000b0 - 0x200148
void sub_002000B0_0x2000b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002000B0_0x2000b0");
#endif

    switch (ctx->pc) {
        case 0x2000e8u: goto label_2000e8;
        default: break;
    }

    ctx->pc = 0x2000b0u;

    // 0x2000b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2000b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2000b4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x2000b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x2000b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2000b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2000bc: 0x24458290  addiu       $a1, $v0, -0x7D70
    ctx->pc = 0x2000bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x2000c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2000c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2000c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2000c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2000c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2000cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2000ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2000d0: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x2000d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2000d4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338298u));
    // 0x2000d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2000D8u;
    {
        const bool branch_taken_0x2000d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2000DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000D8u;
        // 0x2000dc: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000d8) {
            ctx->pc = 0x2000F0u;
            goto label_2000f0;
        }
    }
    ctx->pc = 0x2000E0u;
    // 0x2000e0: 0xc076936  jal         func_1DA4D8
    ctx->pc = 0x2000E0u;
    SET_GPR_U32(ctx, 31, 0x2000E8u);
    ctx->pc = 0x2000E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2000E0u;
    // 0x2000e4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA4D8u, 0x2000E0u, 0x2000E8u)) {
        return;
    }
    ctx->pc = 0x2000E8u;
label_2000e8:
    // 0x2000e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2000E8u;
    {
        const bool branch_taken_0x2000e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2000ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000E8u;
        // 0x2000ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000e8) {
            ctx->pc = 0x2000FCu;
            goto label_2000fc;
        }
    }
    ctx->pc = 0x2000F0u;
label_2000f0:
    // 0x2000f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2000f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2000f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2000f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000f8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2000f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2000fc:
    // 0x2000fc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2000fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x200100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x200100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200104: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x200104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x200108: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x200108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x20010c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20010cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x200110: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x200110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x200114: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x200114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200118: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x200118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20011c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20011cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200120: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x200120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x200124: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x200124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200128: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x200128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
    // 0x20012c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200130: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x200130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200134: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x200134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
    // 0x200138: 0x3e00008  jr          $ra
    ctx->pc = 0x200138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200138u;
        // 0x20013c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200140u;
    // 0x200140: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x200140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x200144: 0x0  nop
    ctx->pc = 0x200144u;
    // NOP
    ctx->pc = 0x200148u;
}
