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

// Function: sub_001035B8
// Address: 0x1035b8 - 0x1036d8
void sub_001035B8_0x1035b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001035B8_0x1035b8");
#endif

    switch (ctx->pc) {
        case 0x103608u: goto label_103608;
        case 0x103620u: goto label_103620;
        case 0x103634u: goto label_103634;
        case 0x103650u: goto label_103650;
        case 0x103688u: goto label_103688;
        case 0x103698u: goto label_103698;
        default: break;
    }

    ctx->pc = 0x1035b8u;

    // 0x1035b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1035b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1035bc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1035bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1035c0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1035c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1035c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1035c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035c8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1035c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1035cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1035ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035d0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1035d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x1035d4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1035d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035d8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1035d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1035dc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1035dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1035e0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1035e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1035e4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1035e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1035e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1035e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1035ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1035ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1035f0: 0x8e62025c  lw          $v0, 0x25C($s3)
    ctx->pc = 0x1035f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x1035f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1035F4u;
    {
        const bool branch_taken_0x1035f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035F4u;
        // 0x1035f8: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035f4) {
            ctx->pc = 0x103674u;
            goto label_103674;
        }
    }
    ctx->pc = 0x1035FCu;
    // 0x1035fc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1035fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103600: 0x2671021c  addiu       $s1, $s3, 0x21C
    ctx->pc = 0x103600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 540));
    // 0x103604: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x103604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_103608:
    // 0x103608: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x103608u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x10360c: 0x17c0000b  bnez        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x10360Cu;
    {
        const bool branch_taken_0x10360c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x103610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10360Cu;
        // 0x103610: 0x2670021c  addiu       $s0, $s3, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10360c) {
            ctx->pc = 0x10363Cu;
            goto label_10363c;
        }
    }
    ctx->pc = 0x103614u;
    // 0x103614: 0x8e448668  lw          $a0, -0x7998($s2)
    ctx->pc = 0x103614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936168)));
    // 0x103618: 0xc0595fa  jal         func_1657E8
    ctx->pc = 0x103618u;
    SET_GPR_U32(ctx, 31, 0x103620u);
    ctx->pc = 0x10361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103618u;
    // 0x10361c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1657E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1657E8u, 0x103618u, 0x103620u)) {
        return;
    }
    ctx->pc = 0x103620u;
label_103620:
    // 0x103620: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x103620u;
    {
        const bool branch_taken_0x103620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103620) {
            ctx->pc = 0x103624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103620u;
            // 0x103624: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103640u;
            goto label_103640;
        }
    }
    ctx->pc = 0x103628u;
    // 0x103628: 0x8e448668  lw          $a0, -0x7998($s2)
    ctx->pc = 0x103628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936168)));
    // 0x10362c: 0xc05960a  jal         func_165828
    ctx->pc = 0x10362Cu;
    SET_GPR_U32(ctx, 31, 0x103634u);
    ctx->pc = 0x103630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10362Cu;
    // 0x103630: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165828u, 0x10362Cu, 0x103634u)) {
        return;
    }
    ctx->pc = 0x103634u;
label_103634:
    // 0x103634: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x103634u;
    {
        const bool branch_taken_0x103634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103634) {
            ctx->pc = 0x103638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103634u;
            // 0x103638: 0x8e62025c  lw          $v0, 0x25C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103660u;
            goto label_103660;
        }
    }
    ctx->pc = 0x10363Cu;
label_10363c:
    // 0x10363c: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x10363cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_103640:
    // 0x103640: 0x8e448668  lw          $a0, -0x7998($s2)
    ctx->pc = 0x103640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936168)));
    // 0x103644: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x103644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103648: 0xc059092  jal         func_164248
    ctx->pc = 0x103648u;
    SET_GPR_U32(ctx, 31, 0x103650u);
    ctx->pc = 0x10364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103648u;
    // 0x10364c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x103648u, 0x103650u)) {
        return;
    }
    ctx->pc = 0x103650u;
label_103650:
    // 0x103650: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x103650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103654: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x103654u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x103658: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x103658u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x10365c: 0x8e62025c  lw          $v0, 0x25C($s3)
    ctx->pc = 0x10365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
label_103660:
    // 0x103660: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x103660u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x103664: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x103664u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x103668: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x103668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10366c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10366Cu;
    {
        const bool branch_taken_0x10366c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10366Cu;
        // 0x103670: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10366c) {
            ctx->pc = 0x103608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103608;
        }
    }
    ctx->pc = 0x103674u;
label_103674:
    // 0x103674: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x103674u;
    {
        const bool branch_taken_0x103674 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x103678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103674u;
        // 0x103678: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103674) {
            ctx->pc = 0x1036A4u;
            goto label_1036a4;
        }
    }
    ctx->pc = 0x10367Cu;
    // 0x10367c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x10367cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103680: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x103680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103684: 0x0  nop
    ctx->pc = 0x103684u;
    // NOP
label_103688:
    // 0x103688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10368c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10368cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x103690: 0xc040e20  jal         func_103880
    ctx->pc = 0x103690u;
    SET_GPR_U32(ctx, 31, 0x103698u);
    ctx->pc = 0x103694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103690u;
    // 0x103694: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103880u, 0x103690u, 0x103698u)) {
        return;
    }
    ctx->pc = 0x103698u;
label_103698:
    // 0x103698: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x103698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x10369c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10369Cu;
    {
        const bool branch_taken_0x10369c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10369c) {
            ctx->pc = 0x1036A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10369Cu;
            // 0x1036a0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103688;
        }
    }
    ctx->pc = 0x1036A4u;
label_1036a4:
    // 0x1036a4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1036a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1036a8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1036a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1036ac: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1036acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1036b0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1036b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1036b4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1036b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1036b8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1036b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1036bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1036bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1036c0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1036c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1036c4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1036c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1036c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1036c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1036cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1036CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1036D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036CCu;
        // 0x1036d0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1036CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1036D4u;
    // 0x1036d4: 0x0  nop
    ctx->pc = 0x1036d4u;
    // NOP
    ctx->pc = 0x1036d8u;
}
