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

// Function: sub_002262B0
// Address: 0x2262b0 - 0x226348
void sub_002262B0_0x2262b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002262B0_0x2262b0");
#endif

    switch (ctx->pc) {
        case 0x2262d0u: goto label_2262d0;
        case 0x2262e4u: goto label_2262e4;
        case 0x226320u: goto label_226320;
        default: break;
    }

    ctx->pc = 0x2262b0u;

    // 0x2262b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2262b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2262b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2262b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2262b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2262b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2262bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2262c0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2262c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x2262c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2262c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262c8: 0xc09397e  jal         func_24E5F8
    ctx->pc = 0x2262C8u;
    SET_GPR_U32(ctx, 31, 0x2262D0u);
    ctx->pc = 0x2262CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2262C8u;
    // 0x2262cc: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x2262C8u, 0x2262D0u)) {
        return;
    }
    ctx->pc = 0x2262D0u;
label_2262d0:
    // 0x2262d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2262d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2262d4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2262D4u;
    {
        const bool branch_taken_0x2262d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2262d4) {
            ctx->pc = 0x2262D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2262D4u;
            // 0x2262d8: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2262E8u;
            goto label_2262e8;
        }
    }
    ctx->pc = 0x2262DCu;
    // 0x2262dc: 0xc08999a  jal         func_226668
    ctx->pc = 0x2262DCu;
    SET_GPR_U32(ctx, 31, 0x2262E4u);
    ctx->pc = 0x2262E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2262DCu;
    // 0x2262e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226668u, 0x2262DCu, 0x2262E4u)) {
        return;
    }
    ctx->pc = 0x2262E4u;
label_2262e4:
    // 0x2262e4: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2262e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_2262e8:
    // 0x2262e8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2262e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2262ec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2262ECu;
    {
        const bool branch_taken_0x2262ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2262ec) {
            ctx->pc = 0x2262F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2262ECu;
            // 0x2262f0: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226310u;
            goto label_226310;
        }
    }
    ctx->pc = 0x2262F4u;
    // 0x2262f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2262f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2262f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2262f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2262fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2262fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x226300: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x226300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x226304: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x226304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x226308: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x226308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x22630c: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x22630cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_226310:
    // 0x226310: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x226310u;
    {
        const bool branch_taken_0x226310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226310u;
        // 0x226314: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226310) {
            ctx->pc = 0x22633Cu;
            goto label_22633c;
        }
    }
    ctx->pc = 0x226318u;
    // 0x226318: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x226318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x22631c: 0x0  nop
    ctx->pc = 0x22631cu;
    // NOP
label_226320:
    // 0x226320: 0x8c84009c  lw          $a0, 0x9C($a0)
    ctx->pc = 0x226320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x226324: 0x0  nop
    ctx->pc = 0x226324u;
    // NOP
    // 0x226328: 0x0  nop
    ctx->pc = 0x226328u;
    // NOP
    // 0x22632c: 0x0  nop
    ctx->pc = 0x22632cu;
    // NOP
    // 0x226330: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x226330u;
    {
        const bool branch_taken_0x226330 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x226330) {
            ctx->pc = 0x226334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226330u;
            // 0x226334: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226320;
        }
    }
    ctx->pc = 0x226338u;
    // 0x226338: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22633c:
    // 0x22633c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22633cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226340: 0x3e00008  jr          $ra
    ctx->pc = 0x226340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226340u;
        // 0x226344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226348u;
}
