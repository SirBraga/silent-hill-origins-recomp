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

// Function: sub_002551E0
// Address: 0x2551e0 - 0x255260
void sub_002551E0_0x2551e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002551E0_0x2551e0");
#endif

    switch (ctx->pc) {
        case 0x2551e0u: goto label_2551e0;
        case 0x2551e4u: goto label_2551e4;
        case 0x2551e8u: goto label_2551e8;
        case 0x2551ecu: goto label_2551ec;
        case 0x2551f0u: goto label_2551f0;
        case 0x2551f4u: goto label_2551f4;
        case 0x2551f8u: goto label_2551f8;
        case 0x2551fcu: goto label_2551fc;
        case 0x255200u: goto label_255200;
        case 0x255204u: goto label_255204;
        case 0x255208u: goto label_255208;
        case 0x25520cu: goto label_25520c;
        case 0x255210u: goto label_255210;
        case 0x255214u: goto label_255214;
        case 0x255218u: goto label_255218;
        case 0x25521cu: goto label_25521c;
        case 0x255220u: goto label_255220;
        case 0x255224u: goto label_255224;
        case 0x255228u: goto label_255228;
        case 0x25522cu: goto label_25522c;
        case 0x255230u: goto label_255230;
        case 0x255234u: goto label_255234;
        case 0x255238u: goto label_255238;
        case 0x25523cu: goto label_25523c;
        case 0x255240u: goto label_255240;
        case 0x255244u: goto label_255244;
        case 0x255248u: goto label_255248;
        case 0x25524cu: goto label_25524c;
        case 0x255250u: goto label_255250;
        case 0x255254u: goto label_255254;
        case 0x255258u: goto label_255258;
        case 0x25525cu: goto label_25525c;
        default: break;
    }

    ctx->pc = 0x2551e0u;

label_2551e0:
    // 0x2551e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2551e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2551e4:
    // 0x2551e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2551e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2551e8:
    // 0x2551e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2551e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2551ec:
    // 0x2551ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2551ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2551f0:
    // 0x2551f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2551f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2551f4:
    // 0x2551f4: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x2551f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2551f8:
    // 0x2551f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2551f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2551fc:
    // 0x2551fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2551fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_255200:
    // 0x255200: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x255200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_255204:
    // 0x255204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_255208:
    // 0x255208: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x255208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_25520c:
    // 0x25520c: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_255210:
    if (ctx->pc == 0x255210u) {
        ctx->pc = 0x255210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25520Cu;
        // 0x255210: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255214u;
        goto label_255214;
    }
    ctx->pc = 0x25520Cu;
    {
        const bool branch_taken_0x25520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x255210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25520Cu;
        // 0x255210: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25520c) {
            ctx->pc = 0x25523Cu;
            goto label_25523c;
        }
    }
    ctx->pc = 0x255214u;
label_255214:
    // 0x255214: 0x8f8485b8  lw          $a0, -0x7A48($gp)
    ctx->pc = 0x255214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935992)));
label_255218:
    // 0x255218: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x255218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25521c:
    // 0x25521c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x25521cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255220:
    // 0x255220: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x255220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_255224:
    // 0x255224: 0x280f809  jalr        $s4
label_255228:
    if (ctx->pc == 0x255228u) {
        ctx->pc = 0x255228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255224u;
        // 0x255228: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25522Cu;
        goto label_25522c;
    }
    ctx->pc = 0x255224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x25522Cu);
        ctx->pc = 0x255228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255224u;
        // 0x255228: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255224u, 0x25522Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25522Cu;
label_25522c:
    // 0x25522c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_255230:
    if (ctx->pc == 0x255230u) {
        ctx->pc = 0x255230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25522Cu;
        // 0x255230: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255234u;
        goto label_255234;
    }
    ctx->pc = 0x25522Cu;
    {
        const bool branch_taken_0x25522c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25522Cu;
        // 0x255230: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25522c) {
            ctx->pc = 0x25523Cu;
            goto label_25523c;
        }
    }
    ctx->pc = 0x255234u;
label_255234:
    // 0x255234: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
label_255238:
    if (ctx->pc == 0x255238u) {
        ctx->pc = 0x255238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255234u;
        // 0x255238: 0x8f8485b8  lw          $a0, -0x7A48($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25523Cu;
        goto label_25523c;
    }
    ctx->pc = 0x255234u;
    {
        const bool branch_taken_0x255234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x255234) {
            ctx->pc = 0x255238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255234u;
            // 0x255238: 0x8f8485b8  lw          $a0, -0x7A48($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255218;
        }
    }
    ctx->pc = 0x25523Cu;
label_25523c:
    // 0x25523c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25523cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255240:
    // 0x255240: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x255240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_255244:
    // 0x255244: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x255244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_255248:
    // 0x255248: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x255248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25524c:
    // 0x25524c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25524cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_255250:
    // 0x255250: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x255250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_255254:
    // 0x255254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_255258:
    // 0x255258: 0x3e00008  jr          $ra
label_25525c:
    if (ctx->pc == 0x25525Cu) {
        ctx->pc = 0x25525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255258u;
        // 0x25525c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255260u;
        goto label_fallthrough_0x255258;
    }
    ctx->pc = 0x255258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255258u;
        // 0x25525c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x255258:
    ctx->pc = 0x255260u;
}
