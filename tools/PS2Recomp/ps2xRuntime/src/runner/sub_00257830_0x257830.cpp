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

// Function: sub_00257830
// Address: 0x257830 - 0x257918
void sub_00257830_0x257830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257830_0x257830");
#endif

    switch (ctx->pc) {
        case 0x257830u: goto label_257830;
        case 0x257834u: goto label_257834;
        case 0x257838u: goto label_257838;
        case 0x25783cu: goto label_25783c;
        case 0x257840u: goto label_257840;
        case 0x257844u: goto label_257844;
        case 0x257848u: goto label_257848;
        case 0x25784cu: goto label_25784c;
        case 0x257850u: goto label_257850;
        case 0x257854u: goto label_257854;
        case 0x257858u: goto label_257858;
        case 0x25785cu: goto label_25785c;
        case 0x257860u: goto label_257860;
        case 0x257864u: goto label_257864;
        case 0x257868u: goto label_257868;
        case 0x25786cu: goto label_25786c;
        case 0x257870u: goto label_257870;
        case 0x257874u: goto label_257874;
        case 0x257878u: goto label_257878;
        case 0x25787cu: goto label_25787c;
        case 0x257880u: goto label_257880;
        case 0x257884u: goto label_257884;
        case 0x257888u: goto label_257888;
        case 0x25788cu: goto label_25788c;
        case 0x257890u: goto label_257890;
        case 0x257894u: goto label_257894;
        case 0x257898u: goto label_257898;
        case 0x25789cu: goto label_25789c;
        case 0x2578a0u: goto label_2578a0;
        case 0x2578a4u: goto label_2578a4;
        case 0x2578a8u: goto label_2578a8;
        case 0x2578acu: goto label_2578ac;
        case 0x2578b0u: goto label_2578b0;
        case 0x2578b4u: goto label_2578b4;
        case 0x2578b8u: goto label_2578b8;
        case 0x2578bcu: goto label_2578bc;
        case 0x2578c0u: goto label_2578c0;
        case 0x2578c4u: goto label_2578c4;
        case 0x2578c8u: goto label_2578c8;
        case 0x2578ccu: goto label_2578cc;
        case 0x2578d0u: goto label_2578d0;
        case 0x2578d4u: goto label_2578d4;
        case 0x2578d8u: goto label_2578d8;
        case 0x2578dcu: goto label_2578dc;
        case 0x2578e0u: goto label_2578e0;
        case 0x2578e4u: goto label_2578e4;
        case 0x2578e8u: goto label_2578e8;
        case 0x2578ecu: goto label_2578ec;
        case 0x2578f0u: goto label_2578f0;
        case 0x2578f4u: goto label_2578f4;
        case 0x2578f8u: goto label_2578f8;
        case 0x2578fcu: goto label_2578fc;
        case 0x257900u: goto label_257900;
        case 0x257904u: goto label_257904;
        case 0x257908u: goto label_257908;
        case 0x25790cu: goto label_25790c;
        case 0x257910u: goto label_257910;
        case 0x257914u: goto label_257914;
        default: break;
    }

    ctx->pc = 0x257830u;

label_257830:
    // 0x257830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x257830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_257834:
    // 0x257834: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x257834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_257838:
    // 0x257838: 0x8c633fc0  lw          $v1, 0x3FC0($v1)
    ctx->pc = 0x257838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16320)));
label_25783c:
    // 0x25783c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_257840:
    // 0x257840: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x257840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_257844:
    // 0x257844: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x257844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_257848:
    // 0x257848: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x257848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_25784c:
    // 0x25784c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_257850:
    // 0x257850: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x257850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_257854:
    // 0x257854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_257858:
    // 0x257858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25785c:
    // 0x25785c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25785cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_257860:
    // 0x257860: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x257860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_257864:
    // 0x257864: 0x34a50012  ori         $a1, $a1, 0x12
    ctx->pc = 0x257864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18);
label_257868:
    // 0x257868: 0x40f809  jalr        $v0
label_25786c:
    if (ctx->pc == 0x25786Cu) {
        ctx->pc = 0x25786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257868u;
        // 0x25786c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257870u;
        goto label_257870;
    }
    ctx->pc = 0x257868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x257870u);
        ctx->pc = 0x25786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257868u;
        // 0x25786c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257868u, 0x257870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257870u;
