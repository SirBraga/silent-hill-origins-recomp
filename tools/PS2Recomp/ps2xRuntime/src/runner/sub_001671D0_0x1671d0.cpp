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

// Function: sub_001671D0
// Address: 0x1671d0 - 0x167260
void sub_001671D0_0x1671d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001671D0_0x1671d0");
#endif

    switch (ctx->pc) {
        case 0x167228u: goto label_167228;
        case 0x167248u: goto label_167248;
        default: break;
    }

    ctx->pc = 0x1671d0u;

    // 0x1671d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1671d4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1671d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1671d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1671d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1671dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1671dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1671e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1671e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671e4: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x1671e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1671e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1671e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1671ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1671ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1671f0: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x1671f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1671f4: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x1671f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1671f8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1671f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1671fc: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x1671fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x167200: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x167200u;
    {
        const bool branch_taken_0x167200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x167200) {
            ctx->pc = 0x167204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167200u;
            // 0x167204: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167208u;
            goto label_167208;
        }
    }
    ctx->pc = 0x167208u;
label_167208:
    // 0x167208: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x167208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x16720c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16720Cu;
    {
        const bool branch_taken_0x16720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16720c) {
            ctx->pc = 0x167210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16720Cu;
            // 0x167210: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167220u;
            goto label_167220;
        }
    }
    ctx->pc = 0x167214u;
    // 0x167214: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x167214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x167218: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x167218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x16721c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x16721cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_167220:
    // 0x167220: 0xc09792c  jal         func_25E4B0
    ctx->pc = 0x167220u;
    SET_GPR_U32(ctx, 31, 0x167228u);
    ctx->pc = 0x167224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167220u;
    // 0x167224: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E4B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E4B0u, 0x167220u, 0x167228u)) {
        return;
    }
    ctx->pc = 0x167228u;
label_167228:
    // 0x167228: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x167228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x16722c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16722Cu;
    {
        const bool branch_taken_0x16722c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16722c) {
            ctx->pc = 0x167230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16722Cu;
            // 0x167230: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16724Cu;
            goto label_16724c;
        }
    }
    ctx->pc = 0x167234u;
    // 0x167234: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x167234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x167238: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x167238u;
    {
        const bool branch_taken_0x167238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x167238) {
            ctx->pc = 0x16723Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167238u;
            // 0x16723c: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167240u;
            goto label_167240;
        }
    }
    ctx->pc = 0x167240u;
label_167240:
    // 0x167240: 0xc09795e  jal         func_25E578
    ctx->pc = 0x167240u;
    SET_GPR_U32(ctx, 31, 0x167248u);
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x167240u, 0x167248u)) {
        return;
    }
    ctx->pc = 0x167248u;
label_167248:
    // 0x167248: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x167248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16724c:
    // 0x16724c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16724cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167254: 0x3e00008  jr          $ra
    ctx->pc = 0x167254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167254u;
        // 0x167258: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16725Cu;
    // 0x16725c: 0x0  nop
    ctx->pc = 0x16725cu;
    // NOP
    ctx->pc = 0x167260u;
}
