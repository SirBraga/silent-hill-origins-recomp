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

// Function: sub_00249198
// Address: 0x249198 - 0x249250
void sub_00249198_0x249198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249198_0x249198");
#endif

    switch (ctx->pc) {
        case 0x249198u: goto label_249198;
        case 0x24919cu: goto label_24919c;
        case 0x2491a0u: goto label_2491a0;
        case 0x2491a4u: goto label_2491a4;
        case 0x2491a8u: goto label_2491a8;
        case 0x2491acu: goto label_2491ac;
        case 0x2491b0u: goto label_2491b0;
        case 0x2491b4u: goto label_2491b4;
        case 0x2491b8u: goto label_2491b8;
        case 0x2491bcu: goto label_2491bc;
        case 0x2491c0u: goto label_2491c0;
        case 0x2491c4u: goto label_2491c4;
        case 0x2491c8u: goto label_2491c8;
        case 0x2491ccu: goto label_2491cc;
        case 0x2491d0u: goto label_2491d0;
        case 0x2491d4u: goto label_2491d4;
        case 0x2491d8u: goto label_2491d8;
        case 0x2491dcu: goto label_2491dc;
        case 0x2491e0u: goto label_2491e0;
        case 0x2491e4u: goto label_2491e4;
        case 0x2491e8u: goto label_2491e8;
        case 0x2491ecu: goto label_2491ec;
        case 0x2491f0u: goto label_2491f0;
        case 0x2491f4u: goto label_2491f4;
        case 0x2491f8u: goto label_2491f8;
        case 0x2491fcu: goto label_2491fc;
        case 0x249200u: goto label_249200;
        case 0x249204u: goto label_249204;
        case 0x249208u: goto label_249208;
        case 0x24920cu: goto label_24920c;
        case 0x249210u: goto label_249210;
        case 0x249214u: goto label_249214;
        case 0x249218u: goto label_249218;
        case 0x24921cu: goto label_24921c;
        case 0x249220u: goto label_249220;
        case 0x249224u: goto label_249224;
        case 0x249228u: goto label_249228;
        case 0x24922cu: goto label_24922c;
        case 0x249230u: goto label_249230;
        case 0x249234u: goto label_249234;
        case 0x249238u: goto label_249238;
        case 0x24923cu: goto label_24923c;
        case 0x249240u: goto label_249240;
        case 0x249244u: goto label_249244;
        case 0x249248u: goto label_249248;
        case 0x24924cu: goto label_24924c;
        default: break;
    }

    ctx->pc = 0x249198u;

label_249198:
    // 0x249198: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x249198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24919c:
    // 0x24919c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2491a0:
    // 0x2491a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2491a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2491a4:
    // 0x2491a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2491a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2491a8:
    // 0x2491a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2491a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2491ac:
    // 0x2491ac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2491acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2491b0:
    // 0x2491b0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2491b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2491b4:
    // 0x2491b4: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
label_2491b8:
    if (ctx->pc == 0x2491B8u) {
        ctx->pc = 0x2491B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491B4u;
        // 0x2491b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491BCu;
        goto label_2491bc;
    }
    ctx->pc = 0x2491B4u;
    {
        const bool branch_taken_0x2491b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491B4u;
        // 0x2491b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491b4) {
            ctx->pc = 0x249230u;
            goto label_249230;
        }
    }
    ctx->pc = 0x2491BCu;
label_2491bc:
    // 0x2491bc: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x2491bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2491c0:
    // 0x2491c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2491c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2491c4:
    // 0x2491c4: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x2491c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2491c8:
    // 0x2491c8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_2491cc:
    if (ctx->pc == 0x2491CCu) {
        ctx->pc = 0x2491CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491C8u;
        // 0x2491cc: 0x3c140073  lui         $s4, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491D0u;
        goto label_2491d0;
    }
    ctx->pc = 0x2491C8u;
    {
        const bool branch_taken_0x2491c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491C8u;
        // 0x2491cc: 0x3c140073  lui         $s4, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491c8) {
            ctx->pc = 0x2491ECu;
            goto label_2491ec;
        }
    }
    ctx->pc = 0x2491D0u;
