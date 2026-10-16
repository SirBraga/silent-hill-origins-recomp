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

// Function: sub_001615B8
// Address: 0x1615b8 - 0x161660
void sub_001615B8_0x1615b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001615B8_0x1615b8");
#endif

    switch (ctx->pc) {
        case 0x1615d4u: goto label_1615d4;
        default: break;
    }

    ctx->pc = 0x1615b8u;

    // 0x1615b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1615b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1615bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1615bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1615c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1615c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1615c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1615c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1615c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1615cc: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x1615CCu;
    SET_GPR_U32(ctx, 31, 0x1615D4u);
    ctx->pc = 0x1615D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615CCu;
    // 0x1615d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1615CCu, 0x1615D4u)) {
        return;
    }
    ctx->pc = 0x1615D4u;
label_1615d4:
    // 0x1615d4: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1615d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1615d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1615d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1615dc: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1615DCu;
    {
        const bool branch_taken_0x1615dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1615dc) {
            ctx->pc = 0x1615E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1615DCu;
            // 0x1615e0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161600u;
            goto label_161600;
        }
    }
    ctx->pc = 0x1615E4u;
    // 0x1615e4: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x1615e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1615e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1615E8u;
    {
        const bool branch_taken_0x1615e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1615e8) {
            ctx->pc = 0x1615ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1615E8u;
            // 0x1615ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161600u;
            goto label_161600;
        }
    }
    ctx->pc = 0x1615F0u;
    // 0x1615f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1615f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1615f4: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1615f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1615f8: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1615f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1615fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1615fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161600:
    // 0x161600: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x161600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x161604: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x161604u;
    {
        const bool branch_taken_0x161604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161604) {
            ctx->pc = 0x161608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161604u;
            // 0x161608: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16164Cu;
            goto label_16164c;
        }
    }
    ctx->pc = 0x16160Cu;
    // 0x16160c: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x16160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x161610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161614: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x161614u;
    {
        const bool branch_taken_0x161614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x161618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161614u;
        // 0x161618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161614) {
            ctx->pc = 0x161638u;
            goto label_161638;
        }
    }
    ctx->pc = 0x16161Cu;
    // 0x16161c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16161cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x161620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161624: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161628: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x161628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x16162c: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x16162cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x161630: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x161630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x161634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161638:
    // 0x161638: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161638u;
    {
        const bool branch_taken_0x161638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161638) {
            ctx->pc = 0x16163Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161638u;
            // 0x16163c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16164Cu;
            goto label_16164c;
        }
    }
    ctx->pc = 0x161640u;
    // 0x161640: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161644: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x161644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x161648: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x161648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16164c:
    // 0x16164c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16164cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161654: 0x3e00008  jr          $ra
    ctx->pc = 0x161654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161654u;
        // 0x161658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16165Cu;
    // 0x16165c: 0x0  nop
    ctx->pc = 0x16165cu;
    // NOP
    ctx->pc = 0x161660u;
}