label_257870:
    // 0x257870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257874:
    // 0x257874: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_257878:
    if (ctx->pc == 0x257878u) {
        ctx->pc = 0x257878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257874u;
        // 0x257878: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25787Cu;
        goto label_25787c;
    }
    ctx->pc = 0x257874u;
    {
        const bool branch_taken_0x257874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x257878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257874u;
        // 0x257878: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257874) {
            ctx->pc = 0x2578FCu;
            goto label_2578fc;
        }
    }
    ctx->pc = 0x25787Cu;
label_25787c:
    // 0x25787c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25787cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_257880:
    // 0x257880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257884:
    // 0x257884: 0x244270e0  addiu       $v0, $v0, 0x70E0
    ctx->pc = 0x257884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28896));
label_257888:
    // 0x257888: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x257888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25788c:
    // 0x25788c: 0x2606002c  addiu       $a2, $s0, 0x2C
    ctx->pc = 0x25788cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_257890:
    // 0x257890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257894:
    // 0x257894: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x257894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_257898:
    // 0x257898: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x257898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_25789c:
    // 0x25789c: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x25789cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
label_2578a0:
    // 0x2578a0: 0x24841228  addiu       $a0, $a0, 0x1228
    ctx->pc = 0x2578a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4648));
label_2578a4:
    // 0x2578a4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2578a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2578a8:
    // 0x2578a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2578a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2578ac:
    // 0x2578ac: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2578acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_2578b0:
    // 0x2578b0: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2578b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_2578b4:
    // 0x2578b4: 0xae060030  sw          $a2, 0x30($s0)
    ctx->pc = 0x2578b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
label_2578b8:
    // 0x2578b8: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x2578b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
label_2578bc:
    // 0x2578bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2578bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2578c0:
    // 0x2578c0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2578c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2578c4:
    // 0x2578c4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2578c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2578c8:
    // 0x2578c8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2578c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2578cc:
    // 0x2578cc: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2578ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_2578d0:
    // 0x2578d0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2578d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2578d4:
    // 0x2578d4: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x2578d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
label_2578d8:
    // 0x2578d8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2578d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_2578dc:
    // 0x2578dc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2578dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_2578e0:
    // 0x2578e0: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x2578e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_2578e4:
    // 0x2578e4: 0xa2070002  sb          $a3, 0x2($s0)
    ctx->pc = 0x2578e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 7));
label_2578e8:
    // 0x2578e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2578e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2578ec:
    // 0x2578ec: 0xc093958  jal         func_24E560
label_2578f0:
    if (ctx->pc == 0x2578F0u) {
        ctx->pc = 0x2578F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578ECu;
        // 0x2578f0: 0xa602003c  sh          $v0, 0x3C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2578F4u;
        goto label_2578f4;
    }
    ctx->pc = 0x2578ECu;
    SET_GPR_U32(ctx, 31, 0x2578F4u);
    ctx->pc = 0x2578F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2578ECu;
    // 0x2578f0: 0xa602003c  sh          $v0, 0x3C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x2578ECu, 0x2578F4u)) {
        return;
    }
    ctx->pc = 0x2578F4u;
label_2578f4:
    // 0x2578f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2578f8:
    if (ctx->pc == 0x2578F8u) {
        ctx->pc = 0x2578F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578F4u;
        // 0x2578f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2578FCu;
        goto label_2578fc;
    }
    ctx->pc = 0x2578F4u;
    {
        const bool branch_taken_0x2578f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578F4u;
        // 0x2578f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578f4) {
            ctx->pc = 0x257900u;
            goto label_257900;
        }
    }
    ctx->pc = 0x2578FCu;
label_2578fc:
    // 0x2578fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2578fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257900:
    // 0x257900: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x257900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_257904:
    // 0x257904: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x257904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_257908:
    // 0x257908: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x257908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25790c:
    // 0x25790c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25790cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_257910:
    // 0x257910: 0x3e00008  jr          $ra
label_257914:
    if (ctx->pc == 0x257914u) {
        ctx->pc = 0x257914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257910u;
        // 0x257914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257918u;
        goto label_fallthrough_0x257910;
    }
    ctx->pc = 0x257910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257910u;
        // 0x257914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x257910:
    ctx->pc = 0x257918u;
}