label_2491d0:
    // 0x2491d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2491d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2491d4:
    // 0x2491d4: 0xc0922f8  jal         func_248BE0
label_2491d8:
    if (ctx->pc == 0x2491D8u) {
        ctx->pc = 0x2491D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491D4u;
        // 0x2491d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491DCu;
        goto label_2491dc;
    }
    ctx->pc = 0x2491D4u;
    SET_GPR_U32(ctx, 31, 0x2491DCu);
    ctx->pc = 0x2491D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2491D4u;
    // 0x2491d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248BE0u, 0x2491D4u, 0x2491DCu)) {
        return;
    }
    ctx->pc = 0x2491DCu;
label_2491dc:
    // 0x2491dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2491dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2491e0:
    // 0x2491e0: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2491e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2491e4:
    // 0x2491e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2491e8:
    if (ctx->pc == 0x2491E8u) {
        ctx->pc = 0x2491E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491E4u;
        // 0x2491e8: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491ECu;
        goto label_2491ec;
    }
    ctx->pc = 0x2491E4u;
    {
        const bool branch_taken_0x2491e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2491E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491E4u;
        // 0x2491e8: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491e4) {
            ctx->pc = 0x2491D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2491d0;
        }
    }
    ctx->pc = 0x2491ECu;
label_2491ec:
    // 0x2491ec: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2491ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2491f0:
    // 0x2491f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2491f4:
    if (ctx->pc == 0x2491F4u) {
        ctx->pc = 0x2491F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491F0u;
        // 0x2491f4: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491F8u;
        goto label_2491f8;
    }
    ctx->pc = 0x2491F0u;
    {
        const bool branch_taken_0x2491f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491F0u;
        // 0x2491f4: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491f0) {
            ctx->pc = 0x249210u;
            goto label_249210;
        }
    }
    ctx->pc = 0x2491F8u;
label_2491f8:
    // 0x2491f8: 0x26830fc8  addiu       $v1, $s4, 0xFC8
    ctx->pc = 0x2491f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_2491fc:
    // 0x2491fc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2491fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_249200:
    // 0x249200: 0x40f809  jalr        $v0
label_249204:
    if (ctx->pc == 0x249204u) {
        ctx->pc = 0x249208u;
        goto label_249208;
    }
    ctx->pc = 0x249200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249208u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249200u, 0x249208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249208u;
label_249208:
    // 0x249208: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x249208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_24920c:
    // 0x24920c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x24920cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_249210:
    // 0x249210: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x249210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_249214:
    // 0x249214: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x249214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
label_249218:
    // 0x249218: 0x26840fc8  addiu       $a0, $s4, 0xFC8
    ctx->pc = 0x249218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_24921c:
    // 0x24921c: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x24921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_249220:
    // 0x249220: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x249220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249224:
    // 0x249224: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x249224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_249228:
    // 0x249228: 0x40f809  jalr        $v0
label_24922c:
    if (ctx->pc == 0x24922Cu) {
        ctx->pc = 0x24922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249228u;
        // 0x24922c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249230u;
        goto label_249230;
    }
    ctx->pc = 0x249228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249230u);
        ctx->pc = 0x24922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249228u;
        // 0x24922c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249228u, 0x249230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249230u;
label_249230:
    // 0x249230: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x249230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_249234:
    // 0x249234: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x249234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_249238:
    // 0x249238: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x249238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24923c:
    // 0x24923c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24923cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_249240:
    // 0x249240: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x249240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_249244:
    // 0x249244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249248:
    // 0x249248: 0x3e00008  jr          $ra
label_24924c:
    if (ctx->pc == 0x24924Cu) {
        ctx->pc = 0x24924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249248u;
        // 0x24924c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249250u;
        goto label_fallthrough_0x249248;
    }
    ctx->pc = 0x249248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249248u;
        // 0x24924c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x249248:
    ctx->pc = 0x249250u;
}
